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

typedef void (*nnp_wt_function)(const float*, float*);

#ifdef __cplusplus
extern "C" {
#endif
	void nnp_iwt_f6k3__fma3(const float d[], float w[]);
	void nnp_kwt_f6k3__fma3(const float g[], float w[]);
	void nnp_owt_f6k3__fma3(const float m[], float s[]);
#ifdef __cplusplus
}
#endif