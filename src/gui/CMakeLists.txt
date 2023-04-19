cc_binary(
  NAME imgui_demo
  SRCS imgui_opengl3_glfw.cpp
  DEPS imgui_opengl3_glfw)

cc_binary(
  NAME implot_demo
  SRCS implot_opengl3_glfw.cpp
  DEPS implot)

cc_binary(
  NAME imnodes_demo
  SRCS node_editor.cpp imnodes_opengl3_glfw.cpp
  DEPS imnodes)
