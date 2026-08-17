import GLFW_jll
import FreeType2_jll

output_dir = joinpath(@__DIR__, "cimgui_comments_output")
if !isdir(output_dir)
    mkdir(output_dir)
end

# Regenerate the cimgui bindings with comments enabled
cd(joinpath(@__DIR__, "cimgui/generator")) do
    script = read("generator.sh", String)
    script = replace(script, "TARGETS=\"" => "TARGETS=\"comments "; count=1)
    write("generator_with_comments.sh", script)
    chmod("generator_with_comments.sh", 0o744)
    run(`./generator_with_comments.sh`)

    for json_file in filter(endswith(".json"), readdir("output"; join=true))
        cp(json_file, joinpath(output_dir, basename(json_file)); force=true)
    end
end

cd(@__DIR__) do
    if !isdir("build")
        mkdir("build")
    end

    cd("build") do
        # FreeType is required by CMakeLists.txt. `ft2build.h` lives in
        # `include/freetype2`, and the headers it pulls in reference each
        # other from `include`, so both are passed.
        freetype_include = let dir = joinpath(FreeType2_jll.artifact_dir, "include")
            freetype2_dir = joinpath(dir, "freetype2")
            "$(dir);$(freetype2_dir)"
        end

        run(`cmake -DCMAKE_BUILD_TYPE=Release
                   -DGLFW_LIBRARY=$(GLFW_jll.libglfw)
                   -DGLFW_INCLUDE=$(GLFW_jll.artifact_dir)/include
                   -DFREETYPE_LIBRARY=$(FreeType2_jll.libfreetype)
                   -DFREETYPE_INCLUDE_DIRS=$(freetype_include) ..`)
        nprocs = Sys.CPU_THREADS
        run(`cmake --build . -j$(nprocs)`)
    end
end
