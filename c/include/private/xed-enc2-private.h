/* BEGIN_LEGAL 

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


#ifndef XED_ENC2_PRIVATE_H
# define XED_ENC2_PRIVATE_H
#include "xed-common-hdrs.h"
#include "xed-types.h"
#include "xed-encode-direct.h"



static XED_INLINE xed_uint_t get_has_disp8(xed_enc2_req_t* r) {
    return r->s.has_disp8;
}
static XED_INLINE void set_has_disp8(xed_enc2_req_t* r) {
     r->s.has_disp8 = 1;
}

static XED_INLINE xed_uint_t get_has_disp16(xed_enc2_req_t* r) {
    return r->s.has_disp16;
}
static XED_INLINE void set_has_disp16(xed_enc2_req_t* r) {
     r->s.has_disp16 = 1;
}

static XED_INLINE xed_uint_t get_has_disp32(xed_enc2_req_t* r) {
    return r->s.has_disp32;
}
static XED_INLINE void set_has_disp32(xed_enc2_req_t* r) {
     r->s.has_disp32 = 1;
}

static XED_INLINE xed_uint_t get_has_sib(xed_enc2_req_t* r) {
    return r->s.has_sib;
}
static XED_INLINE void set_has_sib(xed_enc2_req_t* r) {
     r->s.has_sib = 1;
}






static XED_INLINE void set_rexw(xed_enc2_req_t* r) {
    r->s.rexw = 1;
}
static XED_INLINE void set_rexr(xed_enc2_req_t* r, xed_uint_t v) {
    r->s.rexr = v;
}
static XED_INLINE void set_rexb(xed_enc2_req_t* r, xed_uint_t v) {
    r->s.rexb = v;
}
static XED_INLINE void set_rexx(xed_enc2_req_t* r, xed_uint_t v) {
    r->s.rexx = v;
}
static XED_INLINE void set_rexb4(xed_enc2_req_t* r, xed_uint_t v) {
    r->s.rexb4 = v;
}
static XED_INLINE void set_rexr4(xed_enc2_req_t* r, xed_uint_t v) {
    r->s.rexr4 = v;
}
static XED_INLINE void set_rexx4(xed_enc2_req_t* r, xed_uint_t v) {
    r->s.rexx4 = v;
}
static XED_INLINE xed_uint_t get_rexw(xed_enc2_req_t* r) {
    return r->s.rexw;
}
static XED_INLINE xed_uint_t get_rexx(xed_enc2_req_t* r) {
    return r->s.rexx;
}
static XED_INLINE xed_uint_t get_rexr(xed_enc2_req_t* r) {
    return r->s.rexr;
}
static XED_INLINE xed_uint_t get_rexb(xed_enc2_req_t* r) {
    return r->s.rexb;
}
static XED_INLINE xed_uint_t get_rexb4(xed_enc2_req_t* r) {
    return r->s.rexb4;
}
static XED_INLINE xed_uint_t get_rexr4(xed_enc2_req_t* r) {
    return r->s.rexr4;
}
static XED_INLINE xed_uint_t get_rexx4(xed_enc2_req_t* r) {
    return r->s.rexx4;
}

static XED_INLINE void set_nf(xed_enc2_req_t* r, xed_uint_t v) {
    r->s.nf = v;
}
static XED_INLINE void set_nd(xed_enc2_req_t* r, xed_uint_t v) {
    r->s.nd = v;
}
static XED_INLINE xed_uint_t get_nf(xed_enc2_req_t* r) {
    return r->s.nf;
}
static XED_INLINE xed_uint_t get_nd(xed_enc2_req_t* r) {
    return r->s.nd;
}

static XED_INLINE void set_scc(xed_enc2_req_t* r, xed_uint_t v) {
    r->s.scc = v;
}
static XED_INLINE xed_uint_t get_scc(xed_enc2_req_t* r) {
    return r->s.scc;
}

static XED_INLINE void set_mod(xed_enc2_req_t* r, xed_uint_t v) {
    r->s.mod = v;
}
static XED_INLINE xed_uint_t get_mod(xed_enc2_req_t* r) {
    return r->s.mod;
}

static XED_INLINE void set_reg(xed_enc2_req_t* r, xed_uint_t v) {
    r->s.reg = v;
}
static XED_INLINE xed_uint_t get_reg(xed_enc2_req_t* r) {
    return r->s.reg;
}

static XED_INLINE void set_rm(xed_enc2_req_t* r, xed_uint_t v) {
    r->s.rm = v;
}
static XED_INLINE xed_uint_t get_rm(xed_enc2_req_t* r) {
    return r->s.rm;
}
static XED_INLINE void set_srm(xed_enc2_req_t* r, xed_uint_t v) {
    r->s.opcode_srm = v;
}
static XED_INLINE xed_uint_t get_srm(xed_enc2_req_t* r) {
    return r->s.opcode_srm;
}

static XED_INLINE void set_imm8_reg(xed_enc2_req_t* r, xed_uint_t v) {
    r->s.imm8_reg = v;
}
static XED_INLINE xed_uint_t get_imm8_reg(xed_enc2_req_t* r) {
    return r->s.imm8_reg;
}


static XED_INLINE void set_sibbase(xed_enc2_req_t* r, xed_uint_t v) {
    r->s.sibbase = v;
}
static XED_INLINE xed_uint_t get_sibbase(xed_enc2_req_t* r) {
    return r->s.sibbase;
}

static XED_INLINE void set_sibscale(xed_enc2_req_t* r, xed_uint_t v) {
    r->s.sibscale = v;
}
static XED_INLINE xed_uint_t get_sibscale(xed_enc2_req_t* r) {
    return r->s.sibscale;
}

static XED_INLINE void set_sibindex(xed_enc2_req_t* r, xed_uint_t v) {
    r->s.sibindex = v;
}
static XED_INLINE xed_uint_t get_sibindex(xed_enc2_req_t* r) {
    return r->s.sibindex;
}


static XED_INLINE void set_vvvv(xed_enc2_req_t* r, xed_uint_t v) {
    r->s.vvvv = v;
}
static XED_INLINE xed_uint_t get_vvvv(xed_enc2_req_t* r) {
    return r->s.vvvv;
}

static XED_INLINE void set_map(xed_enc2_req_t* r, xed_uint_t v) {
    r->s.map = v;
}
static XED_INLINE xed_uint_t get_map(xed_enc2_req_t* r) {
    return r->s.map;
}

static XED_INLINE void set_vexpp(xed_enc2_req_t* r, xed_uint_t v) {
    r->s.vexpp = v;
}
static XED_INLINE xed_uint_t get_vexpp(xed_enc2_req_t* r) {
    return r->s.vexpp;
}


static XED_INLINE void set_vexl(xed_enc2_req_t* r, xed_uint_t v) {
    r->s.vexl = v;
}
static XED_INLINE xed_uint_t get_vexl(xed_enc2_req_t* r) {
    return r->s.vexl;
}


static XED_INLINE void set_evexll(xed_enc2_req_t* r, xed_uint_t v) {
    r->s.evexll = v;
}
static XED_INLINE xed_uint_t get_evexll(xed_enc2_req_t* r) {
    return r->s.evexll;
}


static XED_INLINE void set_evexb(xed_enc2_req_t* r, xed_uint_t v) {
    r->s.evexb = v;
}
static XED_INLINE xed_uint_t get_evexb(xed_enc2_req_t* r) {
    return r->s.evexb;
}


static XED_INLINE void set_evexvv(xed_enc2_req_t* r, xed_uint_t v) {
    r->s.evexvv = v;
}
static XED_INLINE xed_uint_t get_evexvv(xed_enc2_req_t* r) {
    return r->s.evexvv;
}





static XED_INLINE void set_evexz(xed_enc2_req_t* r, xed_uint_t v) {
    r->s.evexz = v;
}
static XED_INLINE xed_uint_t get_evexz(xed_enc2_req_t* r) {
    return r->s.evexz;
}

static XED_INLINE void set_evexaaa(xed_enc2_req_t* r, xed_uint_t v) {
    r->s.evexaaa = v;
}
static XED_INLINE xed_uint_t get_evexaaa(xed_enc2_req_t* r) {
    return r->s.evexaaa;
}

/// Used for special registers where SPL, BPL, SIL, DIL need REX no matter what
static XED_INLINE void set_need_rex(xed_enc2_req_t* r) {
    r->s.need_rex = 1;
}
static XED_INLINE xed_uint_t get_need_rex(xed_enc2_req_t* r) {
    return r->s.need_rex;
}




static XED_INLINE void emit(xed_enc2_req_t* r, xed_uint8_t b) {
    r->s.itext[r->s.cursor++] = b;
}
static XED_INLINE void emit_u8(xed_enc2_req_t* r, xed_uint8_t b) {
    r->s.itext[r->s.cursor++] = b;
}
static XED_INLINE void emit_u16(xed_enc2_req_t* r, xed_uint16_t w) {
    r->s.itext[r->s.cursor++] = w&0xFF;
    r->s.itext[r->s.cursor++] = (w>>8)&0xFF;

}
static XED_INLINE void emit_u32(xed_enc2_req_t* r, xed_uint32_t d) {
    r->s.itext[r->s.cursor++] = d&0xFF;
    r->s.itext[r->s.cursor++] = (d>>8)&0xFF;
    r->s.itext[r->s.cursor++] = (d>>16)&0xFF;
    r->s.itext[r->s.cursor++] = (d>>24)&0xFF;
}

static XED_INLINE void emit_u64(xed_enc2_req_t* r, xed_uint64_t d) {
    xed_union64_t u;  // avoid issues with shifts > 32 on 32b builds
    u.u64 = d;
    emit_u32(r, u.s.lo32);
    emit_u32(r, u.s.hi32);
}
static XED_INLINE void emit_i64(xed_enc2_req_t* r, xed_int64_t d) {
    xed_union64_t u; // avoid issues with shifts > 32 on 32b builds
    u.i64 = d;
    emit_u32(r, u.s.lo32);
    emit_u32(r, u.s.hi32);
}


static XED_INLINE void emit_i8(xed_enc2_req_t* r, xed_int8_t b) {
    r->s.itext[r->s.cursor++] = b;
}
static XED_INLINE void emit_i16(xed_enc2_req_t* r, xed_int16_t w) {
    r->s.itext[r->s.cursor++] = w&0xFF;
    r->s.itext[r->s.cursor++] = (w>>8)&0xFF;

}
static XED_INLINE void emit_i32(xed_enc2_req_t* r, xed_int32_t d) {
    r->s.itext[r->s.cursor++] = d&0xFF;
    r->s.itext[r->s.cursor++] = (d>>8)&0xFF;
    r->s.itext[r->s.cursor++] = (d>>16)&0xFF;
    r->s.itext[r->s.cursor++] = (d>>24)&0xFF;
}



static XED_INLINE void emit_se_imm8_reg(xed_enc2_req_t* r) {
    emit(r, get_imm8_reg(r) );
}
static XED_INLINE void emit_modrm(xed_enc2_req_t* r) {
    xed_uint8_t v = (get_mod(r)<<6) | (get_reg(r)<<3) | get_rm(r);
    emit(r,v);
}
static XED_INLINE void emit_sib(xed_enc2_req_t* r) {
    xed_uint8_t v = (get_sibscale(r)<<6) | (get_sibindex(r)<<3) | get_sibbase(r);
    emit(r,v);
}

/* emits the REX prefix 
   called directly when REX is refining or guaranteed by instruction pattern and REX2 isn't allowed */
