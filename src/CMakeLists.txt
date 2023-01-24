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

  add_subdirectory(cuda)
  add_subdirectory(gui)