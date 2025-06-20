/// @file xed-convert-table-init.c

// This file was automatically generated.
// Do not edit this file.

/*BEGIN_LEGAL

Copyright (c) 2025 Intel Corporation

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
  
END_LEGAL */
#include "xed-internal-header.h"
#include "xed-convert-table-init.h"
xed_convert_table_t xed_convert_table[XED_OPERAND_CONVERT_LAST];
static const char* xed_convert_table_ZEROSTR[] = {
/*0x0*/ "",
/*0x1*/ "{z}",
};
static const char* xed_convert_table_SAESTR[] = {
/*0x0*/ "",
/*0x1*/ "{sae}",
};
static const char* xed_convert_table_ROUNDC[] = {
/*0x0*/ "",
/*0x1*/ "{rne-sae}",
/*0x2*/ "{rd-sae}",
/*0x3*/ "{ru-sae}",
/*0x4*/ "{rz-sae}",
};
static const char* xed_convert_table_BCASTSTR[] = {
/*0x0*/ "",
/*0x1*/ "{1to16}",
/*0x2*/ "{4to16}",
/*0x3*/ "{1to8}",
/*0x4*/ "{4to8}",
/*0x5*/ "{1to8}",
/*0x6*/ "{4to8}",
/*0x7*/ "{2to16}",
/*0x8*/ "{2to8}",
/*0x9*/ "{8to16}",
/*0xa*/ "{1to4}",
/*0xb*/ "{1to2}",
/*0xc*/ "{2to4}",
/*0xd*/ "{1to4}",
/*0xe*/ "{1to8}",
/*0xf*/ "{1to16}",
/*0x10*/ "{1to32}",
/*0x11*/ "{1to16}",
/*0x12*/ "{1to32}",
/*0x13*/ "{1to64}",
/*0x14*/ "{2to4}",
/*0x15*/ "{2to8}",
/*0x16*/ "{1to2}",
/*0x17*/ "{1to2}",
/*0x18*/ "{1to4}",
/*0x19*/ "{1to8}",
/*0x1a*/ "{1to2}",
/*0x1b*/ "{1to4}",
};
static const char* xed_convert_table_DFVSTR[] = {
/*0x0*/ "{dfv=}",
/*0x1*/ "{dfv=cf}",
/*0x2*/ "{dfv=zf}",
/*0x3*/ "{dfv=zf,cf}",
/*0x4*/ "{dfv=sf}",
/*0x5*/ "{dfv=sf,cf}",
/*0x6*/ "{dfv=sf,zf}",
/*0x7*/ "{dfv=sf,zf,cf}",
/*0x8*/ "{dfv=of}",
/*0x9*/ "{dfv=of,cf}",
/*0xa*/ "{dfv=of,zf}",
/*0xc*/ "{dfv=of,zf,cf}",
/*0xc*/ "{dfv=of,sf}",
/*0xd*/ "{dfv=of,sf,cf}",
/*0xe*/ "{dfv=of,sf,zf}",
/*0xf*/ "{dfv=of,sf,zf,cf}",
};
void xed_init_convert_tables(void)
{
xed_convert_table[XED_OPERAND_CONVERT_INVALID].table_name = 0;
xed_convert_table[XED_OPERAND_CONVERT_INVALID].limit      = 0;
xed_convert_table[XED_OPERAND_CONVERT_INVALID].opnd       = XED_OPERAND_INVALID;
xed_convert_table[XED_OPERAND_CONVERT_ZEROSTR].table_name = xed_convert_table_ZEROSTR;
xed_convert_table[XED_OPERAND_CONVERT_ZEROSTR].limit      = 2;
xed_convert_table[XED_OPERAND_CONVERT_ZEROSTR].opnd       = XED_OPERAND_ZEROING;
xed_convert_table[XED_OPERAND_CONVERT_SAESTR].table_name = xed_convert_table_SAESTR;
xed_convert_table[XED_OPERAND_CONVERT_SAESTR].limit      = 2;
xed_convert_table[XED_OPERAND_CONVERT_SAESTR].opnd       = XED_OPERAND_SAE;
xed_convert_table[XED_OPERAND_CONVERT_ROUNDC].table_name = xed_convert_table_ROUNDC;
xed_convert_table[XED_OPERAND_CONVERT_ROUNDC].limit      = 5;
xed_convert_table[XED_OPERAND_CONVERT_ROUNDC].opnd       = XED_OPERAND_ROUNDC;
xed_convert_table[XED_OPERAND_CONVERT_BCASTSTR].table_name = xed_convert_table_BCASTSTR;
xed_convert_table[XED_OPERAND_CONVERT_BCASTSTR].limit      = 28;
xed_convert_table[XED_OPERAND_CONVERT_BCASTSTR].opnd       = XED_OPERAND_BCAST;
xed_convert_table[XED_OPERAND_CONVERT_DFVSTR].table_name = xed_convert_table_DFVSTR;
xed_convert_table[XED_OPERAND_CONVERT_DFVSTR].limit      = 16;
xed_convert_table[XED_OPERAND_CONVERT_DFVSTR].opnd       = XED_OPERAND_DFV;
}