static XED_INLINE void emit_rex(xed_enc2_req_t* r) {
    xed_uint8_t v = 0x40 | (get_rexw(r)<<3) | (get_rexr(r)<<2)| (get_rexx(r)<<1) | get_rexb(r);
    emit(r,v);
}

/* emits the REX2 prefix 
called directly when REX2 is refining */
static XED_INLINE void emit_rex2(xed_enc2_req_t* r) {
    xed_uint8_t v;

    emit(r,0xd5);

    v = (get_map(r) << 7) | (get_rexr4(r) << 6) | (get_rexx4(r) << 5) | 
         (get_rexb4(r) << 4) | (get_rexw(r) << 3) | (get_rexr(r) << 2) |
         (get_rexx(r) << 1) | (get_rexb(r));

    emit(r,v);
}

/* emits the REX prefix 
   called when REX is optional (deduced from operands e.g. EGPRs) and REX2 isn't allowed */
static XED_INLINE void emit_rex_if_needed(xed_enc2_req_t* r) {
    if (get_rexw(r) || get_rexr(r) || get_rexx(r) || get_rexb(r) || get_need_rex(r))
        emit_rex(r);
}

/* emits either the REX prefix or the REX2 prefix 
   called when the instruction is guaranteed a REX prefix */
static XED_INLINE void emit_rex_rex2(xed_enc2_req_t* r) {
    if ((get_rexr4(r) || get_rexx4(r) || get_rexb4(r)) && get_map(r) <= 1)
        emit_rex2(r);
    else
        emit_rex(r);
}

