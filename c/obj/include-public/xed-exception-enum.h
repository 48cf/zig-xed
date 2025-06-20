/// @file xed-exception-enum.h

// This file was automatically generated.
// Do not edit this file.

#if !defined(XED_EXCEPTION_ENUM_H)
# define XED_EXCEPTION_ENUM_H
#include "xed-common-hdrs.h"
#define XED_EXCEPTION_INVALID_DEFINED 1
#define XED_EXCEPTION_AMX_E1_DEFINED 1
#define XED_EXCEPTION_AMX_E10_DEFINED 1
#define XED_EXCEPTION_AMX_E11_DEFINED 1
#define XED_EXCEPTION_AMX_E11_EVEX_DEFINED 1
#define XED_EXCEPTION_AMX_E1_EVEX_DEFINED 1
#define XED_EXCEPTION_AMX_E2_DEFINED 1
#define XED_EXCEPTION_AMX_E2_EVEX_DEFINED 1
#define XED_EXCEPTION_AMX_E3_DEFINED 1
#define XED_EXCEPTION_AMX_E3_EVEX_DEFINED 1
#define XED_EXCEPTION_AMX_E4_DEFINED 1
#define XED_EXCEPTION_AMX_E5_DEFINED 1
#define XED_EXCEPTION_AMX_E6_DEFINED 1
#define XED_EXCEPTION_AMX_E7_EVEX_DEFINED 1
#define XED_EXCEPTION_AMX_E8_EVEX_DEFINED 1
#define XED_EXCEPTION_AMX_E9_DEFINED 1
#define XED_EXCEPTION_APX_EVEX_BMI_DEFINED 1
#define XED_EXCEPTION_APX_EVEX_CCMP_DEFINED 1
#define XED_EXCEPTION_APX_EVEX_CET_WRSS_DEFINED 1
#define XED_EXCEPTION_APX_EVEX_CET_WRUSS_DEFINED 1
#define XED_EXCEPTION_APX_EVEX_CFCMOV_DEFINED 1
#define XED_EXCEPTION_APX_EVEX_CMPCCXADD_DEFINED 1
#define XED_EXCEPTION_APX_EVEX_ENQCMD_DEFINED 1
#define XED_EXCEPTION_APX_EVEX_INT_DEFINED 1
#define XED_EXCEPTION_APX_EVEX_INVEPT_DEFINED 1
#define XED_EXCEPTION_APX_EVEX_INVPCID_DEFINED 1
#define XED_EXCEPTION_APX_EVEX_INVVPID_DEFINED 1
#define XED_EXCEPTION_APX_EVEX_KMOV_DEFINED 1
#define XED_EXCEPTION_APX_EVEX_MOVRS_DEFINED 1
#define XED_EXCEPTION_APX_EVEX_PP2_DEFINED 1
#define XED_EXCEPTION_APX_EVEX_RAO_INT_DEFINED 1
#define XED_EXCEPTION_APX_LEGACY_JMPABS_DEFINED 1
#define XED_EXCEPTION_AVX512_E1_DEFINED 1
#define XED_EXCEPTION_AVX512_E10_DEFINED 1
#define XED_EXCEPTION_AVX512_E10NF_DEFINED 1
#define XED_EXCEPTION_AVX512_E11_DEFINED 1
#define XED_EXCEPTION_AVX512_E12_DEFINED 1
#define XED_EXCEPTION_AVX512_E12NP_DEFINED 1
#define XED_EXCEPTION_AVX512_E1NF_DEFINED 1
#define XED_EXCEPTION_AVX512_E2_DEFINED 1
#define XED_EXCEPTION_AVX512_E3_DEFINED 1
#define XED_EXCEPTION_AVX512_E3NF_DEFINED 1
#define XED_EXCEPTION_AVX512_E4_DEFINED 1
#define XED_EXCEPTION_AVX512_E4NF_DEFINED 1
#define XED_EXCEPTION_AVX512_E5_DEFINED 1
#define XED_EXCEPTION_AVX512_E5NF_DEFINED 1
#define XED_EXCEPTION_AVX512_E6_DEFINED 1
#define XED_EXCEPTION_AVX512_E6NF_DEFINED 1
#define XED_EXCEPTION_AVX512_E7NM_DEFINED 1
#define XED_EXCEPTION_AVX512_E7NM128_DEFINED 1
#define XED_EXCEPTION_AVX512_E9NF_DEFINED 1
#define XED_EXCEPTION_AVX512_K20_DEFINED 1
#define XED_EXCEPTION_AVX512_K21_DEFINED 1
#define XED_EXCEPTION_AVX_TYPE_1_DEFINED 1
#define XED_EXCEPTION_AVX_TYPE_11_DEFINED 1
#define XED_EXCEPTION_AVX_TYPE_12_DEFINED 1
#define XED_EXCEPTION_AVX_TYPE_14_DEFINED 1
#define XED_EXCEPTION_AVX_TYPE_2_DEFINED 1
#define XED_EXCEPTION_AVX_TYPE_2D_DEFINED 1
#define XED_EXCEPTION_AVX_TYPE_3_DEFINED 1
#define XED_EXCEPTION_AVX_TYPE_4_DEFINED 1
#define XED_EXCEPTION_AVX_TYPE_4M_DEFINED 1
#define XED_EXCEPTION_AVX_TYPE_5_DEFINED 1
#define XED_EXCEPTION_AVX_TYPE_5L_DEFINED 1
#define XED_EXCEPTION_AVX_TYPE_6_DEFINED 1
#define XED_EXCEPTION_AVX_TYPE_7_DEFINED 1
#define XED_EXCEPTION_AVX_TYPE_8_DEFINED 1
#define XED_EXCEPTION_LEGACY_MOVRS_DEFINED 1
#define XED_EXCEPTION_LEGACY_PREFETCH_DEFINED 1
#define XED_EXCEPTION_LEGACY_RAO_INT_DEFINED 1
#define XED_EXCEPTION_MMX_FP_DEFINED 1
#define XED_EXCEPTION_MMX_FP_16ALIGN_DEFINED 1
#define XED_EXCEPTION_MMX_MEM_DEFINED 1
#define XED_EXCEPTION_MMX_NOFP_DEFINED 1
#define XED_EXCEPTION_MMX_NOFP2_DEFINED 1
#define XED_EXCEPTION_MMX_NOMEM_DEFINED 1
#define XED_EXCEPTION_MSR_IMM_EVEX_DEFINED 1
#define XED_EXCEPTION_MSR_IMM_VEX_DEFINED 1
#define XED_EXCEPTION_SSE_TYPE_1_DEFINED 1
#define XED_EXCEPTION_SSE_TYPE_2_DEFINED 1
#define XED_EXCEPTION_SSE_TYPE_2D_DEFINED 1
#define XED_EXCEPTION_SSE_TYPE_3_DEFINED 1
#define XED_EXCEPTION_SSE_TYPE_4_DEFINED 1
#define XED_EXCEPTION_SSE_TYPE_4M_DEFINED 1
#define XED_EXCEPTION_SSE_TYPE_5_DEFINED 1
#define XED_EXCEPTION_SSE_TYPE_7_DEFINED 1
#define XED_EXCEPTION_USER_MSR_EVEX_DEFINED 1
#define XED_EXCEPTION_USER_MSR_LEGACY_DEFINED 1
#define XED_EXCEPTION_USER_MSR_VEX_DEFINED 1
#define XED_EXCEPTION_LAST_DEFINED 1
typedef enum {
  XED_EXCEPTION_INVALID,
  XED_EXCEPTION_AMX_E1,
  XED_EXCEPTION_AMX_E10,
  XED_EXCEPTION_AMX_E11,
  XED_EXCEPTION_AMX_E11_EVEX,
  XED_EXCEPTION_AMX_E1_EVEX,
  XED_EXCEPTION_AMX_E2,
  XED_EXCEPTION_AMX_E2_EVEX,
  XED_EXCEPTION_AMX_E3,
  XED_EXCEPTION_AMX_E3_EVEX,
  XED_EXCEPTION_AMX_E4,
  XED_EXCEPTION_AMX_E5,
  XED_EXCEPTION_AMX_E6,
  XED_EXCEPTION_AMX_E7_EVEX,
  XED_EXCEPTION_AMX_E8_EVEX,
  XED_EXCEPTION_AMX_E9,
  XED_EXCEPTION_APX_EVEX_BMI,
  XED_EXCEPTION_APX_EVEX_CCMP,
  XED_EXCEPTION_APX_EVEX_CET_WRSS,
  XED_EXCEPTION_APX_EVEX_CET_WRUSS,
  XED_EXCEPTION_APX_EVEX_CFCMOV,
  XED_EXCEPTION_APX_EVEX_CMPCCXADD,
  XED_EXCEPTION_APX_EVEX_ENQCMD,
  XED_EXCEPTION_APX_EVEX_INT,
  XED_EXCEPTION_APX_EVEX_INVEPT,
  XED_EXCEPTION_APX_EVEX_INVPCID,
  XED_EXCEPTION_APX_EVEX_INVVPID,
  XED_EXCEPTION_APX_EVEX_KMOV,
  XED_EXCEPTION_APX_EVEX_MOVRS,
  XED_EXCEPTION_APX_EVEX_PP2,
  XED_EXCEPTION_APX_EVEX_RAO_INT,
  XED_EXCEPTION_APX_LEGACY_JMPABS,
  XED_EXCEPTION_AVX512_E1,
  XED_EXCEPTION_AVX512_E10,
  XED_EXCEPTION_AVX512_E10NF,
  XED_EXCEPTION_AVX512_E11,
  XED_EXCEPTION_AVX512_E12,
  XED_EXCEPTION_AVX512_E12NP,
  XED_EXCEPTION_AVX512_E1NF,
  XED_EXCEPTION_AVX512_E2,
  XED_EXCEPTION_AVX512_E3,
  XED_EXCEPTION_AVX512_E3NF,
  XED_EXCEPTION_AVX512_E4,
  XED_EXCEPTION_AVX512_E4NF,
  XED_EXCEPTION_AVX512_E5,
  XED_EXCEPTION_AVX512_E5NF,
  XED_EXCEPTION_AVX512_E6,
  XED_EXCEPTION_AVX512_E6NF,
  XED_EXCEPTION_AVX512_E7NM,
  XED_EXCEPTION_AVX512_E7NM128,
  XED_EXCEPTION_AVX512_E9NF,
  XED_EXCEPTION_AVX512_K20,
  XED_EXCEPTION_AVX512_K21,
  XED_EXCEPTION_AVX_TYPE_1,
  XED_EXCEPTION_AVX_TYPE_11,
  XED_EXCEPTION_AVX_TYPE_12,
  XED_EXCEPTION_AVX_TYPE_14,
  XED_EXCEPTION_AVX_TYPE_2,
  XED_EXCEPTION_AVX_TYPE_2D,
  XED_EXCEPTION_AVX_TYPE_3,
  XED_EXCEPTION_AVX_TYPE_4,
  XED_EXCEPTION_AVX_TYPE_4M,
  XED_EXCEPTION_AVX_TYPE_5,
  XED_EXCEPTION_AVX_TYPE_5L,
  XED_EXCEPTION_AVX_TYPE_6,
  XED_EXCEPTION_AVX_TYPE_7,
  XED_EXCEPTION_AVX_TYPE_8,
  XED_EXCEPTION_LEGACY_MOVRS,
  XED_EXCEPTION_LEGACY_PREFETCH,
  XED_EXCEPTION_LEGACY_RAO_INT,
  XED_EXCEPTION_MMX_FP,
  XED_EXCEPTION_MMX_FP_16ALIGN,
  XED_EXCEPTION_MMX_MEM,
  XED_EXCEPTION_MMX_NOFP,
  XED_EXCEPTION_MMX_NOFP2,
  XED_EXCEPTION_MMX_NOMEM,
  XED_EXCEPTION_MSR_IMM_EVEX,
  XED_EXCEPTION_MSR_IMM_VEX,
  XED_EXCEPTION_SSE_TYPE_1,
  XED_EXCEPTION_SSE_TYPE_2,
  XED_EXCEPTION_SSE_TYPE_2D,
  XED_EXCEPTION_SSE_TYPE_3,
  XED_EXCEPTION_SSE_TYPE_4,
  XED_EXCEPTION_SSE_TYPE_4M,
  XED_EXCEPTION_SSE_TYPE_5,
  XED_EXCEPTION_SSE_TYPE_7,
  XED_EXCEPTION_USER_MSR_EVEX,
  XED_EXCEPTION_USER_MSR_LEGACY,
  XED_EXCEPTION_USER_MSR_VEX,
  XED_EXCEPTION_LAST
} xed_exception_enum_t;

/// This converts strings to #xed_exception_enum_t types.
/// @param s A C-string.
/// @return #xed_exception_enum_t
/// @ingroup ENUM
XED_DLL_EXPORT xed_exception_enum_t str2xed_exception_enum_t(const char* s);
/// This converts strings to #xed_exception_enum_t types.
/// @param p An enumeration element of type xed_exception_enum_t.
/// @return string
/// @ingroup ENUM
XED_DLL_EXPORT const char* xed_exception_enum_t2str(const xed_exception_enum_t p);

/// Returns the last element of the enumeration
/// @return xed_exception_enum_t The last element of the enumeration.
/// @ingroup ENUM
XED_DLL_EXPORT xed_exception_enum_t xed_exception_enum_t_last(void);
#endif
