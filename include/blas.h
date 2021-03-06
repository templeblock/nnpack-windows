#pragma once

#ifdef __cplusplus
#include <cstddef>
#include <cstdint>
#include <cstdbool>
#else
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#endif

#ifdef __cplusplus  
extern "C" {  // only need to export C interface if  
			  // used by C++ source code  
#endif  
	
void nnp_sgemm_only_4x24__fma3(size_t k, size_t update, const float* a, const float* b, float* c, size_t row_stride_c);
void nnp_sgemm_upto_4x24__fma3(uint32_t mr, uint32_t nr, size_t k, size_t update, const float* a, const float* b, float* c, size_t row_stride_c);

void nnp_conv1x1_only_2x4__fma3(size_t input_channels, size_t image_size, const float* input, const float* kernel, float* output);
void nnp_conv1x1_upto_2x4__fma3(uint32_t mr, uint32_t nr, size_t input_channels, size_t image_size, const float* input, const float* kernel, float* output);

void nnp_c8gemm_only_2x2__fma3(size_t k, size_t update, const float* a, const float* b, float* c, size_t row_stride_c);
void nnp_c8gemm_upto_2x2__fma3(uint32_t mr, uint32_t nr, size_t k, size_t update, const float* a, const float* b, float* c, size_t row_stride_c);

void nnp_c8gemm_conjb_only_2x2__fma3(size_t k, size_t update, const float* a, const float* b, float* c, size_t row_stride_c);
void nnp_c8gemm_conjb_upto_2x2__fma3(uint32_t mr, uint32_t nr, size_t k, size_t update, const float* a, const float* b, float* c, size_t row_stride_c);

void nnp_c8gemm_conjb_transc_only_2x2__fma3(size_t k, size_t update, const float* a, const float* b, float* c, size_t row_stride_c);
void nnp_c8gemm_conjb_transc_upto_2x2__fma3(uint32_t mr, uint32_t nr, size_t k, size_t update, const float* a, const float* b, float* c, size_t row_stride_c);

void nnp_s4c6gemm_only_2x2__fma3(size_t k, size_t update, const float* a, const float* b, float* c, size_t row_stride_c);
void nnp_s4c6gemm_upto_2x2__fma3(uint32_t mr, uint32_t nr, size_t k, size_t update, const float* a, const float* b, float* c, size_t row_stride_c);

void nnp_s4c6gemm_conjb_only_2x2__fma3(size_t k, size_t update, const float* a, const float* b, float* c, size_t row_stride_c);
void nnp_s4c6gemm_conjb_upto_2x2__fma3(uint32_t mr, uint32_t nr, size_t k, size_t update, const float* a, const float* b, float* c, size_t row_stride_c);

void nnp_s4c6gemm_conjb_transc_only_2x2__fma3(size_t k, size_t update, const float* a, const float* b, float* c, size_t row_stride_c);
void nnp_s4c6gemm_conjb_transc_upto_2x2__fma3(uint32_t mr, uint32_t nr, size_t k, size_t update, const float* a, const float* b, float* c, size_t row_stride_c);

void nnp_s8gemm_only_3x4__fma3(size_t k, size_t update, const float* a, const float* b, float* c, size_t row_stride_c);
void nnp_s8gemm_upto_3x4__fma3(uint32_t mr, uint32_t nr, size_t k, size_t update, const float* a, const float* b, float* c, size_t row_stride_c);

void nnp_sdotxf1__avx2(const float* x, const float* y, size_t stride_y, float* sum, size_t n);
void nnp_sdotxf2__avx2(const float* x, const float* y, size_t stride_y, float* sum, size_t n);
void nnp_sdotxf3__avx2(const float* x, const float* y, size_t stride_y, float* sum, size_t n);
void nnp_sdotxf4__avx2(const float* x, const float* y, size_t stride_y, float* sum, size_t n);
void nnp_sdotxf5__avx2(const float* x, const float* y, size_t stride_y, float* sum, size_t n);
void nnp_sdotxf6__avx2(const float* x, const float* y, size_t stride_y, float* sum, size_t n);
void nnp_sdotxf7__avx2(const float* x, const float* y, size_t stride_y, float* sum, size_t n);
void nnp_sdotxf8__avx2(const float* x, const float* y, size_t stride_y, float* sum, size_t n);

void nnp_shdotxf1__avx2(const float* x, const void* y, size_t stride_y, float* sum, size_t n);
void nnp_shdotxf2__avx2(const float* x, const void* y, size_t stride_y, float* sum, size_t n);
void nnp_shdotxf3__avx2(const float* x, const void* y, size_t stride_y, float* sum, size_t n);
void nnp_shdotxf4__avx2(const float* x, const void* y, size_t stride_y, float* sum, size_t n);
void nnp_shdotxf5__avx2(const float* x, const void* y, size_t stride_y, float* sum, size_t n);
void nnp_shdotxf6__avx2(const float* x, const void* y, size_t stride_y, float* sum, size_t n);
void nnp_shdotxf7__avx2(const float* x, const void* y, size_t stride_y, float* sum, size_t n);
void nnp_shdotxf8__avx2(const float* x, const void* y, size_t stride_y, float* sum, size_t n);

#ifdef __cplusplus  
}
#endif  