/* emits either the REX prefix or the REX2 prefix 
   called when REX{,2} is optional (deduced from operands e.g. EGPRs) */
static XED_INLINE void emit_rex_rex2_if_needed(xed_enc2_req_t* r) {
    if ((get_rexr4(r) || get_rexx4(r) || get_rexb4(r)) && get_map(r) <= 1)
        emit_rex2(r);

    else if (get_rexw(r) || get_rexr(r) || get_rexx(r) || get_rexb(r) || get_need_rex(r))
        emit_rex(r);
}

/* MAP{0,1} legacy instructions encode the MAP within the REX2 prefix
   For MAP1 instructions avoid emitting the escape byte */
static XED_INLINE void emit_escape_m1_if_needed(xed_enc2_req_t* r) {
    if (get_rexr4(r) || get_rexx4(r) || get_rexb4(r))
        return;
    emit(r,0x0F);
}

static XED_INLINE void emit_vex_c5(xed_enc2_req_t* r) {
    xed_uint8_t inverted_v = 0xF8; // REXR and V3...V0 are inverted (MS 5 bits; 11111000)
    xed_uint8_t v = ((get_rexr(r) << 7) | (get_vvvv(r) << 3) | (get_vexl(r)<<2) | get_vexpp(r)) ^ inverted_v;
    emit(r,0xC5);
    emit(r,v);
}
static XED_INLINE void emit_vex_c4(xed_enc2_req_t* r) {
    xed_uint8_t inverted_v1 = 0xE0; // REX{R,X,B} are inverted (MS 3 bits; 11100000)
    xed_uint8_t inverted_v2 = 0x78; // V3...V0 are inverted (01111000)
    xed_uint8_t v1 = ((get_rexr(r) << 7) | (get_rexx(r) << 6) | (get_rexb(r) << 5) | get_map(r)) ^ inverted_v1;
    xed_uint8_t v2 = ((get_rexw(r) << 7) | (get_vvvv(r) << 3) | (get_vexl(r) << 2) | get_vexpp(r)) ^ inverted_v2;
    emit(r,0xC4);
    emit(r,v1);
    emit(r,v2);
}

