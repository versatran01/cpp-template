find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

# imgui
add_library(
  imgui
  imgui/imgui.cpp imgui/imgui_draw.cpp imgui/imgui_widgets.cpp
  imgui/imgui_tables.cpp imgui/imgui_demo.cpp imgui/misc/cpp/imgui_stdlib.cpp)
target_include_directories(imgui PUBLIC imgui)
target_compile_definitions(imgui PUBLIC -DImDrawIdx=unsigned)

add_library(imgui_glfw_opengl3 imgui/backends/imgui_impl_glfw.cpp
                               imgui/backends/imgui_impl_opengl3.cpp)
target_include_directories(imgui_glfw_opengl3 PUBLIC imgui/backends)
target_link_libraries(imgui_glfw_opengl3 PUBLIC imgui glfw OpenGL::GL dl)

# implot
add_library(implot implot/implot.cpp implot/implot_items.cpp
                   implot/implot_demo.cpp)
target_include_directories(implot PUBLIC implot)
target_link_libraries(implot PUBLIC imgui_glfw_opengl3)
target_compile_definitions(implot PUBLIC IMPLOT_DEBUG IMPLOT_DLL_EXPORT
                                         IMPLOT_BACKEND_ENABLE_OPENGL3)

# imnodes
add_library(imnodes imnodes/imnodes.cpp)
target_include_directories(imnodes PUBLIC imnodes)
target_link_libraries(imnodes PUBLIC imgui_glfw_opengl3)
target_compile_definitions(imnodes PUBLIC IMGUI_DEFINE_MATH_OPERATORS)
