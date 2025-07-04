/// @file xed-ild-enum.c

// This file was automatically generated.
// Do not edit this file.

#include <string.h>
#include <assert.h>
#include "xed-ild-enum.h"

typedef struct {
    const char* name;
    xed_ild_map_enum_t value;
} name_table_xed_ild_map_enum_t;
static const name_table_xed_ild_map_enum_t name_array_xed_ild_map_enum_t[] = {
{"AMD_3DNOW", XED_ILD_AMD_3DNOW},
{"AMD_XOP8", XED_ILD_AMD_XOP8},
{"AMD_XOP9", XED_ILD_AMD_XOP9},
{"AMD_XOPA", XED_ILD_AMD_XOPA},
{"EVEX_MAP1", XED_ILD_EVEX_MAP1},
{"EVEX_MAP2", XED_ILD_EVEX_MAP2},
{"EVEX_MAP3", XED_ILD_EVEX_MAP3},
{"EVEX_MAP4", XED_ILD_EVEX_MAP4},
{"EVEX_MAP5", XED_ILD_EVEX_MAP5},
{"EVEX_MAP6", XED_ILD_EVEX_MAP6},
{"EVEX_MAP7", XED_ILD_EVEX_MAP7},
{"LEGACY_MAP0", XED_ILD_LEGACY_MAP0},
{"LEGACY_MAP1", XED_ILD_LEGACY_MAP1},
{"LEGACY_MAP2", XED_ILD_LEGACY_MAP2},
{"LEGACY_MAP3", XED_ILD_LEGACY_MAP3},
{"VEX_MAP1", XED_ILD_VEX_MAP1},
{"VEX_MAP2", XED_ILD_VEX_MAP2},
{"VEX_MAP3", XED_ILD_VEX_MAP3},
{"VEX_MAP5", XED_ILD_VEX_MAP5},
{"VEX_MAP7", XED_ILD_VEX_MAP7},
{"MAP_INVALID", XED_ILD_MAP_INVALID},
{"LAST", XED_ILD_LAST},
{0, XED_ILD_LAST},
};

        
xed_ild_map_enum_t str2xed_ild_map_enum_t(const char* s)
{
   const name_table_xed_ild_map_enum_t* p = name_array_xed_ild_map_enum_t;
   while( p->name ) {
     if (strcmp(p->name,s) == 0) {
      return p->value;
     }
     p++;
   }
        

   return XED_ILD_LAST;
}


const char* xed_ild_map_enum_t2str(const xed_ild_map_enum_t p)
{
   const name_table_xed_ild_map_enum_t* q = name_array_xed_ild_map_enum_t;
   while( q->name ) {
      if (q->value == p) {
         return q->name;
      }
      q++;
   }
   return "???";
}

xed_ild_map_enum_t xed_ild_map_enum_t_last(void) {
    return XED_ILD_LAST;
}
       
/*

Here is a skeleton switch statement embedded in a comment


  switch(p) {
  case XED_ILD_AMD_3DNOW:
  case XED_ILD_AMD_XOP8:
  case XED_ILD_AMD_XOP9:
  case XED_ILD_AMD_XOPA:
  case XED_ILD_EVEX_MAP1:
  case XED_ILD_EVEX_MAP2:
  case XED_ILD_EVEX_MAP3:
  case XED_ILD_EVEX_MAP4:
  case XED_ILD_EVEX_MAP5:
  case XED_ILD_EVEX_MAP6:
  case XED_ILD_EVEX_MAP7:
  case XED_ILD_LEGACY_MAP0:
  case XED_ILD_LEGACY_MAP1:
  case XED_ILD_LEGACY_MAP2:
  case XED_ILD_LEGACY_MAP3:
  case XED_ILD_VEX_MAP1:
  case XED_ILD_VEX_MAP2:
  case XED_ILD_VEX_MAP3:
  case XED_ILD_VEX_MAP5:
  case XED_ILD_VEX_MAP7:
  case XED_ILD_MAP_INVALID:
  case XED_ILD_LAST:
  default:
     xed_assert(0);
  }
*/