static XED_INLINE xed_uint8_t get_evex_pb1(xed_enc2_req_t* r) {
    xed_uint8_t v1, inverted_v1 = 0xF0; // REX{R,X,B} and REXR4/EVEXR are inverted (MS 4 bits; 11110000)
    v1 = ((get_rexr(r) << 7) | (get_rexx(r) << 6) | (get_rexb(r) << 5) | 
         (get_rexr4(r) << 4) | (get_rexb4(r) << 3) | get_map(r)) ^ inverted_v1;
    return v1;
}


static XED_INLINE void emit_evex(xed_enc2_req_t* r) {
    xed_uint8_t v1, v2, v3;
    xed_uint8_t inverted_v2 = 0x7C; // REXX4 and V3...V0 are inverted in payload byte 2 (01111100)
    xed_uint8_t inverted_v3 = 0x08; // V' is inverted in payload byte 3 (00001000)

    emit(r,0x62);

    v1 = get_evex_pb1(r);

    emit(r,v1);

    v2 = ((get_rexw(r) << 7) | (get_vvvv(r) << 3) | (get_rexx4(r) << 2) | get_vexpp(r)) ^ inverted_v2;

    emit(r,v2);

    v3 = ((get_evexz(r) << 7) | (get_evexll(r) << 5) | 
         ((get_evexb(r)  | get_nd(r)) << 4) |
         (get_evexvv(r) << 3) | 
         (get_evexaaa(r) | get_nf(r) << 2)) ^ inverted_v3;

    emit(r,v3);
}

static XED_INLINE void emit_evex_apx_scc(xed_enc2_req_t* r) {
    xed_uint8_t v1, v2, v3;
    xed_uint8_t inverted_v2 = 0x04; // REXX4 is inverted in payload byte 2 (00000100)

    emit(r,0x62);

    v1 = get_evex_pb1(r);

    emit(r,v1);

    v2 = ((get_rexw(r) << 7) | (get_vvvv(r) << 3) | (get_rexx4(r) << 2) | get_vexpp(r)) ^ inverted_v2;

    emit(r,v2);

    v3 = ( (get_nd(r) << 4) | get_scc(r) );
    emit(r,v3);
}

//////


// evex registers k0..k7 regs
void enc_evex_vvvv_kreg(xed_enc2_req_t* r,
                        xed_reg_enum_t dst);
void enc_evex_modrm_reg_kreg(xed_enc2_req_t* r,
                             xed_reg_enum_t dst);
void enc_evex_modrm_rm_kreg(xed_enc2_req_t* r,
                            xed_reg_enum_t dst);

void enc_vex_vvvv_kreg(xed_enc2_req_t* r,
                       xed_reg_enum_t dst);
void enc_modrm_reg_kreg(xed_enc2_req_t* r,
                        xed_reg_enum_t dst);
void enc_modrm_rm_kreg(xed_enc2_req_t* r,
                       xed_reg_enum_t dst);

void enc_evex_kmask(xed_enc2_req_t* r,
                    xed_reg_enum_t dst);

/// evex register for evex-VSIB
void enc_evex_vindex_xmm(xed_enc2_req_t* r,
                         xed_reg_enum_t dst);
void enc_evex_vindex_ymm(xed_enc2_req_t* r,
                         xed_reg_enum_t dst);
void enc_evex_vindex_zmm(xed_enc2_req_t* r,
                         xed_reg_enum_t dst);

