cmake_minimum_required(VERSION 3.8.0)

project(cimguipack)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(target cimgui)

add_library(${target} SHARED)

# cimgui and the backends
target_sources(${target} PRIVATE ./cimgui/imgui/imgui.cpp)
target_sources(${target} PRIVATE ./cimgui/imgui/imgui_demo.cpp)
target_sources(${target} PRIVATE ./cimgui/imgui/imgui_draw.cpp)
target_sources(${target} PRIVATE ./cimgui/imgui/imgui_tables.cpp)
target_sources(${target} PRIVATE ./cimgui/imgui/imgui_widgets.cpp)
target_sources(${target} PRIVATE ./cimgui/imgui/backends/imgui_impl_glfw.cpp)
target_sources(${target} PRIVATE ./cimgui/imgui/backends/imgui_impl_opengl3.cpp)
target_sources(${target} PRIVATE ./cimgui/cimgui.cpp)

# Enable freetype:
# https://github.com/ocornut/imgui/blob/master/docs/FONTS.md#using-freetype-rasterizer-imgui_freetype
target_sources(${target} PRIVATE ./cimgui/imgui/misc/freetype/imgui_freetype.cpp)
target_include_directories(${target} PRIVATE ./cimgui/imgui/misc/freetype)
target_compile_definitions(${target} PRIVATE
    IMGUI_ENABLE_FREETYPE
    IMGUI_ENABLE_STB_TRUETYPE
    IMGUI_USE_WCHAR32)

# imgui_test_engine
set(TE_DIR "cimgui_test_engine/imgui_test_engine/imgui_test_engine")
target_sources(${target} PRIVATE
  ${TE_DIR}/imgui_te_context.cpp
  ${TE_DIR}/imgui_te_coroutine.cpp
  ${TE_DIR}/imgui_te_engine.cpp
  ${TE_DIR}/imgui_te_perftool.cpp
  ${TE_DIR}/imgui_te_ui.cpp
  ${TE_DIR}/imgui_te_utils.cpp
  ${TE_DIR}/imgui_capture_tool.cpp
  ${TE_DIR}/imgui_te_exporters.cpp
  ./cimgui_test_engine/cimgui_te.cpp
)

# cimplot
target_sources(${target} PRIVATE ./cimplot/implot/implot.cpp)
target_sources(${target} PRIVATE ./cimplot/implot/implot_items.cpp)
target_sources(${target} PRIVATE ./cimplot/implot/implot_demo.cpp)
target_sources(${target} PRIVATE ./cimplot/cimplot.cpp)

# cimnodes
target_sources(${target} PRIVATE ./cimnodes/imnodes/imnodes.cpp)
target_sources(${target} PRIVATE ./cimnodes/cimnodes.cpp)

target_compile_definitions(${target} PRIVATE
  IMGUI_DISABLE_OBSOLETE_FUNCTIONS=1
  IMNODES_NAMESPACE=imnodes
  IMGUI_ENABLE_TEST_ENGINE
  IMGUI_TEST_ENGINE_ENABLE_CAPTURE=1)

# Find GLFW
if (NOT DEFINED GLFW_LIBRARY)
  find_package(glfw3 3.1 REQUIRED)
  set(GLFW_LIBRARY "glfw")
endif()
if (DEFINED GLFW_INCLUDE)
  target_include_directories(${target} PRIVATE "${GLFW_INCLUDE}")
endif()

target_link_libraries(${target} "${GLFW_LIBRARY}")

# Find FreeType
if(DEFINED FREETYPE_INCLUDE_DIRS AND DEFINED FREETYPE_LIBRARY)
    target_include_directories(${target} PRIVATE ${FREETYPE_INCLUDE_DIRS})
    target_link_libraries(${target} ${FREETYPE_LIBRARY})
else()
    find_package(Freetype REQUIRED)
    target_link_libraries(${target} Freetype::Freetype)
endif()

if (WIN32)
  add_definitions("-DIMGUI_IMPL_API=extern \"C\" __declspec\(dllexport\)")
  # GNU ld auto-exports all symbols only while *no* symbol is explicitly
  # dllexport'd. IMGUI_IMPL_API/CIMGUI_API above trip that, which stops the
  # bare C++ ImGui:: API from being exported. So decorate it explicitly too.
  target_compile_definitions(${target} PRIVATE "IMGUI_API=__declspec(dllexport)")
  target_link_libraries(${target} imm32 opengl32)
elseif(APPLE)
  add_definitions("-DIMGUI_IMPL_API=extern \"C\" ")
  target_link_libraries(${target} "-framework OpenGL")
else()
  add_definitions("-DIMGUI_IMPL_API=extern \"C\" ")
  target_link_libraries(${target} GL)
endif()

target_include_directories(${target} PUBLIC
                           $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/cimgui>
                           $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/cimgui/imgui>
                           $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/cimplot>
                           $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/cimplot/implot>
                           $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/cimnodes>
                           $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/cimnodes/imnodes>
                           $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/${TE_DIR}>
                           $<INSTALL_INTERFACE:include>)

target_compile_features(${target} PRIVATE cxx_std_14)

set(hdrs ${CMAKE_CURRENT_SOURCE_DIR}/cimgui/imgui/imgui.h
         ${CMAKE_CURRENT_SOURCE_DIR}/cimgui/imgui/imgui_internal.h
         ${CMAKE_CURRENT_SOURCE_DIR}/cimgui/imgui/imconfig.h
         ${CMAKE_CURRENT_SOURCE_DIR}/cimgui/imgui/imstb_rectpack.h
         ${CMAKE_CURRENT_SOURCE_DIR}/cimgui/imgui/imstb_textedit.h
         ${CMAKE_CURRENT_SOURCE_DIR}/cimgui/imgui/imstb_truetype.h
         ${CMAKE_CURRENT_SOURCE_DIR}/cimgui/cimgui_impl.h
         ${CMAKE_CURRENT_SOURCE_DIR}/cimgui/cimgui.h
         ${CMAKE_CURRENT_SOURCE_DIR}/cimgui/imgui/misc/freetype/imgui_freetype.h
         ${CMAKE_CURRENT_SOURCE_DIR}/cimplot/implot/implot.h
         ${CMAKE_CURRENT_SOURCE_DIR}/cimplot/implot/implot_internal.h
         ${CMAKE_CURRENT_SOURCE_DIR}/cimplot/cimplot.h
         ${CMAKE_CURRENT_SOURCE_DIR}/cimnodes/imnodes/imnodes.h
         ${CMAKE_CURRENT_SOURCE_DIR}/cimnodes/cimnodes.h
         ${CMAKE_CURRENT_SOURCE_DIR}/cimgui_test_engine/cimgui_te.h)

set_target_properties(${target} PROPERTIES PUBLIC_HEADER "${hdrs}")

install(TARGETS ${target}
        EXPORT ${target}Targets
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        PUBLIC_HEADER DESTINATION include)

# PUBLIC_HEADER flattens everything into include/, but under
# IMGUI_ENABLE_FREETYPE cimgui.h does
#     #include "./imgui/misc/freetype/imgui_freetype.h"
# which is resolved relative to cimgui.h itself. Install a second copy at that
# path so the installed cimgui.h is self-contained for downstream consumers like
# CImPlot3D_jll and imgui_node_editor_jll.
install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/cimgui/imgui/misc/freetype/imgui_freetype.h
        DESTINATION include/imgui/misc/freetype)

install(EXPORT ${target}Targets
        NAMESPACE ${target}::
        FILE ${target}-config.cmake
        DESTINATION lib/cmake/${target})

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/compile_commands.json DESTINATION share)
