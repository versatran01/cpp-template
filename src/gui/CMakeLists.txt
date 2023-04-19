cc_binary(
  NAME imgui_demo
  SRCS imgui_glfw_opengl3.cpp
  DEPS imgui_glfw_opengl3)

cc_binary(
  NAME implot_demo
  SRCS implot_glfw_opengl3.cpp
  DEPS implot)

cc_binary(
  NAME imnodes_demo
  SRCS node_editor.cpp imnodes_glfw_opengl3.cpp
  DEPS imnodes)
