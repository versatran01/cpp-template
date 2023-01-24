cc_binary(NAME vector_add SRCS vector_add.cu INCDIRS .)
set_target_properties(cpp_vector_add PROPERTIES CUDA_SEPARABLE_COMPILATION ON)
