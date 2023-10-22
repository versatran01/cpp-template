add_executable(imgui_demo imgui_glfw_opengl3.cpp)
target_link_libraries(imgui_demo PRIVATE imgui_glfw_opengl3)

add_executable(implot_demo implot_glfw_opengl3.cpp)
target_link_libraries(implot_demo PRIVATE implot)

add_executable(imnodes_demo node_editor.cpp imnodes_glfw_opengl3.cpp)
target_link_libraries(imnodes_demo PRIVATE imnodes)
