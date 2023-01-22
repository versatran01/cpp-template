cc_library(
  NAME header
  HDRS header.h
  INCDIRS .)

cc_library(
  NAME library
  SRCS library.cc
  HDRS library.h
  INCDIRS .)

cc_binary(
  NAME main
  SRCS main.cc
  DEPS cpp_header cpp_library)

cc_test(
  NAME library_test
  SRCS library_test.cc
  DEPS cpp_library GTest::GTest GTest::Main)

cc_bench(
  NAME library_bench
  SRCS library_bench.cc
  DEPS cpp_library benchmark::benchmark benchmark::benchmark_main)

cc_binary(
  NAME imgui_demo
  SRCS imgui_glfw.cpp
  DEPS imgui_glfw)

cc_binary(
  NAME implot_demo
  SRCS implot_glfw.cpp
  DEPS implot)

# TODO: maybe change this to cu_binary?
cc_binary(NAME vector_add SRCS vector_add.cu INCDIRS .)
set_target_properties(cpp_vector_add PROPERTIES CUDA_SEPARABLE_COMPILATION ON)