/// vex register for vex-VSIB
void enc_vex_vindex_xmm(xed_enc2_req_t* r,
                        xed_reg_enum_t dst);
void enc_vex_vindex_ymm(xed_enc2_req_t* r,
                        xed_reg_enum_t dst);



// evex registers vvvv, modrm.reg, modrm.rm for xmm, ymm, zmm
void enc_evex_vvvv_reg_xmm(xed_enc2_req_t* r,
                           xed_reg_enum_t dst);
void enc_evex_modrm_reg_xmm(xed_enc2_req_t* r,
                            xed_reg_enum_t dst);
void enc_evex_modrm_rm_xmm(xed_enc2_req_t* r,
                           xed_reg_enum_t dst);

void enc_evex_vvvv_reg_ymm(xed_enc2_req_t* r,
                           xed_reg_enum_t dst);
void enc_evex_modrm_reg_ymm(xed_enc2_req_t* r,
                            xed_reg_enum_t dst);
void enc_evex_modrm_rm_ymm(xed_enc2_req_t* r,
                           xed_reg_enum_t dst);

void enc_evex_vvvv_reg_zmm(xed_enc2_req_t* r,
                           xed_reg_enum_t dst);
void enc_evex_modrm_reg_zmm(xed_enc2_req_t* r,
                            xed_reg_enum_t dst);
void enc_evex_modrm_rm_zmm(xed_enc2_req_t* r,
                           xed_reg_enum_t dst);


void enc_evex_vvvv_reg_gpr32(xed_enc2_req_t* r,
                             xed_reg_enum_t dst);
void enc_evex_modrm_reg_gpr32(xed_enc2_req_t* r,
                              xed_reg_enum_t dst);
void enc_evex_modrm_rm_gpr32(xed_enc2_req_t* r,
                             xed_reg_enum_t dst);

void enc_evex_vvvv_reg_gpr64(xed_enc2_req_t* r,
                             xed_reg_enum_t dst);
void enc_evex_modrm_reg_gpr64(xed_enc2_req_t* r,
                              xed_reg_enum_t dst);
void enc_evex_modrm_rm_gpr64(xed_enc2_req_t* r,
                             xed_reg_enum_t dst);


void enc_vvvv_reg_xmm(xed_enc2_req_t* r,
                      xed_reg_enum_t dst);
void enc_vvvv_reg_ymm(xed_enc2_req_t* r,
                      xed_reg_enum_t dst);
void enc_vvvv_reg_gpr32(xed_enc2_req_t* r,
                        xed_reg_enum_t dst);
void enc_vvvv_reg_gpr64(xed_enc2_req_t* r,
                        xed_reg_enum_t dst);
#if defined(XED_REG_TMM_FIRST_DEFINED) 
void enc_vvvv_reg_tmm(xed_enc2_req_t* r,
                      xed_reg_enum_t dst);
#endif

void enc_modrm_rm_x87(xed_enc2_req_t* r,
                      xed_reg_enum_t dst);
void enc_modrm_reg_xmm(xed_enc2_req_t* r,
                       xed_reg_enum_t dst);
void enc_modrm_rm_xmm(xed_enc2_req_t* r,
                      xed_reg_enum_t dst);
void enc_modrm_reg_ymm(xed_enc2_req_t* r,
                       xed_reg_enum_t dst);
void enc_modrm_rm_ymm(xed_enc2_req_t* r,
                      xed_reg_enum_t dst);
void enc_modrm_reg_mmx(xed_enc2_req_t* r,
                       xed_reg_enum_t dst);
void enc_modrm_rm_mmx(xed_enc2_req_t* r,
                      xed_reg_enum_t dst);


void enc_modrm_reg_gpr8(xed_enc2_req_t* r,
                        xed_reg_enum_t dst);
void enc_modrm_rm_gpr8(xed_enc2_req_t* r,
                       xed_reg_enum_t dst);
void enc_evex_modrm_reg_gpr8(xed_enc2_req_t* r,
                             xed_reg_enum_t dst);
void enc_evex_modrm_rm_gpr8(xed_enc2_req_t* r,
                             xed_reg_enum_t dst);
void enc_evex_vvvv_reg_gpr8(xed_enc2_req_t* r,
                             xed_reg_enum_t dst);

void enc_modrm_reg_gpr16(xed_enc2_req_t* r,
                         xed_reg_enum_t dst);
void enc_modrm_rm_gpr16(xed_enc2_req_t* r,
                        xed_reg_enum_t dst);
void enc_evex_modrm_reg_gpr16(xed_enc2_req_t* r,
                             xed_reg_enum_t dst);
