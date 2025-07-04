/// @file xed-init-width.c

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
void xed_init_width_mappings(void)
{
   xed_width_bits[XED_OPERAND_WIDTH_INVALID][0] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_INVALID][1] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_INVALID][2] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_INVALID][3] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_ASZ][0] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_ASZ][1] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_ASZ][2] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_ASZ][3] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_SSZ][0] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_SSZ][1] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_SSZ][2] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_SSZ][3] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_PSEUDO][0] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_PSEUDO][1] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_PSEUDO][2] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_PSEUDO][3] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_PSEUDOX87][0] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_PSEUDOX87][1] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_PSEUDOX87][2] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_PSEUDOX87][3] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_A16][0] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_A16][1] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_A16][2] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_A16][3] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_A32][0] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_A32][1] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_A32][2] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_A32][3] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_B][0] = 8;
   xed_width_bits[XED_OPERAND_WIDTH_B][1] = 8;
   xed_width_bits[XED_OPERAND_WIDTH_B][2] = 8;
   xed_width_bits[XED_OPERAND_WIDTH_B][3] = 8;
   xed_width_bits[XED_OPERAND_WIDTH_D][0] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_D][1] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_D][2] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_D][3] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_I8][0] = 8;
   xed_width_bits[XED_OPERAND_WIDTH_I8][1] = 8;
   xed_width_bits[XED_OPERAND_WIDTH_I8][2] = 8;
   xed_width_bits[XED_OPERAND_WIDTH_I8][3] = 8;
   xed_width_bits[XED_OPERAND_WIDTH_U8][0] = 8;
   xed_width_bits[XED_OPERAND_WIDTH_U8][1] = 8;
   xed_width_bits[XED_OPERAND_WIDTH_U8][2] = 8;
   xed_width_bits[XED_OPERAND_WIDTH_U8][3] = 8;
   xed_width_bits[XED_OPERAND_WIDTH_I16][0] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_I16][1] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_I16][2] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_I16][3] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_U16][0] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_U16][1] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_U16][2] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_U16][3] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_I32][0] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_I32][1] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_I32][2] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_I32][3] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_U32][0] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_U32][1] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_U32][2] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_U32][3] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_I64][0] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_I64][1] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_I64][2] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_I64][3] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_U64][0] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_U64][1] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_U64][2] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_U64][3] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_F16][0] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_F16][1] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_F16][2] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_F16][3] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_F32][0] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_F32][1] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_F32][2] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_F32][3] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_F64][0] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_F64][1] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_F64][2] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_F64][3] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_DQ][0] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_DQ][1] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_DQ][2] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_DQ][3] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XUB][0] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XUB][1] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XUB][2] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XUB][3] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XUW][0] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XUW][1] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XUW][2] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XUW][3] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XUD][0] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XUD][1] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XUD][2] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XUD][3] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XUQ][0] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XUQ][1] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XUQ][2] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XUQ][3] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_X128][0] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_X128][1] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_X128][2] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_X128][3] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XB][0] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XB][1] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XB][2] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XB][3] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XW][0] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XW][1] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XW][2] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XW][3] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XD][0] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XD][1] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XD][2] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XD][3] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XQ][0] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XQ][1] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XQ][2] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_XQ][3] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_ZB][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZB][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZB][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZB][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZW][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZW][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZW][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZW][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZD][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZD][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZD][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZD][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZQ][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZQ][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZQ][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZQ][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_MB][0] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_MB][1] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_MB][2] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_MB][3] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_MW][0] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_MW][1] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_MW][2] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_MW][3] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_MD][0] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_MD][1] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_MD][2] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_MD][3] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_MQ][0] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_MQ][1] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_MQ][2] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_MQ][3] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_M64INT][0] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_M64INT][1] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_M64INT][2] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_M64INT][3] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_M64REAL][0] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_M64REAL][1] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_M64REAL][2] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_M64REAL][3] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_MEM108][0] = 864;
   xed_width_bits[XED_OPERAND_WIDTH_MEM108][1] = 864;
   xed_width_bits[XED_OPERAND_WIDTH_MEM108][2] = 864;
   xed_width_bits[XED_OPERAND_WIDTH_MEM108][3] = 864;
   xed_width_bits[XED_OPERAND_WIDTH_MEM14][0] = 112;
   xed_width_bits[XED_OPERAND_WIDTH_MEM14][1] = 112;
   xed_width_bits[XED_OPERAND_WIDTH_MEM14][2] = 112;
   xed_width_bits[XED_OPERAND_WIDTH_MEM14][3] = 112;
   xed_width_bits[XED_OPERAND_WIDTH_MEM16][0] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_MEM16][1] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_MEM16][2] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_MEM16][3] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_MEM16INT][0] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_MEM16INT][1] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_MEM16INT][2] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_MEM16INT][3] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_MEM28][0] = 224;
   xed_width_bits[XED_OPERAND_WIDTH_MEM28][1] = 224;
   xed_width_bits[XED_OPERAND_WIDTH_MEM28][2] = 224;
   xed_width_bits[XED_OPERAND_WIDTH_MEM28][3] = 224;
   xed_width_bits[XED_OPERAND_WIDTH_MEM32INT][0] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_MEM32INT][1] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_MEM32INT][2] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_MEM32INT][3] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_MEM32REAL][0] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_MEM32REAL][1] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_MEM32REAL][2] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_MEM32REAL][3] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_MEM80DEC][0] = 80;
   xed_width_bits[XED_OPERAND_WIDTH_MEM80DEC][1] = 80;
   xed_width_bits[XED_OPERAND_WIDTH_MEM80DEC][2] = 80;
   xed_width_bits[XED_OPERAND_WIDTH_MEM80DEC][3] = 80;
   xed_width_bits[XED_OPERAND_WIDTH_MEM80REAL][0] = 80;
   xed_width_bits[XED_OPERAND_WIDTH_MEM80REAL][1] = 80;
   xed_width_bits[XED_OPERAND_WIDTH_MEM80REAL][2] = 80;
   xed_width_bits[XED_OPERAND_WIDTH_MEM80REAL][3] = 80;
   xed_width_bits[XED_OPERAND_WIDTH_F80][0] = 80;
   xed_width_bits[XED_OPERAND_WIDTH_F80][1] = 80;
   xed_width_bits[XED_OPERAND_WIDTH_F80][2] = 80;
   xed_width_bits[XED_OPERAND_WIDTH_F80][3] = 80;
   xed_width_bits[XED_OPERAND_WIDTH_MEM94][0] = 752;
   xed_width_bits[XED_OPERAND_WIDTH_MEM94][1] = 752;
   xed_width_bits[XED_OPERAND_WIDTH_MEM94][2] = 752;
   xed_width_bits[XED_OPERAND_WIDTH_MEM94][3] = 752;
   xed_width_bits[XED_OPERAND_WIDTH_MFPXENV][0] = 4096;
   xed_width_bits[XED_OPERAND_WIDTH_MFPXENV][1] = 4096;
   xed_width_bits[XED_OPERAND_WIDTH_MFPXENV][2] = 4096;
   xed_width_bits[XED_OPERAND_WIDTH_MFPXENV][3] = 4096;
   xed_width_bits[XED_OPERAND_WIDTH_MXSAVE][0] = 4608;
   xed_width_bits[XED_OPERAND_WIDTH_MXSAVE][1] = 4608;
   xed_width_bits[XED_OPERAND_WIDTH_MXSAVE][2] = 4608;
   xed_width_bits[XED_OPERAND_WIDTH_MXSAVE][3] = 4608;
   xed_width_bits[XED_OPERAND_WIDTH_MPREFETCH][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_MPREFETCH][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_MPREFETCH][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_MPREFETCH][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_P][0] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_P][1] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_P][2] = 48;
   xed_width_bits[XED_OPERAND_WIDTH_P][3] = 48;
   xed_width_bits[XED_OPERAND_WIDTH_P2][0] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_P2][1] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_P2][2] = 48;
   xed_width_bits[XED_OPERAND_WIDTH_P2][3] = 80;
   xed_width_bits[XED_OPERAND_WIDTH_PD][0] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_PD][1] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_PD][2] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_PD][3] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_PS][0] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_PS][1] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_PS][2] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_PS][3] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_PI][0] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_PI][1] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_PI][2] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_PI][3] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_Q][0] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_Q][1] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_Q][2] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_Q][3] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_S][0] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_S][1] = 48;
   xed_width_bits[XED_OPERAND_WIDTH_S][2] = 48;
   xed_width_bits[XED_OPERAND_WIDTH_S][3] = 80;
   xed_width_bits[XED_OPERAND_WIDTH_S64][0] = 80;
   xed_width_bits[XED_OPERAND_WIDTH_S64][1] = 80;
   xed_width_bits[XED_OPERAND_WIDTH_S64][2] = 80;
   xed_width_bits[XED_OPERAND_WIDTH_S64][3] = 80;
   xed_width_bits[XED_OPERAND_WIDTH_SD][0] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_SD][1] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_SD][2] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_SD][3] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_SI][0] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_SI][1] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_SI][2] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_SI][3] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_SS][0] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_SS][1] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_SS][2] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_SS][3] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_V][0] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_V][1] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_V][2] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_V][3] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_Y][0] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_Y][1] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_Y][2] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_Y][3] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_W][0] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_W][1] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_W][2] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_W][3] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_Z][0] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_Z][1] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_Z][2] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_Z][3] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_SPW8][0] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_SPW8][1] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_SPW8][2] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_SPW8][3] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_SPW][0] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_SPW][1] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_SPW][2] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_SPW][3] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_SPW5][0] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_SPW5][1] = 80;
   xed_width_bits[XED_OPERAND_WIDTH_SPW5][2] = 160;
   xed_width_bits[XED_OPERAND_WIDTH_SPW5][3] = 320;
   xed_width_bits[XED_OPERAND_WIDTH_SPW3][0] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_SPW3][1] = 48;
   xed_width_bits[XED_OPERAND_WIDTH_SPW3][2] = 96;
   xed_width_bits[XED_OPERAND_WIDTH_SPW3][3] = 192;
   xed_width_bits[XED_OPERAND_WIDTH_SPW2][0] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_SPW2][1] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_SPW2][2] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_SPW2][3] = 128;
   xed_width_bits[XED_OPERAND_WIDTH_I1][0] = 1;
   xed_width_bits[XED_OPERAND_WIDTH_I1][1] = 1;
   xed_width_bits[XED_OPERAND_WIDTH_I1][2] = 1;
   xed_width_bits[XED_OPERAND_WIDTH_I1][3] = 1;
   xed_width_bits[XED_OPERAND_WIDTH_I2][0] = 2;
   xed_width_bits[XED_OPERAND_WIDTH_I2][1] = 2;
   xed_width_bits[XED_OPERAND_WIDTH_I2][2] = 2;
   xed_width_bits[XED_OPERAND_WIDTH_I2][3] = 2;
   xed_width_bits[XED_OPERAND_WIDTH_I3][0] = 3;
   xed_width_bits[XED_OPERAND_WIDTH_I3][1] = 3;
   xed_width_bits[XED_OPERAND_WIDTH_I3][2] = 3;
   xed_width_bits[XED_OPERAND_WIDTH_I3][3] = 3;
   xed_width_bits[XED_OPERAND_WIDTH_I4][0] = 4;
   xed_width_bits[XED_OPERAND_WIDTH_I4][1] = 4;
   xed_width_bits[XED_OPERAND_WIDTH_I4][2] = 4;
   xed_width_bits[XED_OPERAND_WIDTH_I4][3] = 4;
   xed_width_bits[XED_OPERAND_WIDTH_I5][0] = 5;
   xed_width_bits[XED_OPERAND_WIDTH_I5][1] = 5;
   xed_width_bits[XED_OPERAND_WIDTH_I5][2] = 5;
   xed_width_bits[XED_OPERAND_WIDTH_I5][3] = 5;
   xed_width_bits[XED_OPERAND_WIDTH_I6][0] = 6;
   xed_width_bits[XED_OPERAND_WIDTH_I6][1] = 6;
   xed_width_bits[XED_OPERAND_WIDTH_I6][2] = 6;
   xed_width_bits[XED_OPERAND_WIDTH_I6][3] = 6;
   xed_width_bits[XED_OPERAND_WIDTH_I7][0] = 7;
   xed_width_bits[XED_OPERAND_WIDTH_I7][1] = 7;
   xed_width_bits[XED_OPERAND_WIDTH_I7][2] = 7;
   xed_width_bits[XED_OPERAND_WIDTH_I7][3] = 7;
   xed_width_bits[XED_OPERAND_WIDTH_I8][0] = 8;
   xed_width_bits[XED_OPERAND_WIDTH_I8][1] = 8;
   xed_width_bits[XED_OPERAND_WIDTH_I8][2] = 8;
   xed_width_bits[XED_OPERAND_WIDTH_I8][3] = 8;
   xed_width_bits[XED_OPERAND_WIDTH_VAR][0] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_VAR][1] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_VAR][2] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_VAR][3] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_BND32][0] = 96;
   xed_width_bits[XED_OPERAND_WIDTH_BND32][1] = 96;
   xed_width_bits[XED_OPERAND_WIDTH_BND32][2] = 96;
   xed_width_bits[XED_OPERAND_WIDTH_BND32][3] = 96;
   xed_width_bits[XED_OPERAND_WIDTH_BND64][0] = 192;
   xed_width_bits[XED_OPERAND_WIDTH_BND64][1] = 192;
   xed_width_bits[XED_OPERAND_WIDTH_BND64][2] = 192;
   xed_width_bits[XED_OPERAND_WIDTH_BND64][3] = 192;
   xed_width_bits[XED_OPERAND_WIDTH_WRD][0] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_WRD][1] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_WRD][2] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_WRD][3] = 16;
   xed_width_bits[XED_OPERAND_WIDTH_PMMSZ16][0] = 112;
   xed_width_bits[XED_OPERAND_WIDTH_PMMSZ16][1] = 112;
   xed_width_bits[XED_OPERAND_WIDTH_PMMSZ16][2] = 112;
   xed_width_bits[XED_OPERAND_WIDTH_PMMSZ16][3] = 112;
   xed_width_bits[XED_OPERAND_WIDTH_PMMSZ32][0] = 192;
   xed_width_bits[XED_OPERAND_WIDTH_PMMSZ32][1] = 192;
   xed_width_bits[XED_OPERAND_WIDTH_PMMSZ32][2] = 192;
   xed_width_bits[XED_OPERAND_WIDTH_PMMSZ32][3] = 192;
   xed_width_bits[XED_OPERAND_WIDTH_QQ][0] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_QQ][1] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_QQ][2] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_QQ][3] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YUB][0] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YUB][1] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YUB][2] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YUB][3] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YUW][0] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YUW][1] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YUW][2] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YUW][3] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YUD][0] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YUD][1] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YUD][2] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YUD][3] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YUQ][0] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YUQ][1] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YUQ][2] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YUQ][3] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_Y128][0] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_Y128][1] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_Y128][2] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_Y128][3] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YB][0] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YB][1] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YB][2] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YB][3] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YW][0] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YW][1] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YW][2] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YW][3] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YD][0] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YD][1] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YD][2] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YD][3] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YQ][0] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YQ][1] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YQ][2] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YQ][3] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YPS][0] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YPS][1] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YPS][2] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YPS][3] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YPD][0] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YPD][1] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YPD][2] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_YPD][3] = 256;
   xed_width_bits[XED_OPERAND_WIDTH_VV][0] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_VV][1] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_VV][2] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_VV][3] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_ZV][0] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_ZV][1] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_ZV][2] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_ZV][3] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_MSKW][0] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_MSKW][1] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_MSKW][2] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_MSKW][3] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_ZMSKW][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZMSKW][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZMSKW][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZMSKW][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZF32][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZF32][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZF32][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZF32][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZF64][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZF64][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZF64][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZF64][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZUB][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZUB][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZUB][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZUB][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZUW][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZUW][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZUW][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZUW][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZUD][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZUD][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZUD][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZUD][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZUQ][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZUQ][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZUQ][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZUQ][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZI8][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZI8][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZI8][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZI8][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZI16][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZI16][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZI16][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZI16][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZI32][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZI32][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZI32][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZI32][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZI64][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZI64][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZI64][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZI64][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZU8][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZU8][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZU8][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZU8][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZU16][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZU16][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZU16][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZU16][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZU32][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZU32][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZU32][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZU32][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZU64][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZU64][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZU64][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZU64][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZU128][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZU128][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZU128][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZU128][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZBF16][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZBF16][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZBF16][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZBF16][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_M384][0] = 384;
   xed_width_bits[XED_OPERAND_WIDTH_M384][1] = 384;
   xed_width_bits[XED_OPERAND_WIDTH_M384][2] = 384;
   xed_width_bits[XED_OPERAND_WIDTH_M384][3] = 384;
   xed_width_bits[XED_OPERAND_WIDTH_PTR][0] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_PTR][1] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_PTR][2] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_PTR][3] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_TMEMROW][0] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_TMEMROW][1] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_TMEMROW][2] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_TMEMROW][3] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_TMEMCOL][0] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_TMEMCOL][1] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_TMEMCOL][2] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_TMEMCOL][3] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_M512][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_M512][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_M512][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_M512][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_TV][0] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_TV][1] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_TV][2] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_TV][3] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_ZF16][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZF16][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZF16][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZF16][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_Z2F16][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_Z2F16][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_Z2F16][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_Z2F16][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_YU][0] = 0;
   xed_width_bits[XED_OPERAND_WIDTH_YU][1] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_YU][2] = 32;
   xed_width_bits[XED_OPERAND_WIDTH_YU][3] = 64;
   xed_width_bits[XED_OPERAND_WIDTH_ZD0][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZD0][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZD0][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZD0][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_Z2I16][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_Z2I16][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_Z2I16][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_Z2I16][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_Z2U16][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_Z2U16][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_Z2U16][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_Z2U16][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZHF8][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZHF8][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZHF8][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZHF8][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZBF8][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZBF8][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZBF8][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_ZBF8][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_Z4U8][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_Z4U8][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_Z4U8][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_Z4U8][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_Z4I8][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_Z4I8][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_Z4I8][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_Z4I8][3] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_Z2I8][0] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_Z2I8][1] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_Z2I8][2] = 512;
   xed_width_bits[XED_OPERAND_WIDTH_Z2I8][3] = 512;
}
