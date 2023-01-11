cmake_minimum_required(VERSION 3.20)
project(cpp)

set(PROJECT_NAMESPACE ${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 17)
list(PREPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CC_NAMESPACE ${PROJECT_NAMESPACE})
include(CMakeHelpers)

option(BUILD_TESTING "Build testing" OFF)
option(BUILD_BENCHMARK "Build benchmark" OFF)

add_library(cpp_options INTERFACE)
include(CompilerWarnings)
enable_warnings(cpp_options)
include(Sanitizers)
enable_sanitizers(cpp_options)
include(Ccache)

find_package(GTest REQUIRED)
find_package(benchmark REQUIRED)

enable_testing()
add_subdirectory(src)
