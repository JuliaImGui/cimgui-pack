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
  IMGUI_ENABLE_TEST_ENGINE)

# Find GLFW
if (NOT DEFINED GLFW_LIBRARY)
  find_package(glfw3 3.1 REQUIRED)
  set(GLFW_LIBRARY "glfw")
endif()
target_link_libraries(${target} "${GLFW_LIBRARY}")

if (WIN32)
  add_definitions("-DIMGUI_IMPL_API=extern \"C\" __declspec\(dllexport\)")
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

install(EXPORT ${target}Targets
        NAMESPACE ${target}::
        FILE ${target}-config.cmake
        DESTINATION lib/cmake/${target})

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/compile_commands.json DESTINATION share)
