add_executable(cpp_vector_add vector_add.cu)
target_include_directories(cpp_vector_add PUBLIC .)
set_target_properties(cpp_vector_add PROPERTIES CUDA_SEPARABLE_COMPILATION ON)