void enc_evex_modrm_rm_gpr16(xed_enc2_req_t* r,
                             xed_reg_enum_t dst);
void enc_evex_vvvv_reg_gpr16(xed_enc2_req_t* r,
                             xed_reg_enum_t dst);

void enc_modrm_reg_gpr32(xed_enc2_req_t* r,
                         xed_reg_enum_t dst);
void enc_modrm_rm_gpr32(xed_enc2_req_t* r,
                        xed_reg_enum_t dst);


void enc_modrm_reg_gpr64(xed_enc2_req_t* r,
                         xed_reg_enum_t dst);
    
void enc_modrm_rm_gpr64(xed_enc2_req_t* r,
                        xed_reg_enum_t dst);


void enc_srm_gpr8(xed_enc2_req_t* r,   // partial opcode _SRM field
                  xed_reg_enum_t dst);
void enc_srm_gpr16(xed_enc2_req_t* r,
                   xed_reg_enum_t dst);
void enc_srm_gpr32(xed_enc2_req_t* r,
                   xed_reg_enum_t dst);
void enc_srm_gpr64(xed_enc2_req_t* r,
                   xed_reg_enum_t dst);

// _SE imm8 reg

void enc_imm8_reg_xmm(xed_enc2_req_t* r, 
                      xed_reg_enum_t dst);
void enc_imm8_reg_ymm(xed_enc2_req_t* r, 
                      xed_reg_enum_t dst);
void enc_imm8_reg_xmm_and_imm(xed_enc2_req_t* r, 
                              xed_reg_enum_t dst,
                              xed_uint_t imm);
void enc_imm8_reg_ymm_and_imm(xed_enc2_req_t* r, 
                              xed_reg_enum_t dst,
                              xed_uint_t imm);


// CRs and DRs, SEG regs
void enc_modrm_reg_cr(xed_enc2_req_t* r,  
                      xed_reg_enum_t dst);
void enc_modrm_reg_dr(xed_enc2_req_t* r, 
                      xed_reg_enum_t dst);
void enc_modrm_reg_seg(xed_enc2_req_t* r, 
                       xed_reg_enum_t dst);


void emit_modrm_sib(xed_enc2_req_t* r);





// 64b addressing

void enc_modrm_rm_mem_bisd32_a64(xed_enc2_req_t* r,
                                 xed_reg_enum_t base,
                                 xed_reg_enum_t indx,
                                 xed_uint_t scale);
void enc_modrm_rm_mem_bd32_a64(xed_enc2_req_t* r,
                               xed_reg_enum_t base);

void enc_modrm_rm_mem_bisd8_a64(xed_enc2_req_t* r,
                                xed_reg_enum_t base,
                                xed_reg_enum_t indx,
                                xed_uint_t scale);
void enc_modrm_rm_mem_bd8_a64(xed_enc2_req_t* r,
                              xed_reg_enum_t base);

void enc_modrm_rm_mem_bis_a64(xed_enc2_req_t* r,
                              xed_reg_enum_t base,
                              xed_reg_enum_t indx,
                              xed_uint_t scale);
void enc_modrm_rm_mem_b_a64(xed_enc2_req_t* r,
                            xed_reg_enum_t base);



// 64b vsib addressing  
// avx2:     {x,y}mm x {bis,bisd8,bisd32}
// avx512: {x,y,z}mm x {bis,bisd8,bisd32}

void enc_avx_modrm_vsib_xmm_bis_a64(xed_enc2_req_t* r,
                                    xed_reg_enum_t base,
                                    xed_reg_enum_t indx,
                                    xed_uint_t scale);
void enc_avx_modrm_vsib_xmm_bisd8_a64(xed_enc2_req_t* r,
                                      xed_reg_enum_t base,
                                      xed_reg_enum_t indx,
                                      xed_uint_t scale);
void enc_avx_modrm_vsib_xmm_bisd32_a64(xed_enc2_req_t* r,
                                       xed_reg_enum_t base,
                                       xed_reg_enum_t indx,
                                       xed_uint_t scale);
void enc_avx_modrm_vsib_ymm_bis_a64(xed_enc2_req_t* r,
                                    xed_reg_enum_t base,
                                    xed_reg_enum_t indx,
                                    xed_uint_t scale);
void enc_avx_modrm_vsib_ymm_bisd8_a64(xed_enc2_req_t* r,
                                      xed_reg_enum_t base,
                                      xed_reg_enum_t indx,
                                      xed_uint_t scale);
void enc_avx_modrm_vsib_ymm_bisd32_a64(xed_enc2_req_t* r,
                                       xed_reg_enum_t base,
                                       xed_reg_enum_t indx,
                                       xed_uint_t scale);


