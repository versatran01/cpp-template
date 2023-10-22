add_library(cpp_header INTERFACE)
add_library(cpp_library library.cc)
add_executable(cpp_main main.cc)
target_link_libraries(cpp_main PRIVATE cpp_library cpp_header)

add_executable(cpp_library_test library_test.cc)
target_link_libraries(cpp_library_test PRIVATE cpp_library GTest::GTest GTest::Main)
add_test(NAME cpp_library_test COMMAND cpp_library_test)

add_executable(cpp_library_bench library_bench.cc)
target_link_libraries(cpp_library_bench PRIVATE cpp_library benchmark::benchmark benchmark::benchmark_main)

add_subdirectory(cuda)
add_subdirectory(gui)