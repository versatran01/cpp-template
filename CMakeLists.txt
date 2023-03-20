cmake_minimum_required(VERSION 3.22)

set(CMAKE_CUDA_ARCHITECTURES 86)
project(cpp LANGUAGES CXX CUDA)

enable_language(CUDA)

if(NOT DEFINED CMAKE_CUDA_STANDARD)
  set(CMAKE_CUDA_STANDARD 17)
  set(CMAKE_CUDA_STANDARD_REQUIRED ON)
endif()

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
add_subdirectory(ext)
add_subdirectory(src)