void enc_avx512_modrm_vsib_xmm_bis_a64(xed_enc2_req_t* r,
                                       xed_reg_enum_t base,
                                       xed_reg_enum_t indx,
                                       xed_uint_t scale);
void enc_avx512_modrm_vsib_xmm_bisd8_a64(xed_enc2_req_t* r,
                                         xed_reg_enum_t base,
                                         xed_reg_enum_t indx,
                                         xed_uint_t scale);
void enc_avx512_modrm_vsib_xmm_bisd32_a64(xed_enc2_req_t* r,
                                          xed_reg_enum_t base,
                                          xed_reg_enum_t indx,
                                          xed_uint_t scale);

void enc_avx512_modrm_vsib_ymm_bis_a64(xed_enc2_req_t* r,
                                       xed_reg_enum_t base,
                                       xed_reg_enum_t indx,
                                       xed_uint_t scale);
void enc_avx512_modrm_vsib_ymm_bisd8_a64(xed_enc2_req_t* r,
                                         xed_reg_enum_t base,
                                         xed_reg_enum_t indx,
                                         xed_uint_t scale);
void enc_avx512_modrm_vsib_ymm_bisd32_a64(xed_enc2_req_t* r,
                                          xed_reg_enum_t base,
                                          xed_reg_enum_t indx,
                                          xed_uint_t scale);

void enc_avx512_modrm_vsib_zmm_bis_a64(xed_enc2_req_t* r,
                                       xed_reg_enum_t base,
                                       xed_reg_enum_t indx,
                                       xed_uint_t scale);
void enc_avx512_modrm_vsib_zmm_bisd8_a64(xed_enc2_req_t* r,
                                         xed_reg_enum_t base,
                                         xed_reg_enum_t indx,
                                         xed_uint_t scale);
void enc_avx512_modrm_vsib_zmm_bisd32_a64(xed_enc2_req_t* r,
                                          xed_reg_enum_t base,
                                          xed_reg_enum_t indx,
                                          xed_uint_t scale);




// 32b addressing

void enc_modrm_rm_mem_bisd32_a32(xed_enc2_req_t* r,
                                 xed_reg_enum_t base,
                                 xed_reg_enum_t indx,
                                 xed_uint_t scale);
void enc_modrm_rm_mem_bd32_a32(xed_enc2_req_t* r,
                               xed_reg_enum_t base);
                                         
                                               

void enc_modrm_rm_mem_bisd8_a32(xed_enc2_req_t* r,
                                xed_reg_enum_t base,
                                xed_reg_enum_t indx,
                                xed_uint_t scale);
void enc_modrm_rm_mem_bd8_a32(xed_enc2_req_t* r,
                              xed_reg_enum_t base);


void enc_modrm_rm_mem_bis_a32(xed_enc2_req_t* r,
                              xed_reg_enum_t base,
                              xed_reg_enum_t indx,
                              xed_uint_t scale);
void enc_modrm_rm_mem_b_a32(xed_enc2_req_t* r,
                            xed_reg_enum_t base);
                                      

// 64b vsib addressing
// avx2:     {x,y}mm x {bis,bisd8,bisd32}
// avx512: {x,y,z}mm x {bis,bisd8,bisd32}

void enc_avx_modrm_vsib_xmm_bis_a32(xed_enc2_req_t* r,
                                    xed_reg_enum_t base,
                                    xed_reg_enum_t indx,
                                    xed_uint_t scale);
void enc_avx_modrm_vsib_xmm_bisd8_a32(xed_enc2_req_t* r,
                                      xed_reg_enum_t base,
                                      xed_reg_enum_t indx,
                                      xed_uint_t scale);
void enc_avx_modrm_vsib_xmm_bisd32_a32(xed_enc2_req_t* r,
                                       xed_reg_enum_t base,
                                       xed_reg_enum_t indx,
                                       xed_uint_t scale);
void enc_avx_modrm_vsib_ymm_bis_a32(xed_enc2_req_t* r,
                                    xed_reg_enum_t base,
                                    xed_reg_enum_t indx,
                                    xed_uint_t scale);
void enc_avx_modrm_vsib_ymm_bisd8_a32(xed_enc2_req_t* r,
                                      xed_reg_enum_t base,
                                      xed_reg_enum_t indx,
                                      xed_uint_t scale);
void enc_avx_modrm_vsib_ymm_bisd32_a32(xed_enc2_req_t* r,
                                       xed_reg_enum_t base,
                                       xed_reg_enum_t indx,
                                       xed_uint_t scale);


void enc_avx512_modrm_vsib_xmm_bis_a32(xed_enc2_req_t* r,
                                       xed_reg_enum_t base,
                                       xed_reg_enum_t indx,
                                       xed_uint_t scale);
