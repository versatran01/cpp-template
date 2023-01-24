cc_binary(
  NAME imgui_demo
  SRCS imgui_glfw.cpp
  DEPS imgui_glfw)

cc_binary(
  NAME implot_demo
  SRCS implot_glfw.cpp
  DEPS implot)

cc_binary(
  NAME imnodes_demo
  SRCS node_editor.cpp imnodes_glfw.cpp
  DEPS imnodes)
