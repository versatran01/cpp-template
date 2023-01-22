add_library(
  imgui
  imgui/imgui.cpp imgui/imgui_draw.cpp imgui/imgui_widgets.cpp
  imgui/imgui_tables.cpp imgui/imgui_demo.cpp imgui/misc/cpp/imgui_stdlib.cpp)
target_include_directories(imgui PUBLIC imgui)
target_compile_definitions(imgui PUBLIC -DImDrawIdx=unsigned)

add_library(imgui_glfw imgui/backends/imgui_impl_glfw.cpp
                       imgui/backends/imgui_impl_opengl3.cpp)
target_include_directories(imgui_glfw PUBLIC imgui/backends)
target_link_libraries(imgui_glfw PUBLIC imgui glfw OpenGL::GL dl)

# add_library(imgui_sdl2 imgui/backends/imgui_impl_sdl.cpp
# imgui/backends/imgui_impl_opengl3.cpp) target_include_directories(imgui_sdl2
# PUBLIC imgui/backends) target_link_libraries(imgui_sdl2 PUBLIC imgui
# OpenGL::GL SDL2::SDL2 X11::X11)

# implot
add_library(implot implot/implot.cpp implot/implot_items.cpp
                   implot/implot_demo.cpp)
target_include_directories(implot PUBLIC implot)
target_link_libraries(implot PUBLIC imgui_glfw)
target_compile_definitions(implot PUBLIC IMPLOT_DEBUG IMPLOT_DLL_EXPORT
                                         IMPLOT_BACKEND_ENABLE_OPENGL3)