void enc_avx512_modrm_vsib_xmm_bisd8_a32(xed_enc2_req_t* r,
                                         xed_reg_enum_t base,
                                         xed_reg_enum_t indx,
                                         xed_uint_t scale);
void enc_avx512_modrm_vsib_xmm_bisd32_a32(xed_enc2_req_t* r,
                                          xed_reg_enum_t base,
                                          xed_reg_enum_t indx,
                                          xed_uint_t scale);

void enc_avx512_modrm_vsib_ymm_bis_a32(xed_enc2_req_t* r,
                                       xed_reg_enum_t base,
                                       xed_reg_enum_t indx,
                                       xed_uint_t scale);
void enc_avx512_modrm_vsib_ymm_bisd8_a32(xed_enc2_req_t* r,
                                         xed_reg_enum_t base,
                                         xed_reg_enum_t indx,
                                         xed_uint_t scale);
void enc_avx512_modrm_vsib_ymm_bisd32_a32(xed_enc2_req_t* r,
                                          xed_reg_enum_t base,
                                          xed_reg_enum_t indx,
                                          xed_uint_t scale);

void enc_avx512_modrm_vsib_zmm_bis_a32(xed_enc2_req_t* r,
                                       xed_reg_enum_t base,
                                       xed_reg_enum_t indx,
                                       xed_uint_t scale);
void enc_avx512_modrm_vsib_zmm_bisd8_a32(xed_enc2_req_t* r,
                                         xed_reg_enum_t base,
                                         xed_reg_enum_t indx,
                                         xed_uint_t scale);
void enc_avx512_modrm_vsib_zmm_bisd32_a32(xed_enc2_req_t* r,
                                          xed_reg_enum_t base,
                                          xed_reg_enum_t indx,
                                          xed_uint_t scale);



// 16b addressing

void enc_modrm_rm_mem_bi_a16(xed_enc2_req_t* r,
                             xed_reg_enum_t base,
                             xed_reg_enum_t indx);
void enc_modrm_rm_mem_b_a16(xed_enc2_req_t* r,
                            xed_reg_enum_t base);
void enc_modrm_rm_mem_bid8_a16(xed_enc2_req_t* r,
                               xed_reg_enum_t base,
                               xed_reg_enum_t indx);
void enc_modrm_rm_mem_bd8_a16(xed_enc2_req_t* r,
                              xed_reg_enum_t base);
void enc_modrm_rm_mem_bid16_a16(xed_enc2_req_t* r,
                                xed_reg_enum_t base,
                                xed_reg_enum_t indx);
void enc_modrm_rm_mem_bd16_a16(xed_enc2_req_t* r,
                               xed_reg_enum_t base);
                                       
xed_uint8_t emit_partial_opcode_and_rmreg(xed_enc2_req_t* r,
                                          xed_uint8_t opcode,
                                          xed_reg_enum_t rmreg,
                                          xed_reg_enum_t first);
xed_uint8_t emit_partial_opcode_and_rmreg_gpr16(xed_enc2_req_t* r,
                                                xed_uint8_t opcode,
                                                xed_reg_enum_t rmreg);
xed_uint8_t emit_partial_opcode_and_rmreg_gpr32(xed_enc2_req_t* r,
                                                xed_uint8_t opcode,
                                                xed_reg_enum_t rmreg);
xed_uint8_t emit_partial_opcode_and_rmreg_gpr64(xed_enc2_req_t* r,
                                                xed_uint8_t opcode,
                                                xed_reg_enum_t rmreg);

xed_int32_t xed_chose_evex_scaled_disp(xed_enc2_req_t* r,
                                       xed_int32_t requested_displacement,
                                       xed_uint32_t reference_width_bytes);

xed_int32_t xed_chose_evex_scaled_disp16(xed_enc2_req_t* r,
                                         xed_int32_t requested_displacement,
                                         xed_uint32_t reference_width_bytes);
# if defined(XED_REG_TREG_FIRST_DEFINED)
void enc_vvvv_reg_tmm(xed_enc2_req_t* r,
                      xed_reg_enum_t dst);
void enc_evex_vvvv_reg_tmm(xed_enc2_req_t* r,
                      xed_reg_enum_t dst);
void enc_modrm_reg_tmm(xed_enc2_req_t* r,
                       xed_reg_enum_t dst);
void enc_evex_modrm_reg_tmm(xed_enc2_req_t* r,
                      xed_reg_enum_t dst);
void enc_modrm_rm_tmm(xed_enc2_req_t* r,
                      xed_reg_enum_t dst);
void enc_evex_modrm_rm_tmm(xed_enc2_req_t* r,
                      xed_reg_enum_t dst);
# endif
#endif
