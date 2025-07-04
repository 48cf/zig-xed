/// @file xed-reg-role-enum.h

// This file was automatically generated.
// Do not edit this file.

#if !defined(XED_REG_ROLE_ENUM_H)
# define XED_REG_ROLE_ENUM_H
#include "xed-common-hdrs.h"
#define XED_REG_ROLE_INVALID_DEFINED 1
#define XED_REG_ROLE_NORMAL_DEFINED 1
#define XED_REG_ROLE_SEGREG0_DEFINED 1
#define XED_REG_ROLE_SEGREG1_DEFINED 1
#define XED_REG_ROLE_BASE0_DEFINED 1
#define XED_REG_ROLE_BASE1_DEFINED 1
#define XED_REG_ROLE_INDEX_DEFINED 1
#define XED_REG_ROLE_LAST_DEFINED 1
typedef enum {
  XED_REG_ROLE_INVALID,
  XED_REG_ROLE_NORMAL, ///< Register is a normal register
  XED_REG_ROLE_SEGREG0, ///< The segment register associated with the first memop
  XED_REG_ROLE_SEGREG1, ///< The segment register associated with the second memop
  XED_REG_ROLE_BASE0, ///< The base register associated with the first memop
  XED_REG_ROLE_BASE1, ///< The base register associated with the second memop
  XED_REG_ROLE_INDEX, ///< The index register associated with the first memop
  XED_REG_ROLE_LAST
} xed_reg_role_enum_t;

/// This converts strings to #xed_reg_role_enum_t types.
/// @param s A C-string.
/// @return #xed_reg_role_enum_t
/// @ingroup ENUM
XED_DLL_EXPORT xed_reg_role_enum_t str2xed_reg_role_enum_t(const char* s);
/// This converts strings to #xed_reg_role_enum_t types.
/// @param p An enumeration element of type xed_reg_role_enum_t.
/// @return string
/// @ingroup ENUM
XED_DLL_EXPORT const char* xed_reg_role_enum_t2str(const xed_reg_role_enum_t p);

/// Returns the last element of the enumeration
/// @return xed_reg_role_enum_t The last element of the enumeration.
/// @ingroup ENUM
XED_DLL_EXPORT xed_reg_role_enum_t xed_reg_role_enum_t_last(void);
#endif
