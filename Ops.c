//
//  Ops.c
//  Gambit
//
//  Created by Matt Rubin on 4/21/11.
//  Copyright 2011 Matt Rubin. All rights reserved.
//

#include "Ops.h"


void LD_B_B(CPU* cpu) { cpu->registers.b=cpu->registers.b; cpu->registers.m=1; };
void LD_B_C(CPU* cpu) { cpu->registers.b=cpu->registers.c; cpu->registers.m=1; };
void LD_B_D(CPU* cpu) { cpu->registers.b=cpu->registers.d; cpu->registers.m=1; };
void LD_B_E(CPU* cpu) { cpu->registers.b=cpu->registers.e; cpu->registers.m=1; };
void LD_B_H(CPU* cpu) { cpu->registers.b=cpu->registers.h; cpu->registers.m=1; };
void LD_B_L(CPU* cpu) { cpu->registers.b=cpu->registers.l; cpu->registers.m=1; };
void LD_B_A(CPU* cpu) { cpu->registers.b=cpu->registers.a; cpu->registers.m=1; };
void LD_C_B(CPU* cpu) { cpu->registers.c=cpu->registers.b; cpu->registers.m=1; };
void LD_C_C(CPU* cpu) { cpu->registers.c=cpu->registers.c; cpu->registers.m=1; };
void LD_C_D(CPU* cpu) { cpu->registers.c=cpu->registers.d; cpu->registers.m=1; };
void LD_C_E(CPU* cpu) { cpu->registers.c=cpu->registers.e; cpu->registers.m=1; };
void LD_C_H(CPU* cpu) { cpu->registers.c=cpu->registers.h; cpu->registers.m=1; };
void LD_C_L(CPU* cpu) { cpu->registers.c=cpu->registers.l; cpu->registers.m=1; };
void LD_C_A(CPU* cpu) { cpu->registers.c=cpu->registers.a; cpu->registers.m=1; };
void LD_D_B(CPU* cpu) { cpu->registers.d=cpu->registers.b; cpu->registers.m=1; };
void LD_D_C(CPU* cpu) { cpu->registers.d=cpu->registers.c; cpu->registers.m=1; };
void LD_D_D(CPU* cpu) { cpu->registers.d=cpu->registers.d; cpu->registers.m=1; };
void LD_D_E(CPU* cpu) { cpu->registers.d=cpu->registers.e; cpu->registers.m=1; };
void LD_D_H(CPU* cpu) { cpu->registers.d=cpu->registers.h; cpu->registers.m=1; };
void LD_D_L(CPU* cpu) { cpu->registers.d=cpu->registers.l; cpu->registers.m=1; };
void LD_D_A(CPU* cpu) { cpu->registers.d=cpu->registers.a; cpu->registers.m=1; };
void LD_E_B(CPU* cpu) { cpu->registers.e=cpu->registers.b; cpu->registers.m=1; };
void LD_E_C(CPU* cpu) { cpu->registers.e=cpu->registers.c; cpu->registers.m=1; };
void LD_E_D(CPU* cpu) { cpu->registers.e=cpu->registers.d; cpu->registers.m=1; };
void LD_E_E(CPU* cpu) { cpu->registers.e=cpu->registers.e; cpu->registers.m=1; };
void LD_E_H(CPU* cpu) { cpu->registers.e=cpu->registers.h; cpu->registers.m=1; };
void LD_E_L(CPU* cpu) { cpu->registers.e=cpu->registers.l; cpu->registers.m=1; };
void LD_E_A(CPU* cpu) { cpu->registers.e=cpu->registers.a; cpu->registers.m=1; };
void LD_H_B(CPU* cpu) { cpu->registers.h=cpu->registers.b; cpu->registers.m=1; };
void LD_H_C(CPU* cpu) { cpu->registers.h=cpu->registers.c; cpu->registers.m=1; };
void LD_H_D(CPU* cpu) { cpu->registers.h=cpu->registers.d; cpu->registers.m=1; };
void LD_H_E(CPU* cpu) { cpu->registers.h=cpu->registers.e; cpu->registers.m=1; };
void LD_H_H(CPU* cpu) { cpu->registers.h=cpu->registers.h; cpu->registers.m=1; };
void LD_H_L(CPU* cpu) { cpu->registers.h=cpu->registers.l; cpu->registers.m=1; };
void LD_H_A(CPU* cpu) { cpu->registers.h=cpu->registers.a; cpu->registers.m=1; };
void LD_L_B(CPU* cpu) { cpu->registers.l=cpu->registers.b; cpu->registers.m=1; };
void LD_L_C(CPU* cpu) { cpu->registers.l=cpu->registers.c; cpu->registers.m=1; };
void LD_L_D(CPU* cpu) { cpu->registers.l=cpu->registers.d; cpu->registers.m=1; };
void LD_L_E(CPU* cpu) { cpu->registers.l=cpu->registers.e; cpu->registers.m=1; };
void LD_L_H(CPU* cpu) { cpu->registers.l=cpu->registers.h; cpu->registers.m=1; };
void LD_L_L(CPU* cpu) { cpu->registers.l=cpu->registers.l; cpu->registers.m=1; };
void LD_L_A(CPU* cpu) { cpu->registers.l=cpu->registers.a; cpu->registers.m=1; };
void LD_A_B(CPU* cpu) { cpu->registers.a=cpu->registers.b; cpu->registers.m=1; };
void LD_A_C(CPU* cpu) { cpu->registers.a=cpu->registers.c; cpu->registers.m=1; };
void LD_A_D(CPU* cpu) { cpu->registers.a=cpu->registers.d; cpu->registers.m=1; };
void LD_A_E(CPU* cpu) { cpu->registers.a=cpu->registers.e; cpu->registers.m=1; };
void LD_A_H(CPU* cpu) { cpu->registers.a=cpu->registers.h; cpu->registers.m=1; };
void LD_A_L(CPU* cpu) { cpu->registers.a=cpu->registers.l; cpu->registers.m=1; };
void LD_A_A(CPU* cpu) { cpu->registers.a=cpu->registers.a; cpu->registers.m=1; };


void LDrHLm_b(CPU* cpu) { cpu->registers.b=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); cpu->registers.m=2; };
void LDrHLm_c(CPU* cpu) { cpu->registers.c=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); cpu->registers.m=2; };
void LDrHLm_d(CPU* cpu) { cpu->registers.d=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); cpu->registers.m=2; };
void LDrHLm_e(CPU* cpu) { cpu->registers.e=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); cpu->registers.m=2; };
void LDrHLm_h(CPU* cpu) { cpu->registers.h=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); cpu->registers.m=2; };
void LDrHLm_l(CPU* cpu) { cpu->registers.l=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); cpu->registers.m=2; };
void LDrHLm_a(CPU* cpu) { cpu->registers.a=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); cpu->registers.m=2; };

void LDHLmr_b(CPU* cpu) { writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l,cpu->registers.b); cpu->registers.m=2; };
void LDHLmr_c(CPU* cpu) { writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l,cpu->registers.c); cpu->registers.m=2; };
void LDHLmr_d(CPU* cpu) { writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l,cpu->registers.d); cpu->registers.m=2; };
void LDHLmr_e(CPU* cpu) { writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l,cpu->registers.e); cpu->registers.m=2; };
void LDHLmr_h(CPU* cpu) { writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l,cpu->registers.h); cpu->registers.m=2; };
void LDHLmr_l(CPU* cpu) { writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l,cpu->registers.l); cpu->registers.m=2; };
void LDHLmr_a(CPU* cpu) { writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l,cpu->registers.a); cpu->registers.m=2; };

void LDrn_b(CPU* cpu) { cpu->registers.b=readByte(cpu->mmu,cpu->registers.pc); cpu->registers.pc++; cpu->registers.m=2; };
void LDrn_c(CPU* cpu) { cpu->registers.c=readByte(cpu->mmu,cpu->registers.pc); cpu->registers.pc++; cpu->registers.m=2; };
void LDrn_d(CPU* cpu) { cpu->registers.d=readByte(cpu->mmu,cpu->registers.pc); cpu->registers.pc++; cpu->registers.m=2; };
void LDrn_e(CPU* cpu) { cpu->registers.e=readByte(cpu->mmu,cpu->registers.pc); cpu->registers.pc++; cpu->registers.m=2; };
void LDrn_h(CPU* cpu) { cpu->registers.h=readByte(cpu->mmu,cpu->registers.pc); cpu->registers.pc++; cpu->registers.m=2; };
void LDrn_l(CPU* cpu) { cpu->registers.l=readByte(cpu->mmu,cpu->registers.pc); cpu->registers.pc++; cpu->registers.m=2; };
void LDrn_a(CPU* cpu) { cpu->registers.a=readByte(cpu->mmu,cpu->registers.pc); cpu->registers.pc++; cpu->registers.m=2; };

void LDHLmn(CPU* cpu) { writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l, readByte(cpu->mmu,cpu->registers.pc)); cpu->registers.pc++; cpu->registers.m=3; };

void LDBCmA(CPU* cpu) { writeByte(cpu->mmu,(cpu->registers.b<<8)+cpu->registers.c, cpu->registers.a); cpu->registers.m=2; };
void LDDEmA(CPU* cpu) { writeByte(cpu->mmu,(cpu->registers.d<<8)+cpu->registers.e, cpu->registers.a); cpu->registers.m=2; };

void LDmmA(CPU* cpu) { writeByte(cpu->mmu,readWord(cpu->mmu,cpu->registers.pc), cpu->registers.a); cpu->registers.pc+=2; cpu->registers.m=4; };

void LDABCm(CPU* cpu) { cpu->registers.a=readByte(cpu->mmu,(cpu->registers.b<<8)+cpu->registers.c); cpu->registers.m=2; };
void LDADEm(CPU* cpu) { cpu->registers.a=readByte(cpu->mmu,(cpu->registers.d<<8)+cpu->registers.e); cpu->registers.m=2; };

void LDAmm(CPU* cpu) { cpu->registers.a=readByte(cpu->mmu,readWord(cpu->mmu,cpu->registers.pc)); cpu->registers.pc+=2; cpu->registers.m=4; };

void LD_BC_nn(CPU* cpu) { cpu->registers.c=readByte(cpu->mmu,cpu->registers.pc); cpu->registers.b=readByte(cpu->mmu,cpu->registers.pc+1); cpu->registers.pc+=2; cpu->registers.m=3; };
void LD_DE_nn(CPU* cpu) { cpu->registers.e=readByte(cpu->mmu,cpu->registers.pc); cpu->registers.d=readByte(cpu->mmu,cpu->registers.pc+1); cpu->registers.pc+=2; cpu->registers.m=3; };
void LD_HL_nn(CPU* cpu) { cpu->registers.l=readByte(cpu->mmu,cpu->registers.pc); cpu->registers.h=readByte(cpu->mmu,cpu->registers.pc+1); cpu->registers.pc+=2; cpu->registers.m=3; };
void LD_SP_nn(CPU* cpu) { cpu->registers.sp=readWord(cpu->mmu,cpu->registers.pc); cpu->registers.pc+=2; cpu->registers.m=3; };

void LDHLmm(CPU* cpu) { word i=readWord(cpu->mmu,cpu->registers.pc); cpu->registers.pc+=2; cpu->registers.l=readByte(cpu->mmu,i); cpu->registers.h=readByte(cpu->mmu,i+1); cpu->registers.m=5; };
void LDmmHL(CPU* cpu) { word i=readWord(cpu->mmu,cpu->registers.pc); cpu->registers.pc+=2; writeWord(cpu->mmu,i,(cpu->registers.h<<8)+cpu->registers.l); cpu->registers.m=5; };

void LDHLIA(CPU* cpu) { writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l, cpu->registers.a); cpu->registers.l=(cpu->registers.l+1)&255; if(!cpu->registers.l) cpu->registers.h=(cpu->registers.h+1)&255; cpu->registers.m=2; };
void LDAHLI(CPU* cpu) { cpu->registers.a=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); cpu->registers.l=(cpu->registers.l+1)&255; if(!cpu->registers.l) cpu->registers.h=(cpu->registers.h+1)&255; cpu->registers.m=2; };

void LDHLDA(CPU* cpu) { writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l, cpu->registers.a); cpu->registers.l=(cpu->registers.l-1)&255; if(cpu->registers.l==255) cpu->registers.h=(cpu->registers.h-1)&255; cpu->registers.m=2; };
void LDAHLD(CPU* cpu) { cpu->registers.a=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); cpu->registers.l=(cpu->registers.l-1)&255; if(cpu->registers.l==255) cpu->registers.h=(cpu->registers.h-1)&255; cpu->registers.m=2; };

void LDAIOn(CPU* cpu) { cpu->registers.a=readByte(cpu->mmu,0xFF00+readByte(cpu->mmu,cpu->registers.pc)); cpu->registers.pc++; cpu->registers.m=3; };
void LDIOnA(CPU* cpu) { writeByte(cpu->mmu,0xFF00+readByte(cpu->mmu,cpu->registers.pc),cpu->registers.a); cpu->registers.pc++; cpu->registers.m=3; };
void LDAIOC(CPU* cpu) { cpu->registers.a=readByte(cpu->mmu,0xFF00+cpu->registers.c); cpu->registers.m=2; };
void LDIOCA(CPU* cpu) { writeByte(cpu->mmu,0xFF00+cpu->registers.c,cpu->registers.a); cpu->registers.m=2; };

void LDHLSPn(CPU* cpu) { byte i=readByte(cpu->mmu,cpu->registers.pc); if(i>127) i=-((~i+1)&255); cpu->registers.pc++; i+=cpu->registers.sp; cpu->registers.h=(i>>8)&255; cpu->registers.l=i&255; cpu->registers.m=3; };

void SWAPr_b(CPU* cpu) { byte tr=cpu->registers.b; cpu->registers.b=((tr&0xF)<<4)|((tr&0xF0)>>4); cpu->registers.f=cpu->registers.b?0:0x80; cpu->registers.m=1; };
void SWAPr_c(CPU* cpu) { byte tr=cpu->registers.c; cpu->registers.c=((tr&0xF)<<4)|((tr&0xF0)>>4); cpu->registers.f=cpu->registers.c?0:0x80; cpu->registers.m=1; };
void SWAPr_d(CPU* cpu) { byte tr=cpu->registers.d; cpu->registers.d=((tr&0xF)<<4)|((tr&0xF0)>>4); cpu->registers.f=cpu->registers.d?0:0x80; cpu->registers.m=1; };
void SWAPr_e(CPU* cpu) { byte tr=cpu->registers.e; cpu->registers.e=((tr&0xF)<<4)|((tr&0xF0)>>4); cpu->registers.f=cpu->registers.e?0:0x80; cpu->registers.m=1; };
void SWAPr_h(CPU* cpu) { byte tr=cpu->registers.h; cpu->registers.h=((tr&0xF)<<4)|((tr&0xF0)>>4); cpu->registers.f=cpu->registers.h?0:0x80; cpu->registers.m=1; };
void SWAPr_l(CPU* cpu) { byte tr=cpu->registers.l; cpu->registers.l=((tr&0xF)<<4)|((tr&0xF0)>>4); cpu->registers.f=cpu->registers.l?0:0x80; cpu->registers.m=1; };
void SWAPr_a(CPU* cpu) { byte tr=cpu->registers.a; cpu->registers.a=((tr&0xF)<<4)|((tr&0xF0)>>4); cpu->registers.f=cpu->registers.a?0:0x80; cpu->registers.m=1; };

/*--- Data processing ---*/
void ADDr_b(CPU* cpu) { byte a=cpu->registers.a; cpu->registers.a+=cpu->registers.b; cpu->registers.f=(cpu->registers.a>255)?0x10:0; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.b^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void ADDr_c(CPU* cpu) { byte a=cpu->registers.a; cpu->registers.a+=cpu->registers.c; cpu->registers.f=(cpu->registers.a>255)?0x10:0; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.c^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void ADDr_d(CPU* cpu) { byte a=cpu->registers.a; cpu->registers.a+=cpu->registers.d; cpu->registers.f=(cpu->registers.a>255)?0x10:0; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.d^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void ADDr_e(CPU* cpu) { byte a=cpu->registers.a; cpu->registers.a+=cpu->registers.e; cpu->registers.f=(cpu->registers.a>255)?0x10:0; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.e^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void ADDr_h(CPU* cpu) { byte a=cpu->registers.a; cpu->registers.a+=cpu->registers.h; cpu->registers.f=(cpu->registers.a>255)?0x10:0; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.h^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void ADDr_l(CPU* cpu) { byte a=cpu->registers.a; cpu->registers.a+=cpu->registers.l; cpu->registers.f=(cpu->registers.a>255)?0x10:0; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.l^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void ADDr_a(CPU* cpu) { byte a=cpu->registers.a; cpu->registers.a+=cpu->registers.a; cpu->registers.f=(cpu->registers.a>255)?0x10:0; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.a^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void ADDHL(CPU* cpu) { byte a=cpu->registers.a; byte m=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); cpu->registers.a+=m; cpu->registers.f=(cpu->registers.a>255)?0x10:0; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^a^m)&0x10) cpu->registers.f|=0x20; cpu->registers.m=2; };
void ADDn(CPU* cpu) { byte a=cpu->registers.a; byte m=readByte(cpu->mmu,cpu->registers.pc); cpu->registers.a+=m; cpu->registers.pc++; cpu->registers.f=(cpu->registers.a>255)?0x10:0; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^a^m)&0x10) cpu->registers.f|=0x20; cpu->registers.m=2; };
void ADDHLBC(CPU* cpu) { word hl=(cpu->registers.h<<8)+cpu->registers.l; hl+=(cpu->registers.b<<8)+cpu->registers.c; if(hl>65535) cpu->registers.f|=0x10; else cpu->registers.f&=0xEF; cpu->registers.h=(hl>>8)&255; cpu->registers.l=hl&255; cpu->registers.m=3; };
void ADDHLDE(CPU* cpu) { word hl=(cpu->registers.h<<8)+cpu->registers.l; hl+=(cpu->registers.d<<8)+cpu->registers.e; if(hl>65535) cpu->registers.f|=0x10; else cpu->registers.f&=0xEF; cpu->registers.h=(hl>>8)&255; cpu->registers.l=hl&255; cpu->registers.m=3; };
void ADDHLHL(CPU* cpu) { word hl=(cpu->registers.h<<8)+cpu->registers.l; hl+=(cpu->registers.h<<8)+cpu->registers.l; if(hl>65535) cpu->registers.f|=0x10; else cpu->registers.f&=0xEF; cpu->registers.h=(hl>>8)&255; cpu->registers.l=hl&255; cpu->registers.m=3; };
void ADDHLSP(CPU* cpu) { word hl=(cpu->registers.h<<8)+cpu->registers.l; hl+=cpu->registers.sp; if(hl>65535) cpu->registers.f|=0x10; else cpu->registers.f&=0xEF; cpu->registers.h=(hl>>8)&255; cpu->registers.l=hl&255; cpu->registers.m=3; };
void ADDSPn(CPU* cpu) { byte i=readByte(cpu->mmu,cpu->registers.pc); if(i>127) i=-((~i+1)&255); cpu->registers.pc++; cpu->registers.sp+=i; cpu->registers.m=4; };

void ADCr_b(CPU* cpu) { byte a=cpu->registers.a; cpu->registers.a+=cpu->registers.b; cpu->registers.a+=(cpu->registers.f&0x10)?1:0; cpu->registers.f=(cpu->registers.a>255)?0x10:0; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.b^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void ADCr_c(CPU* cpu) { byte a=cpu->registers.a; cpu->registers.a+=cpu->registers.c; cpu->registers.a+=(cpu->registers.f&0x10)?1:0; cpu->registers.f=(cpu->registers.a>255)?0x10:0; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.c^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void ADCr_d(CPU* cpu) { byte a=cpu->registers.a; cpu->registers.a+=cpu->registers.d; cpu->registers.a+=(cpu->registers.f&0x10)?1:0; cpu->registers.f=(cpu->registers.a>255)?0x10:0; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.d^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void ADCr_e(CPU* cpu) { byte a=cpu->registers.a; cpu->registers.a+=cpu->registers.e; cpu->registers.a+=(cpu->registers.f&0x10)?1:0; cpu->registers.f=(cpu->registers.a>255)?0x10:0; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.e^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void ADCr_h(CPU* cpu) { byte a=cpu->registers.a; cpu->registers.a+=cpu->registers.h; cpu->registers.a+=(cpu->registers.f&0x10)?1:0; cpu->registers.f=(cpu->registers.a>255)?0x10:0; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.h^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void ADCr_l(CPU* cpu) { byte a=cpu->registers.a; cpu->registers.a+=cpu->registers.l; cpu->registers.a+=(cpu->registers.f&0x10)?1:0; cpu->registers.f=(cpu->registers.a>255)?0x10:0; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.l^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void ADCr_a(CPU* cpu) { byte a=cpu->registers.a; cpu->registers.a+=cpu->registers.a; cpu->registers.a+=(cpu->registers.f&0x10)?1:0; cpu->registers.f=(cpu->registers.a>255)?0x10:0; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.a^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void ADCHL(CPU* cpu) { byte a=cpu->registers.a; byte m=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); cpu->registers.a+=m; cpu->registers.a+=(cpu->registers.f&0x10)?1:0; cpu->registers.f=(cpu->registers.a>255)?0x10:0; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^m^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=2; };
void ADCn(CPU* cpu) { byte a=cpu->registers.a; byte m=readByte(cpu->mmu,cpu->registers.pc); cpu->registers.a+=m; cpu->registers.pc++; cpu->registers.a+=(cpu->registers.f&0x10)?1:0; cpu->registers.f=(cpu->registers.a>255)?0x10:0; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^m^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=2; };

void SUBr_b(CPU* cpu) { byte a=cpu->registers.a; cpu->registers.a-=cpu->registers.b; cpu->registers.f=(cpu->registers.a<0)?0x50:0x40; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.b^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void SUBr_c(CPU* cpu) { byte a=cpu->registers.a; cpu->registers.a-=cpu->registers.c; cpu->registers.f=(cpu->registers.a<0)?0x50:0x40; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.c^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void SUBr_d(CPU* cpu) { byte a=cpu->registers.a; cpu->registers.a-=cpu->registers.d; cpu->registers.f=(cpu->registers.a<0)?0x50:0x40; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.d^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void SUBr_e(CPU* cpu) { byte a=cpu->registers.a; cpu->registers.a-=cpu->registers.e; cpu->registers.f=(cpu->registers.a<0)?0x50:0x40; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.e^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void SUBr_h(CPU* cpu) { byte a=cpu->registers.a; cpu->registers.a-=cpu->registers.h; cpu->registers.f=(cpu->registers.a<0)?0x50:0x40; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.h^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void SUBr_l(CPU* cpu) { byte a=cpu->registers.a; cpu->registers.a-=cpu->registers.l; cpu->registers.f=(cpu->registers.a<0)?0x50:0x40; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.l^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void SUBr_a(CPU* cpu) { byte a=cpu->registers.a; cpu->registers.a-=cpu->registers.a; cpu->registers.f=(cpu->registers.a<0)?0x50:0x40; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.a^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void SUBHL(CPU* cpu) { byte a=cpu->registers.a; byte m=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); cpu->registers.a-=m; cpu->registers.f=(cpu->registers.a<0)?0x50:0x40; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^m^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=2; };
void SUBn(CPU* cpu) { byte a=cpu->registers.a; byte m=readByte(cpu->mmu,cpu->registers.pc); cpu->registers.a-=m; cpu->registers.pc++; cpu->registers.f=(cpu->registers.a<0)?0x50:0x40; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^m^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=2; };

void SBCr_b(CPU* cpu) { byte a=cpu->registers.a; cpu->registers.a-=cpu->registers.b; cpu->registers.a-=(cpu->registers.f&0x10)?1:0; cpu->registers.f=(cpu->registers.a<0)?0x50:0x40; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.b^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void SBCr_c(CPU* cpu) { byte a=cpu->registers.a; cpu->registers.a-=cpu->registers.c; cpu->registers.a-=(cpu->registers.f&0x10)?1:0; cpu->registers.f=(cpu->registers.a<0)?0x50:0x40; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.c^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void SBCr_d(CPU* cpu) { byte a=cpu->registers.a; cpu->registers.a-=cpu->registers.d; cpu->registers.a-=(cpu->registers.f&0x10)?1:0; cpu->registers.f=(cpu->registers.a<0)?0x50:0x40; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.d^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void SBCr_e(CPU* cpu) { byte a=cpu->registers.a; cpu->registers.a-=cpu->registers.e; cpu->registers.a-=(cpu->registers.f&0x10)?1:0; cpu->registers.f=(cpu->registers.a<0)?0x50:0x40; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.e^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void SBCr_h(CPU* cpu) { byte a=cpu->registers.a; cpu->registers.a-=cpu->registers.h; cpu->registers.a-=(cpu->registers.f&0x10)?1:0; cpu->registers.f=(cpu->registers.a<0)?0x50:0x40; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.h^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void SBCr_l(CPU* cpu) { byte a=cpu->registers.a; cpu->registers.a-=cpu->registers.l; cpu->registers.a-=(cpu->registers.f&0x10)?1:0; cpu->registers.f=(cpu->registers.a<0)?0x50:0x40; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.l^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void SBCr_a(CPU* cpu) { byte a=cpu->registers.a; cpu->registers.a-=cpu->registers.a; cpu->registers.a-=(cpu->registers.f&0x10)?1:0; cpu->registers.f=(cpu->registers.a<0)?0x50:0x40; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.a^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void SBCHL(CPU* cpu) { byte a=cpu->registers.a; byte m=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); cpu->registers.a-=m; cpu->registers.a-=(cpu->registers.f&0x10)?1:0; cpu->registers.f=(cpu->registers.a<0)?0x50:0x40; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^m^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=2; };
void SBCn(CPU* cpu) { byte a=cpu->registers.a; byte m=readByte(cpu->mmu,cpu->registers.pc); cpu->registers.a-=m; cpu->registers.pc++; cpu->registers.a-=(cpu->registers.f&0x10)?1:0; cpu->registers.f=(cpu->registers.a<0)?0x50:0x40; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; if((cpu->registers.a^m^a)&0x10) cpu->registers.f|=0x20; cpu->registers.m=2; };

void CPr_b(CPU* cpu) { byte i=cpu->registers.a; i-=cpu->registers.b; cpu->registers.f=(i<0)?0x50:0x40; i&=255; if(!i) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.b^i)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void CPr_c(CPU* cpu) { byte i=cpu->registers.a; i-=cpu->registers.c; cpu->registers.f=(i<0)?0x50:0x40; i&=255; if(!i) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.c^i)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void CPr_d(CPU* cpu) { byte i=cpu->registers.a; i-=cpu->registers.d; cpu->registers.f=(i<0)?0x50:0x40; i&=255; if(!i) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.d^i)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void CPr_e(CPU* cpu) { byte i=cpu->registers.a; i-=cpu->registers.e; cpu->registers.f=(i<0)?0x50:0x40; i&=255; if(!i) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.e^i)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void CPr_h(CPU* cpu) { byte i=cpu->registers.a; i-=cpu->registers.h; cpu->registers.f=(i<0)?0x50:0x40; i&=255; if(!i) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.h^i)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void CPr_l(CPU* cpu) { byte i=cpu->registers.a; i-=cpu->registers.l; cpu->registers.f=(i<0)?0x50:0x40; i&=255; if(!i) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.l^i)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void CPr_a(CPU* cpu) { byte i=cpu->registers.a; i-=cpu->registers.a; cpu->registers.f=(i<0)?0x50:0x40; i&=255; if(!i) cpu->registers.f|=0x80; if((cpu->registers.a^cpu->registers.a^i)&0x10) cpu->registers.f|=0x20; cpu->registers.m=1; };
void CPHL(CPU* cpu) { byte i=cpu->registers.a; byte m=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); i-=m; cpu->registers.f=(i<0)?0x50:0x40; i&=255; if(!i) cpu->registers.f|=0x80; if((cpu->registers.a^i^m)&0x10) cpu->registers.f|=0x20; cpu->registers.m=2; };
void CPn(CPU* cpu) { byte i=cpu->registers.a; byte m=readByte(cpu->mmu,cpu->registers.pc); i-=m; cpu->registers.pc++; cpu->registers.f=(i<0)?0x50:0x40; i&=255; if(!i) cpu->registers.f|=0x80; if((cpu->registers.a^i^m)&0x10) cpu->registers.f|=0x20; cpu->registers.m=2; };

void DAA(CPU* cpu) { byte a=cpu->registers.a; if((cpu->registers.f&0x20)||((cpu->registers.a&15)>9)) cpu->registers.a+=6; cpu->registers.f&=0xEF; if((cpu->registers.f&0x20)||(a>0x99)) { cpu->registers.a+=0x60; cpu->registers.f|=0x10; } cpu->registers.m=1; };

void ANDr_b(CPU* cpu) { cpu->registers.a&=cpu->registers.b; cpu->registers.a&=255; cpu->registers.f=cpu->registers.a?0:0x80; cpu->registers.m=1; };
void ANDr_c(CPU* cpu) { cpu->registers.a&=cpu->registers.c; cpu->registers.a&=255; cpu->registers.f=cpu->registers.a?0:0x80; cpu->registers.m=1; };
void ANDr_d(CPU* cpu) { cpu->registers.a&=cpu->registers.d; cpu->registers.a&=255; cpu->registers.f=cpu->registers.a?0:0x80; cpu->registers.m=1; };
void ANDr_e(CPU* cpu) { cpu->registers.a&=cpu->registers.e; cpu->registers.a&=255; cpu->registers.f=cpu->registers.a?0:0x80; cpu->registers.m=1; };
void ANDr_h(CPU* cpu) { cpu->registers.a&=cpu->registers.h; cpu->registers.a&=255; cpu->registers.f=cpu->registers.a?0:0x80; cpu->registers.m=1; };
void ANDr_l(CPU* cpu) { cpu->registers.a&=cpu->registers.l; cpu->registers.a&=255; cpu->registers.f=cpu->registers.a?0:0x80; cpu->registers.m=1; };
void ANDr_a(CPU* cpu) { cpu->registers.a&=cpu->registers.a; cpu->registers.a&=255; cpu->registers.f=cpu->registers.a?0:0x80; cpu->registers.m=1; };
void ANDHL(CPU* cpu) { cpu->registers.a&=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); cpu->registers.a&=255; cpu->registers.f=cpu->registers.a?0:0x80; cpu->registers.m=2; };
void ANDn(CPU* cpu) { cpu->registers.a&=readByte(cpu->mmu,cpu->registers.pc); cpu->registers.pc++; cpu->registers.a&=255; cpu->registers.f=cpu->registers.a?0:0x80; cpu->registers.m=2; };

void ORr_b(CPU* cpu) { cpu->registers.a|=cpu->registers.b; cpu->registers.a&=255; cpu->registers.f=cpu->registers.a?0:0x80; cpu->registers.m=1; };
void ORr_c(CPU* cpu) { cpu->registers.a|=cpu->registers.c; cpu->registers.a&=255; cpu->registers.f=cpu->registers.a?0:0x80; cpu->registers.m=1; };
void ORr_d(CPU* cpu) { cpu->registers.a|=cpu->registers.d; cpu->registers.a&=255; cpu->registers.f=cpu->registers.a?0:0x80; cpu->registers.m=1; };
void ORr_e(CPU* cpu) { cpu->registers.a|=cpu->registers.e; cpu->registers.a&=255; cpu->registers.f=cpu->registers.a?0:0x80; cpu->registers.m=1; };
void ORr_h(CPU* cpu) { cpu->registers.a|=cpu->registers.h; cpu->registers.a&=255; cpu->registers.f=cpu->registers.a?0:0x80; cpu->registers.m=1; };
void ORr_l(CPU* cpu) { cpu->registers.a|=cpu->registers.l; cpu->registers.a&=255; cpu->registers.f=cpu->registers.a?0:0x80; cpu->registers.m=1; };
void ORr_a(CPU* cpu) { cpu->registers.a|=cpu->registers.a; cpu->registers.a&=255; cpu->registers.f=cpu->registers.a?0:0x80; cpu->registers.m=1; };
void ORHL(CPU* cpu) { cpu->registers.a|=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); cpu->registers.a&=255; cpu->registers.f=cpu->registers.a?0:0x80; cpu->registers.m=2; };
void ORn(CPU* cpu) { cpu->registers.a|=readByte(cpu->mmu,cpu->registers.pc); cpu->registers.pc++; cpu->registers.a&=255; cpu->registers.f=cpu->registers.a?0:0x80; cpu->registers.m=2; };

void XORr_b(CPU* cpu) { cpu->registers.a^=cpu->registers.b; cpu->registers.a&=255; cpu->registers.f=cpu->registers.a?0:0x80; cpu->registers.m=1; };
void XORr_c(CPU* cpu) { cpu->registers.a^=cpu->registers.c; cpu->registers.a&=255; cpu->registers.f=cpu->registers.a?0:0x80; cpu->registers.m=1; };
void XORr_d(CPU* cpu) { cpu->registers.a^=cpu->registers.d; cpu->registers.a&=255; cpu->registers.f=cpu->registers.a?0:0x80; cpu->registers.m=1; };
void XORr_e(CPU* cpu) { cpu->registers.a^=cpu->registers.e; cpu->registers.a&=255; cpu->registers.f=cpu->registers.a?0:0x80; cpu->registers.m=1; };
void XORr_h(CPU* cpu) { cpu->registers.a^=cpu->registers.h; cpu->registers.a&=255; cpu->registers.f=cpu->registers.a?0:0x80; cpu->registers.m=1; };
void XORr_l(CPU* cpu) { cpu->registers.a^=cpu->registers.l; cpu->registers.a&=255; cpu->registers.f=cpu->registers.a?0:0x80; cpu->registers.m=1; };
void XORr_a(CPU* cpu) { cpu->registers.a^=cpu->registers.a; cpu->registers.a&=255; cpu->registers.f=cpu->registers.a?0:0x80; cpu->registers.m=1; };
void XORHL(CPU* cpu) { cpu->registers.a^=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); cpu->registers.a&=255; cpu->registers.f=cpu->registers.a?0:0x80; cpu->registers.m=2; };
void XORn(CPU* cpu) { cpu->registers.a^=readByte(cpu->mmu,cpu->registers.pc); cpu->registers.pc++; cpu->registers.a&=255; cpu->registers.f=cpu->registers.a?0:0x80; cpu->registers.m=2; };

void INCr_b(CPU* cpu) { cpu->registers.b++; cpu->registers.b&=255; cpu->registers.f=cpu->registers.b?0:0x80; cpu->registers.m=1; };
void INCr_c(CPU* cpu) { cpu->registers.c++; cpu->registers.c&=255; cpu->registers.f=cpu->registers.c?0:0x80; cpu->registers.m=1; };
void INCr_d(CPU* cpu) { cpu->registers.d++; cpu->registers.d&=255; cpu->registers.f=cpu->registers.d?0:0x80; cpu->registers.m=1; };
void INCr_e(CPU* cpu) { cpu->registers.e++; cpu->registers.e&=255; cpu->registers.f=cpu->registers.e?0:0x80; cpu->registers.m=1; };
void INCr_h(CPU* cpu) { cpu->registers.h++; cpu->registers.h&=255; cpu->registers.f=cpu->registers.h?0:0x80; cpu->registers.m=1; };
void INCr_l(CPU* cpu) { cpu->registers.l++; cpu->registers.l&=255; cpu->registers.f=cpu->registers.l?0:0x80; cpu->registers.m=1; };
void INCr_a(CPU* cpu) { cpu->registers.a++; cpu->registers.a&=255; cpu->registers.f=cpu->registers.a?0:0x80; cpu->registers.m=1; };
void INCHLm(CPU* cpu) { byte i=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l)+1; i&=255; writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l,i); cpu->registers.f=i?0:0x80; cpu->registers.m=3; };

void DECr_b(CPU* cpu) { cpu->registers.b--; cpu->registers.b&=255; cpu->registers.f=cpu->registers.b?0:0x80; cpu->registers.m=1; };
void DECr_c(CPU* cpu) { cpu->registers.c--; cpu->registers.c&=255; cpu->registers.f=cpu->registers.c?0:0x80; cpu->registers.m=1; };
void DECr_d(CPU* cpu) { cpu->registers.d--; cpu->registers.d&=255; cpu->registers.f=cpu->registers.d?0:0x80; cpu->registers.m=1; };
void DECr_e(CPU* cpu) { cpu->registers.e--; cpu->registers.e&=255; cpu->registers.f=cpu->registers.e?0:0x80; cpu->registers.m=1; };
void DECr_h(CPU* cpu) { cpu->registers.h--; cpu->registers.h&=255; cpu->registers.f=cpu->registers.h?0:0x80; cpu->registers.m=1; };
void DECr_l(CPU* cpu) { cpu->registers.l--; cpu->registers.l&=255; cpu->registers.f=cpu->registers.l?0:0x80; cpu->registers.m=1; };
void DECr_a(CPU* cpu) { cpu->registers.a--; cpu->registers.a&=255; cpu->registers.f=cpu->registers.a?0:0x80; cpu->registers.m=1; };
void DECHLm(CPU* cpu) { byte i=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l)-1; i&=255; writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l,i); cpu->registers.f=i?0:0x80; cpu->registers.m=3; };

void INCBC(CPU* cpu) { cpu->registers.c=(cpu->registers.c+1)&255; if(!cpu->registers.c) cpu->registers.b=(cpu->registers.b+1)&255; cpu->registers.m=1; };
void INCDE(CPU* cpu) { cpu->registers.e=(cpu->registers.e+1)&255; if(!cpu->registers.e) cpu->registers.d=(cpu->registers.d+1)&255; cpu->registers.m=1; };
void INCHL(CPU* cpu) { cpu->registers.l=(cpu->registers.l+1)&255; if(!cpu->registers.l) cpu->registers.h=(cpu->registers.h+1)&255; cpu->registers.m=1; };
void INCSP(CPU* cpu) { cpu->registers.sp=(cpu->registers.sp+1)&65535; cpu->registers.m=1; };

void DECBC(CPU* cpu) { cpu->registers.c=(cpu->registers.c-1)&255; if(cpu->registers.c==255) cpu->registers.b=(cpu->registers.b-1)&255; cpu->registers.m=1; };
void DECDE(CPU* cpu) { cpu->registers.e=(cpu->registers.e-1)&255; if(cpu->registers.e==255) cpu->registers.d=(cpu->registers.d-1)&255; cpu->registers.m=1; };
void DECHL(CPU* cpu) { cpu->registers.l=(cpu->registers.l-1)&255; if(cpu->registers.l==255) cpu->registers.h=(cpu->registers.h-1)&255; cpu->registers.m=1; };
void DECSP(CPU* cpu) { cpu->registers.sp=(cpu->registers.sp-1)&65535; cpu->registers.m=1; };

/*--- Bit manipulation ---*/
void BIT0b(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.b&0x01)?0:0x80; cpu->registers.m=2; };
void BIT0c(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.c&0x01)?0:0x80; cpu->registers.m=2; };
void BIT0d(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.d&0x01)?0:0x80; cpu->registers.m=2; };
void BIT0e(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.e&0x01)?0:0x80; cpu->registers.m=2; };
void BIT0h(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.h&0x01)?0:0x80; cpu->registers.m=2; };
void BIT0l(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.l&0x01)?0:0x80; cpu->registers.m=2; };
void BIT0a(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.a&0x01)?0:0x80; cpu->registers.m=2; };
void BIT0m(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l)&0x01)?0:0x80; cpu->registers.m=3; };

void RES0b(CPU* cpu) { cpu->registers.b&=0xFE; cpu->registers.m=2; };
void RES0c(CPU* cpu) { cpu->registers.c&=0xFE; cpu->registers.m=2; };
void RES0d(CPU* cpu) { cpu->registers.d&=0xFE; cpu->registers.m=2; };
void RES0e(CPU* cpu) { cpu->registers.e&=0xFE; cpu->registers.m=2; };
void RES0h(CPU* cpu) { cpu->registers.h&=0xFE; cpu->registers.m=2; };
void RES0l(CPU* cpu) { cpu->registers.l&=0xFE; cpu->registers.m=2; };
void RES0a(CPU* cpu) { cpu->registers.a&=0xFE; cpu->registers.m=2; };
void RES0m(CPU* cpu) { byte i=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); i&=0xFE; writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l,i); cpu->registers.m=4; };

void SET0b(CPU* cpu) { cpu->registers.b|=0x01; cpu->registers.m=2; };
void SET0c(CPU* cpu) { cpu->registers.b|=0x01; cpu->registers.m=2; };
void SET0d(CPU* cpu) { cpu->registers.b|=0x01; cpu->registers.m=2; };
void SET0e(CPU* cpu) { cpu->registers.b|=0x01; cpu->registers.m=2; };
void SET0h(CPU* cpu) { cpu->registers.b|=0x01; cpu->registers.m=2; };
void SET0l(CPU* cpu) { cpu->registers.b|=0x01; cpu->registers.m=2; };
void SET0a(CPU* cpu) { cpu->registers.b|=0x01; cpu->registers.m=2; };
void SET0m(CPU* cpu) { byte i=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); i|=0x01; writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l,i); cpu->registers.m=4; };

void BIT1b(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.b&0x02)?0:0x80; cpu->registers.m=2; };
void BIT1c(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.c&0x02)?0:0x80; cpu->registers.m=2; };
void BIT1d(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.d&0x02)?0:0x80; cpu->registers.m=2; };
void BIT1e(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.e&0x02)?0:0x80; cpu->registers.m=2; };
void BIT1h(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.h&0x02)?0:0x80; cpu->registers.m=2; };
void BIT1l(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.l&0x02)?0:0x80; cpu->registers.m=2; };
void BIT1a(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.a&0x02)?0:0x80; cpu->registers.m=2; };
void BIT1m(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l)&0x02)?0:0x80; cpu->registers.m=3; };

void RES1b(CPU* cpu) { cpu->registers.b&=0xFD; cpu->registers.m=2; };
void RES1c(CPU* cpu) { cpu->registers.c&=0xFD; cpu->registers.m=2; };
void RES1d(CPU* cpu) { cpu->registers.d&=0xFD; cpu->registers.m=2; };
void RES1e(CPU* cpu) { cpu->registers.e&=0xFD; cpu->registers.m=2; };
void RES1h(CPU* cpu) { cpu->registers.h&=0xFD; cpu->registers.m=2; };
void RES1l(CPU* cpu) { cpu->registers.l&=0xFD; cpu->registers.m=2; };
void RES1a(CPU* cpu) { cpu->registers.a&=0xFD; cpu->registers.m=2; };
void RES1m(CPU* cpu) { byte i=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); i&=0xFD; writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l,i); cpu->registers.m=4; };

void SET1b(CPU* cpu) { cpu->registers.b|=0x02; cpu->registers.m=2; };
void SET1c(CPU* cpu) { cpu->registers.b|=0x02; cpu->registers.m=2; };
void SET1d(CPU* cpu) { cpu->registers.b|=0x02; cpu->registers.m=2; };
void SET1e(CPU* cpu) { cpu->registers.b|=0x02; cpu->registers.m=2; };
void SET1h(CPU* cpu) { cpu->registers.b|=0x02; cpu->registers.m=2; };
void SET1l(CPU* cpu) { cpu->registers.b|=0x02; cpu->registers.m=2; };
void SET1a(CPU* cpu) { cpu->registers.b|=0x02; cpu->registers.m=2; };
void SET1m(CPU* cpu) { byte i=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); i|=0x02; writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l,i); cpu->registers.m=4; };

void BIT2b(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.b&0x04)?0:0x80; cpu->registers.m=2; };
void BIT2c(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.c&0x04)?0:0x80; cpu->registers.m=2; };
void BIT2d(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.d&0x04)?0:0x80; cpu->registers.m=2; };
void BIT2e(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.e&0x04)?0:0x80; cpu->registers.m=2; };
void BIT2h(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.h&0x04)?0:0x80; cpu->registers.m=2; };
void BIT2l(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.l&0x04)?0:0x80; cpu->registers.m=2; };
void BIT2a(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.a&0x04)?0:0x80; cpu->registers.m=2; };
void BIT2m(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l)&0x04)?0:0x80; cpu->registers.m=3; };

void RES2b(CPU* cpu) { cpu->registers.b&=0xFB; cpu->registers.m=2; };
void RES2c(CPU* cpu) { cpu->registers.c&=0xFB; cpu->registers.m=2; };
void RES2d(CPU* cpu) { cpu->registers.d&=0xFB; cpu->registers.m=2; };
void RES2e(CPU* cpu) { cpu->registers.e&=0xFB; cpu->registers.m=2; };
void RES2h(CPU* cpu) { cpu->registers.h&=0xFB; cpu->registers.m=2; };
void RES2l(CPU* cpu) { cpu->registers.l&=0xFB; cpu->registers.m=2; };
void RES2a(CPU* cpu) { cpu->registers.a&=0xFB; cpu->registers.m=2; };
void RES2m(CPU* cpu) { byte i=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); i&=0xFB; writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l,i); cpu->registers.m=4; };

void SET2b(CPU* cpu) { cpu->registers.b|=0x04; cpu->registers.m=2; };
void SET2c(CPU* cpu) { cpu->registers.b|=0x04; cpu->registers.m=2; };
void SET2d(CPU* cpu) { cpu->registers.b|=0x04; cpu->registers.m=2; };
void SET2e(CPU* cpu) { cpu->registers.b|=0x04; cpu->registers.m=2; };
void SET2h(CPU* cpu) { cpu->registers.b|=0x04; cpu->registers.m=2; };
void SET2l(CPU* cpu) { cpu->registers.b|=0x04; cpu->registers.m=2; };
void SET2a(CPU* cpu) { cpu->registers.b|=0x04; cpu->registers.m=2; };
void SET2m(CPU* cpu) { byte i=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); i|=0x04; writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l,i); cpu->registers.m=4; };

void BIT3b(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.b&0x08)?0:0x80; cpu->registers.m=2; };
void BIT3c(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.c&0x08)?0:0x80; cpu->registers.m=2; };
void BIT3d(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.d&0x08)?0:0x80; cpu->registers.m=2; };
void BIT3e(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.e&0x08)?0:0x80; cpu->registers.m=2; };
void BIT3h(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.h&0x08)?0:0x80; cpu->registers.m=2; };
void BIT3l(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.l&0x08)?0:0x80; cpu->registers.m=2; };
void BIT3a(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.a&0x08)?0:0x80; cpu->registers.m=2; };
void BIT3m(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l)&0x08)?0:0x80; cpu->registers.m=3; };

void RES3b(CPU* cpu) { cpu->registers.b&=0xF7; cpu->registers.m=2; };
void RES3c(CPU* cpu) { cpu->registers.c&=0xF7; cpu->registers.m=2; };
void RES3d(CPU* cpu) { cpu->registers.d&=0xF7; cpu->registers.m=2; };
void RES3e(CPU* cpu) { cpu->registers.e&=0xF7; cpu->registers.m=2; };
void RES3h(CPU* cpu) { cpu->registers.h&=0xF7; cpu->registers.m=2; };
void RES3l(CPU* cpu) { cpu->registers.l&=0xF7; cpu->registers.m=2; };
void RES3a(CPU* cpu) { cpu->registers.a&=0xF7; cpu->registers.m=2; };
void RES3m(CPU* cpu) { byte i=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); i&=0xF7; writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l,i); cpu->registers.m=4; };

void SET3b(CPU* cpu) { cpu->registers.b|=0x08; cpu->registers.m=2; };
void SET3c(CPU* cpu) { cpu->registers.b|=0x08; cpu->registers.m=2; };
void SET3d(CPU* cpu) { cpu->registers.b|=0x08; cpu->registers.m=2; };
void SET3e(CPU* cpu) { cpu->registers.b|=0x08; cpu->registers.m=2; };
void SET3h(CPU* cpu) { cpu->registers.b|=0x08; cpu->registers.m=2; };
void SET3l(CPU* cpu) { cpu->registers.b|=0x08; cpu->registers.m=2; };
void SET3a(CPU* cpu) { cpu->registers.b|=0x08; cpu->registers.m=2; };
void SET3m(CPU* cpu) { byte i=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); i|=0x08; writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l,i); cpu->registers.m=4; };

void BIT4b(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.b&0x10)?0:0x80; cpu->registers.m=2; };
void BIT4c(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.c&0x10)?0:0x80; cpu->registers.m=2; };
void BIT4d(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.d&0x10)?0:0x80; cpu->registers.m=2; };
void BIT4e(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.e&0x10)?0:0x80; cpu->registers.m=2; };
void BIT4h(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.h&0x10)?0:0x80; cpu->registers.m=2; };
void BIT4l(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.l&0x10)?0:0x80; cpu->registers.m=2; };
void BIT4a(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.a&0x10)?0:0x80; cpu->registers.m=2; };
void BIT4m(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l)&0x10)?0:0x80; cpu->registers.m=3; };

void RES4b(CPU* cpu) { cpu->registers.b&=0xEF; cpu->registers.m=2; };
void RES4c(CPU* cpu) { cpu->registers.c&=0xEF; cpu->registers.m=2; };
void RES4d(CPU* cpu) { cpu->registers.d&=0xEF; cpu->registers.m=2; };
void RES4e(CPU* cpu) { cpu->registers.e&=0xEF; cpu->registers.m=2; };
void RES4h(CPU* cpu) { cpu->registers.h&=0xEF; cpu->registers.m=2; };
void RES4l(CPU* cpu) { cpu->registers.l&=0xEF; cpu->registers.m=2; };
void RES4a(CPU* cpu) { cpu->registers.a&=0xEF; cpu->registers.m=2; };
void RES4m(CPU* cpu) { byte i=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); i&=0xEF; writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l,i); cpu->registers.m=4; };

void SET4b(CPU* cpu) { cpu->registers.b|=0x10; cpu->registers.m=2; };
void SET4c(CPU* cpu) { cpu->registers.b|=0x10; cpu->registers.m=2; };
void SET4d(CPU* cpu) { cpu->registers.b|=0x10; cpu->registers.m=2; };
void SET4e(CPU* cpu) { cpu->registers.b|=0x10; cpu->registers.m=2; };
void SET4h(CPU* cpu) { cpu->registers.b|=0x10; cpu->registers.m=2; };
void SET4l(CPU* cpu) { cpu->registers.b|=0x10; cpu->registers.m=2; };
void SET4a(CPU* cpu) { cpu->registers.b|=0x10; cpu->registers.m=2; };
void SET4m(CPU* cpu) { byte i=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); i|=0x10; writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l,i); cpu->registers.m=4; };

void BIT5b(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.b&0x20)?0:0x80; cpu->registers.m=2; };
void BIT5c(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.c&0x20)?0:0x80; cpu->registers.m=2; };
void BIT5d(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.d&0x20)?0:0x80; cpu->registers.m=2; };
void BIT5e(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.e&0x20)?0:0x80; cpu->registers.m=2; };
void BIT5h(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.h&0x20)?0:0x80; cpu->registers.m=2; };
void BIT5l(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.l&0x20)?0:0x80; cpu->registers.m=2; };
void BIT5a(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.a&0x20)?0:0x80; cpu->registers.m=2; };
void BIT5m(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l)&0x20)?0:0x80; cpu->registers.m=3; };

void RES5b(CPU* cpu) { cpu->registers.b&=0xDF; cpu->registers.m=2; };
void RES5c(CPU* cpu) { cpu->registers.c&=0xDF; cpu->registers.m=2; };
void RES5d(CPU* cpu) { cpu->registers.d&=0xDF; cpu->registers.m=2; };
void RES5e(CPU* cpu) { cpu->registers.e&=0xDF; cpu->registers.m=2; };
void RES5h(CPU* cpu) { cpu->registers.h&=0xDF; cpu->registers.m=2; };
void RES5l(CPU* cpu) { cpu->registers.l&=0xDF; cpu->registers.m=2; };
void RES5a(CPU* cpu) { cpu->registers.a&=0xDF; cpu->registers.m=2; };
void RES5m(CPU* cpu) { byte i=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); i&=0xDF; writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l,i); cpu->registers.m=4; };

void SET5b(CPU* cpu) { cpu->registers.b|=0x20; cpu->registers.m=2; };
void SET5c(CPU* cpu) { cpu->registers.b|=0x20; cpu->registers.m=2; };
void SET5d(CPU* cpu) { cpu->registers.b|=0x20; cpu->registers.m=2; };
void SET5e(CPU* cpu) { cpu->registers.b|=0x20; cpu->registers.m=2; };
void SET5h(CPU* cpu) { cpu->registers.b|=0x20; cpu->registers.m=2; };
void SET5l(CPU* cpu) { cpu->registers.b|=0x20; cpu->registers.m=2; };
void SET5a(CPU* cpu) { cpu->registers.b|=0x20; cpu->registers.m=2; };
void SET5m(CPU* cpu) { byte i=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); i|=0x20; writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l,i); cpu->registers.m=4; };

void BIT6b(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.b&0x40)?0:0x80; cpu->registers.m=2; };
void BIT6c(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.c&0x40)?0:0x80; cpu->registers.m=2; };
void BIT6d(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.d&0x40)?0:0x80; cpu->registers.m=2; };
void BIT6e(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.e&0x40)?0:0x80; cpu->registers.m=2; };
void BIT6h(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.h&0x40)?0:0x80; cpu->registers.m=2; };
void BIT6l(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.l&0x40)?0:0x80; cpu->registers.m=2; };
void BIT6a(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.a&0x40)?0:0x80; cpu->registers.m=2; };
void BIT6m(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l)&0x40)?0:0x80; cpu->registers.m=3; };

void RES6b(CPU* cpu) { cpu->registers.b&=0xBF; cpu->registers.m=2; };
void RES6c(CPU* cpu) { cpu->registers.c&=0xBF; cpu->registers.m=2; };
void RES6d(CPU* cpu) { cpu->registers.d&=0xBF; cpu->registers.m=2; };
void RES6e(CPU* cpu) { cpu->registers.e&=0xBF; cpu->registers.m=2; };
void RES6h(CPU* cpu) { cpu->registers.h&=0xBF; cpu->registers.m=2; };
void RES6l(CPU* cpu) { cpu->registers.l&=0xBF; cpu->registers.m=2; };
void RES6a(CPU* cpu) { cpu->registers.a&=0xBF; cpu->registers.m=2; };
void RES6m(CPU* cpu) { byte i=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); i&=0xBF; writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l,i); cpu->registers.m=4; };

void SET6b(CPU* cpu) { cpu->registers.b|=0x40; cpu->registers.m=2; };
void SET6c(CPU* cpu) { cpu->registers.b|=0x40; cpu->registers.m=2; };
void SET6d(CPU* cpu) { cpu->registers.b|=0x40; cpu->registers.m=2; };
void SET6e(CPU* cpu) { cpu->registers.b|=0x40; cpu->registers.m=2; };
void SET6h(CPU* cpu) { cpu->registers.b|=0x40; cpu->registers.m=2; };
void SET6l(CPU* cpu) { cpu->registers.b|=0x40; cpu->registers.m=2; };
void SET6a(CPU* cpu) { cpu->registers.b|=0x40; cpu->registers.m=2; };
void SET6m(CPU* cpu) { byte i=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); i|=0x40; writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l,i); cpu->registers.m=4; };

void BIT7b(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.b&0x80)?0:0x80; cpu->registers.m=2; };
void BIT7c(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.c&0x80)?0:0x80; cpu->registers.m=2; };
void BIT7d(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.d&0x80)?0:0x80; cpu->registers.m=2; };
void BIT7e(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.e&0x80)?0:0x80; cpu->registers.m=2; };
void BIT7h(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.h&0x80)?0:0x80; cpu->registers.m=2; };
void BIT7l(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.l&0x80)?0:0x80; cpu->registers.m=2; };
void BIT7a(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(cpu->registers.a&0x80)?0:0x80; cpu->registers.m=2; };
void BIT7m(CPU* cpu) { cpu->registers.f&=0x1F; cpu->registers.f|=0x20; cpu->registers.f=(readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l)&0x80)?0:0x80; cpu->registers.m=3; };

void RES7b(CPU* cpu) { cpu->registers.b&=0x7F; cpu->registers.m=2; };
void RES7c(CPU* cpu) { cpu->registers.c&=0x7F; cpu->registers.m=2; };
void RES7d(CPU* cpu) { cpu->registers.d&=0x7F; cpu->registers.m=2; };
void RES7e(CPU* cpu) { cpu->registers.e&=0x7F; cpu->registers.m=2; };
void RES7h(CPU* cpu) { cpu->registers.h&=0x7F; cpu->registers.m=2; };
void RES7l(CPU* cpu) { cpu->registers.l&=0x7F; cpu->registers.m=2; };
void RES7a(CPU* cpu) { cpu->registers.a&=0x7F; cpu->registers.m=2; };
void RES7m(CPU* cpu) { byte i=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); i&=0x7F; writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l,i); cpu->registers.m=4; };

void SET7b(CPU* cpu) { cpu->registers.b|=0x80; cpu->registers.m=2; };
void SET7c(CPU* cpu) { cpu->registers.b|=0x80; cpu->registers.m=2; };
void SET7d(CPU* cpu) { cpu->registers.b|=0x80; cpu->registers.m=2; };
void SET7e(CPU* cpu) { cpu->registers.b|=0x80; cpu->registers.m=2; };
void SET7h(CPU* cpu) { cpu->registers.b|=0x80; cpu->registers.m=2; };
void SET7l(CPU* cpu) { cpu->registers.b|=0x80; cpu->registers.m=2; };
void SET7a(CPU* cpu) { cpu->registers.b|=0x80; cpu->registers.m=2; };
void SET7m(CPU* cpu) { byte i=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); i|=0x80; writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l,i); cpu->registers.m=4; };

void RLA(CPU* cpu) { byte ci=cpu->registers.f&0x10?1:0; byte co=cpu->registers.a&0x80?0x10:0; cpu->registers.a=(cpu->registers.a<<1)+ci; cpu->registers.a&=255; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=1; };
void RLCA(CPU* cpu) { byte ci=cpu->registers.a&0x80?1:0; byte co=cpu->registers.a&0x80?0x10:0; cpu->registers.a=(cpu->registers.a<<1)+ci; cpu->registers.a&=255; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=1; };
void RRA(CPU* cpu) { byte ci=cpu->registers.f&0x10?0x80:0; byte co=cpu->registers.a&1?0x10:0; cpu->registers.a=(cpu->registers.a>>1)+ci; cpu->registers.a&=255; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=1; };
void RRCA(CPU* cpu) { byte ci=cpu->registers.a&1?0x80:0; byte co=cpu->registers.a&1?0x10:0; cpu->registers.a=(cpu->registers.a>>1)+ci; cpu->registers.a&=255; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=1; };

void RLr_b(CPU* cpu) { byte ci=cpu->registers.f&0x10?1:0; byte co=cpu->registers.b&0x80?0x10:0; cpu->registers.b=(cpu->registers.b<<1)+ci; cpu->registers.b&=255; cpu->registers.f=(cpu->registers.b)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void RLr_c(CPU* cpu) { byte ci=cpu->registers.f&0x10?1:0; byte co=cpu->registers.c&0x80?0x10:0; cpu->registers.c=(cpu->registers.c<<1)+ci; cpu->registers.c&=255; cpu->registers.f=(cpu->registers.c)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void RLr_d(CPU* cpu) { byte ci=cpu->registers.f&0x10?1:0; byte co=cpu->registers.d&0x80?0x10:0; cpu->registers.d=(cpu->registers.d<<1)+ci; cpu->registers.d&=255; cpu->registers.f=(cpu->registers.d)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void RLr_e(CPU* cpu) { byte ci=cpu->registers.f&0x10?1:0; byte co=cpu->registers.e&0x80?0x10:0; cpu->registers.e=(cpu->registers.e<<1)+ci; cpu->registers.e&=255; cpu->registers.f=(cpu->registers.e)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void RLr_h(CPU* cpu) { byte ci=cpu->registers.f&0x10?1:0; byte co=cpu->registers.h&0x80?0x10:0; cpu->registers.h=(cpu->registers.h<<1)+ci; cpu->registers.h&=255; cpu->registers.f=(cpu->registers.h)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void RLr_l(CPU* cpu) { byte ci=cpu->registers.f&0x10?1:0; byte co=cpu->registers.l&0x80?0x10:0; cpu->registers.l=(cpu->registers.l<<1)+ci; cpu->registers.l&=255; cpu->registers.f=(cpu->registers.l)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void RLr_a(CPU* cpu) { byte ci=cpu->registers.f&0x10?1:0; byte co=cpu->registers.a&0x80?0x10:0; cpu->registers.a=(cpu->registers.a<<1)+ci; cpu->registers.a&=255; cpu->registers.f=(cpu->registers.a)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void RLHL(CPU* cpu) { byte i=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); byte ci=cpu->registers.f&0x10?1:0; byte co=i&0x80?0x10:0; i=(i<<1)+ci; i&=255; cpu->registers.f=(i)?0:0x80; writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l,i); cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=4; };

void RLCr_b(CPU* cpu) { byte ci=cpu->registers.b&0x80?1:0; byte co=cpu->registers.b&0x80?0x10:0; cpu->registers.b=(cpu->registers.b<<1)+ci; cpu->registers.b&=255; cpu->registers.f=(cpu->registers.b)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void RLCr_c(CPU* cpu) { byte ci=cpu->registers.c&0x80?1:0; byte co=cpu->registers.c&0x80?0x10:0; cpu->registers.c=(cpu->registers.c<<1)+ci; cpu->registers.c&=255; cpu->registers.f=(cpu->registers.c)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void RLCr_d(CPU* cpu) { byte ci=cpu->registers.d&0x80?1:0; byte co=cpu->registers.d&0x80?0x10:0; cpu->registers.d=(cpu->registers.d<<1)+ci; cpu->registers.d&=255; cpu->registers.f=(cpu->registers.d)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void RLCr_e(CPU* cpu) { byte ci=cpu->registers.e&0x80?1:0; byte co=cpu->registers.e&0x80?0x10:0; cpu->registers.e=(cpu->registers.e<<1)+ci; cpu->registers.e&=255; cpu->registers.f=(cpu->registers.e)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void RLCr_h(CPU* cpu) { byte ci=cpu->registers.h&0x80?1:0; byte co=cpu->registers.h&0x80?0x10:0; cpu->registers.h=(cpu->registers.h<<1)+ci; cpu->registers.h&=255; cpu->registers.f=(cpu->registers.h)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void RLCr_l(CPU* cpu) { byte ci=cpu->registers.l&0x80?1:0; byte co=cpu->registers.l&0x80?0x10:0; cpu->registers.l=(cpu->registers.l<<1)+ci; cpu->registers.l&=255; cpu->registers.f=(cpu->registers.l)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void RLCr_a(CPU* cpu) { byte ci=cpu->registers.a&0x80?1:0; byte co=cpu->registers.a&0x80?0x10:0; cpu->registers.a=(cpu->registers.a<<1)+ci; cpu->registers.a&=255; cpu->registers.f=(cpu->registers.a)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void RLCHL(CPU* cpu) { byte i=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); byte ci=i&0x80?1:0; byte co=i&0x80?0x10:0; i=(i<<1)+ci; i&=255; cpu->registers.f=(i)?0:0x80; writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l,i); cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=4; };

void RRr_b(CPU* cpu) { byte ci=cpu->registers.f&0x10?0x80:0; byte co=cpu->registers.b&1?0x10:0; cpu->registers.b=(cpu->registers.b>>1)+ci; cpu->registers.b&=255; cpu->registers.f=(cpu->registers.b)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void RRr_c(CPU* cpu) { byte ci=cpu->registers.f&0x10?0x80:0; byte co=cpu->registers.c&1?0x10:0; cpu->registers.c=(cpu->registers.c>>1)+ci; cpu->registers.c&=255; cpu->registers.f=(cpu->registers.c)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void RRr_d(CPU* cpu) { byte ci=cpu->registers.f&0x10?0x80:0; byte co=cpu->registers.d&1?0x10:0; cpu->registers.d=(cpu->registers.d>>1)+ci; cpu->registers.d&=255; cpu->registers.f=(cpu->registers.d)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void RRr_e(CPU* cpu) { byte ci=cpu->registers.f&0x10?0x80:0; byte co=cpu->registers.e&1?0x10:0; cpu->registers.e=(cpu->registers.e>>1)+ci; cpu->registers.e&=255; cpu->registers.f=(cpu->registers.e)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void RRr_h(CPU* cpu) { byte ci=cpu->registers.f&0x10?0x80:0; byte co=cpu->registers.h&1?0x10:0; cpu->registers.h=(cpu->registers.h>>1)+ci; cpu->registers.h&=255; cpu->registers.f=(cpu->registers.h)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void RRr_l(CPU* cpu) { byte ci=cpu->registers.f&0x10?0x80:0; byte co=cpu->registers.l&1?0x10:0; cpu->registers.l=(cpu->registers.l>>1)+ci; cpu->registers.l&=255; cpu->registers.f=(cpu->registers.l)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void RRr_a(CPU* cpu) { byte ci=cpu->registers.f&0x10?0x80:0; byte co=cpu->registers.a&1?0x10:0; cpu->registers.a=(cpu->registers.a>>1)+ci; cpu->registers.a&=255; cpu->registers.f=(cpu->registers.a)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void RRHL(CPU* cpu) { byte i=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); byte ci=cpu->registers.f&0x10?0x80:0; byte co=i&1?0x10:0; i=(i>>1)+ci; i&=255; writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l,i); cpu->registers.f=(i)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=4; };

void RRCr_b(CPU* cpu) { byte ci=cpu->registers.b&1?0x80:0; byte co=cpu->registers.b&1?0x10:0; cpu->registers.b=(cpu->registers.b>>1)+ci; cpu->registers.b&=255; cpu->registers.f=(cpu->registers.b)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void RRCr_c(CPU* cpu) { byte ci=cpu->registers.c&1?0x80:0; byte co=cpu->registers.c&1?0x10:0; cpu->registers.c=(cpu->registers.c>>1)+ci; cpu->registers.c&=255; cpu->registers.f=(cpu->registers.c)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void RRCr_d(CPU* cpu) { byte ci=cpu->registers.d&1?0x80:0; byte co=cpu->registers.d&1?0x10:0; cpu->registers.d=(cpu->registers.d>>1)+ci; cpu->registers.d&=255; cpu->registers.f=(cpu->registers.d)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void RRCr_e(CPU* cpu) { byte ci=cpu->registers.e&1?0x80:0; byte co=cpu->registers.e&1?0x10:0; cpu->registers.e=(cpu->registers.e>>1)+ci; cpu->registers.e&=255; cpu->registers.f=(cpu->registers.e)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void RRCr_h(CPU* cpu) { byte ci=cpu->registers.h&1?0x80:0; byte co=cpu->registers.h&1?0x10:0; cpu->registers.h=(cpu->registers.h>>1)+ci; cpu->registers.h&=255; cpu->registers.f=(cpu->registers.h)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void RRCr_l(CPU* cpu) { byte ci=cpu->registers.l&1?0x80:0; byte co=cpu->registers.l&1?0x10:0; cpu->registers.l=(cpu->registers.l>>1)+ci; cpu->registers.l&=255; cpu->registers.f=(cpu->registers.l)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void RRCr_a(CPU* cpu) { byte ci=cpu->registers.a&1?0x80:0; byte co=cpu->registers.a&1?0x10:0; cpu->registers.a=(cpu->registers.a>>1)+ci; cpu->registers.a&=255; cpu->registers.f=(cpu->registers.a)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void RRCHL(CPU* cpu) { byte i=readByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l); byte ci=i&1?0x80:0; byte co=i&1?0x10:0; i=(i>>1)+ci; i&=255; writeByte(cpu->mmu,(cpu->registers.h<<8)+cpu->registers.l,i); cpu->registers.f=(i)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=4; };

void SLAr_b(CPU* cpu) { byte co=cpu->registers.b&0x80?0x10:0; cpu->registers.b=(cpu->registers.b<<1)&255; cpu->registers.f=(cpu->registers.b)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void SLAr_c(CPU* cpu) { byte co=cpu->registers.c&0x80?0x10:0; cpu->registers.c=(cpu->registers.c<<1)&255; cpu->registers.f=(cpu->registers.c)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void SLAr_d(CPU* cpu) { byte co=cpu->registers.d&0x80?0x10:0; cpu->registers.d=(cpu->registers.d<<1)&255; cpu->registers.f=(cpu->registers.d)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void SLAr_e(CPU* cpu) { byte co=cpu->registers.e&0x80?0x10:0; cpu->registers.e=(cpu->registers.e<<1)&255; cpu->registers.f=(cpu->registers.e)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void SLAr_h(CPU* cpu) { byte co=cpu->registers.h&0x80?0x10:0; cpu->registers.h=(cpu->registers.h<<1)&255; cpu->registers.f=(cpu->registers.h)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void SLAr_l(CPU* cpu) { byte co=cpu->registers.l&0x80?0x10:0; cpu->registers.l=(cpu->registers.l<<1)&255; cpu->registers.f=(cpu->registers.l)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void SLAr_a(CPU* cpu) { byte co=cpu->registers.a&0x80?0x10:0; cpu->registers.a=(cpu->registers.a<<1)&255; cpu->registers.f=(cpu->registers.a)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };

void SLLr_b(CPU* cpu) { byte co=cpu->registers.b&0x80?0x10:0; cpu->registers.b=(cpu->registers.b<<1)&255+1; cpu->registers.f=(cpu->registers.b)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void SLLr_c(CPU* cpu) { byte co=cpu->registers.c&0x80?0x10:0; cpu->registers.c=(cpu->registers.c<<1)&255+1; cpu->registers.f=(cpu->registers.c)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void SLLr_d(CPU* cpu) { byte co=cpu->registers.d&0x80?0x10:0; cpu->registers.d=(cpu->registers.d<<1)&255+1; cpu->registers.f=(cpu->registers.d)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void SLLr_e(CPU* cpu) { byte co=cpu->registers.e&0x80?0x10:0; cpu->registers.e=(cpu->registers.e<<1)&255+1; cpu->registers.f=(cpu->registers.e)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void SLLr_h(CPU* cpu) { byte co=cpu->registers.h&0x80?0x10:0; cpu->registers.h=(cpu->registers.h<<1)&255+1; cpu->registers.f=(cpu->registers.h)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void SLLr_l(CPU* cpu) { byte co=cpu->registers.l&0x80?0x10:0; cpu->registers.l=(cpu->registers.l<<1)&255+1; cpu->registers.f=(cpu->registers.l)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void SLLr_a(CPU* cpu) { byte co=cpu->registers.a&0x80?0x10:0; cpu->registers.a=(cpu->registers.a<<1)&255+1; cpu->registers.f=(cpu->registers.a)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };

void SRAr_b(CPU* cpu) { byte ci=cpu->registers.b&0x80; byte co=cpu->registers.b&1?0x10:0; cpu->registers.b=((cpu->registers.b>>1)+ci)&255; cpu->registers.f=(cpu->registers.b)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void SRAr_c(CPU* cpu) { byte ci=cpu->registers.c&0x80; byte co=cpu->registers.c&1?0x10:0; cpu->registers.c=((cpu->registers.c>>1)+ci)&255; cpu->registers.f=(cpu->registers.c)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void SRAr_d(CPU* cpu) { byte ci=cpu->registers.d&0x80; byte co=cpu->registers.d&1?0x10:0; cpu->registers.d=((cpu->registers.d>>1)+ci)&255; cpu->registers.f=(cpu->registers.d)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void SRAr_e(CPU* cpu) { byte ci=cpu->registers.e&0x80; byte co=cpu->registers.e&1?0x10:0; cpu->registers.e=((cpu->registers.e>>1)+ci)&255; cpu->registers.f=(cpu->registers.e)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void SRAr_h(CPU* cpu) { byte ci=cpu->registers.h&0x80; byte co=cpu->registers.h&1?0x10:0; cpu->registers.h=((cpu->registers.h>>1)+ci)&255; cpu->registers.f=(cpu->registers.h)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void SRAr_l(CPU* cpu) { byte ci=cpu->registers.l&0x80; byte co=cpu->registers.l&1?0x10:0; cpu->registers.l=((cpu->registers.l>>1)+ci)&255; cpu->registers.f=(cpu->registers.l)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void SRAr_a(CPU* cpu) { byte ci=cpu->registers.a&0x80; byte co=cpu->registers.a&1?0x10:0; cpu->registers.a=((cpu->registers.a>>1)+ci)&255; cpu->registers.f=(cpu->registers.a)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };

void SRLr_b(CPU* cpu) { byte co=cpu->registers.b&1?0x10:0; cpu->registers.b=(cpu->registers.b>>1)&255; cpu->registers.f=(cpu->registers.b)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void SRLr_c(CPU* cpu) { byte co=cpu->registers.c&1?0x10:0; cpu->registers.c=(cpu->registers.c>>1)&255; cpu->registers.f=(cpu->registers.c)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void SRLr_d(CPU* cpu) { byte co=cpu->registers.d&1?0x10:0; cpu->registers.d=(cpu->registers.d>>1)&255; cpu->registers.f=(cpu->registers.d)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void SRLr_e(CPU* cpu) { byte co=cpu->registers.e&1?0x10:0; cpu->registers.e=(cpu->registers.e>>1)&255; cpu->registers.f=(cpu->registers.e)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void SRLr_h(CPU* cpu) { byte co=cpu->registers.h&1?0x10:0; cpu->registers.h=(cpu->registers.h>>1)&255; cpu->registers.f=(cpu->registers.h)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void SRLr_l(CPU* cpu) { byte co=cpu->registers.l&1?0x10:0; cpu->registers.l=(cpu->registers.l>>1)&255; cpu->registers.f=(cpu->registers.l)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };
void SRLr_a(CPU* cpu) { byte co=cpu->registers.a&1?0x10:0; cpu->registers.a=(cpu->registers.a>>1)&255; cpu->registers.f=(cpu->registers.a)?0:0x80; cpu->registers.f=(cpu->registers.f&0xEF)+co; cpu->registers.m=2; };

void CPL(CPU* cpu) { cpu->registers.a ^= 255; cpu->registers.f=cpu->registers.a?0:0x80; cpu->registers.m=1; };
void NEG(CPU* cpu) { cpu->registers.a=0-cpu->registers.a; cpu->registers.f=(cpu->registers.a<0)?0x10:0; cpu->registers.a&=255; if(!cpu->registers.a) cpu->registers.f|=0x80; cpu->registers.m=2; };

void CCF(CPU* cpu) { byte ci=cpu->registers.f&0x10?0:0x10; cpu->registers.f=(cpu->registers.f&0xEF)+ci; cpu->registers.m=1; };
void SCF(CPU* cpu) { cpu->registers.f|=0x10; cpu->registers.m=1; };

/*--- Stack ---*/
void PUSHBC(CPU* cpu) { cpu->registers.sp--; writeByte(cpu->mmu,cpu->registers.sp,cpu->registers.b); cpu->registers.sp--; writeByte(cpu->mmu,cpu->registers.sp,cpu->registers.c); cpu->registers.m=3; };
void PUSHDE(CPU* cpu) { cpu->registers.sp--; writeByte(cpu->mmu,cpu->registers.sp,cpu->registers.d); cpu->registers.sp--; writeByte(cpu->mmu,cpu->registers.sp,cpu->registers.e); cpu->registers.m=3; };
void PUSHHL(CPU* cpu) { cpu->registers.sp--; writeByte(cpu->mmu,cpu->registers.sp,cpu->registers.h); cpu->registers.sp--; writeByte(cpu->mmu,cpu->registers.sp,cpu->registers.l); cpu->registers.m=3; };
void PUSHAF(CPU* cpu) { cpu->registers.sp--; writeByte(cpu->mmu,cpu->registers.sp,cpu->registers.a); cpu->registers.sp--; writeByte(cpu->mmu,cpu->registers.sp,cpu->registers.f); cpu->registers.m=3; };

void POPBC(CPU* cpu) { cpu->registers.c=readByte(cpu->mmu,cpu->registers.sp); cpu->registers.sp++; cpu->registers.b=readByte(cpu->mmu,cpu->registers.sp); cpu->registers.sp++; cpu->registers.m=3; };
void POPDE(CPU* cpu) { cpu->registers.e=readByte(cpu->mmu,cpu->registers.sp); cpu->registers.sp++; cpu->registers.d=readByte(cpu->mmu,cpu->registers.sp); cpu->registers.sp++; cpu->registers.m=3; };
void POPHL(CPU* cpu) { cpu->registers.l=readByte(cpu->mmu,cpu->registers.sp); cpu->registers.sp++; cpu->registers.h=readByte(cpu->mmu,cpu->registers.sp); cpu->registers.sp++; cpu->registers.m=3; };
void POPAF(CPU* cpu) { cpu->registers.f=readByte(cpu->mmu,cpu->registers.sp); cpu->registers.sp++; cpu->registers.a=readByte(cpu->mmu,cpu->registers.sp); cpu->registers.sp++; cpu->registers.m=3; };

/*--- Jump ---*/
void JPnn(CPU* cpu) { cpu->registers.pc = readWord(cpu->mmu,cpu->registers.pc); cpu->registers.m=3; };
void JPHL(CPU* cpu) { cpu->registers.pc=(cpu->registers.h<<8)+cpu->registers.l; cpu->registers.m=1; };
void JPNZnn(CPU* cpu) { cpu->registers.m=3; if((cpu->registers.f&0x80)==0x00) { cpu->registers.pc=readWord(cpu->mmu,cpu->registers.pc); cpu->registers.m++; } else cpu->registers.pc+=2; };
void JPZnn(CPU* cpu)  { cpu->registers.m=3; if((cpu->registers.f&0x80)==0x80) { cpu->registers.pc=readWord(cpu->mmu,cpu->registers.pc); cpu->registers.m++; } else cpu->registers.pc+=2; };
void JPNCnn(CPU* cpu) { cpu->registers.m=3; if((cpu->registers.f&0x10)==0x00) { cpu->registers.pc=readWord(cpu->mmu,cpu->registers.pc); cpu->registers.m++; } else cpu->registers.pc+=2; };
void JPCnn(CPU* cpu)  { cpu->registers.m=3; if((cpu->registers.f&0x10)==0x10) { cpu->registers.pc=readWord(cpu->mmu,cpu->registers.pc); cpu->registers.m++; } else cpu->registers.pc+=2; };

void JRn(CPU* cpu) { byte i=readByte(cpu->mmu,cpu->registers.pc); if(i>127) i=-((~i+1)&255); cpu->registers.pc++; cpu->registers.m=2; cpu->registers.pc+=i; cpu->registers.m++; };
void JRNZn(CPU* cpu) { byte i=readByte(cpu->mmu,cpu->registers.pc); if(i>127) i=-((~i+1)&255); cpu->registers.pc++; cpu->registers.m=2; if((cpu->registers.f&0x80)==0x00) { cpu->registers.pc+=i; cpu->registers.m++; } };
void JRZn(CPU* cpu)  { byte i=readByte(cpu->mmu,cpu->registers.pc); if(i>127) i=-((~i+1)&255); cpu->registers.pc++; cpu->registers.m=2; if((cpu->registers.f&0x80)==0x80) { cpu->registers.pc+=i; cpu->registers.m++; } };
void JRNCn(CPU* cpu) { byte i=readByte(cpu->mmu,cpu->registers.pc); if(i>127) i=-((~i+1)&255); cpu->registers.pc++; cpu->registers.m=2; if((cpu->registers.f&0x10)==0x00) { cpu->registers.pc+=i; cpu->registers.m++; } };
void JRCn(CPU* cpu)  { byte i=readByte(cpu->mmu,cpu->registers.pc); if(i>127) i=-((~i+1)&255); cpu->registers.pc++; cpu->registers.m=2; if((cpu->registers.f&0x10)==0x10) { cpu->registers.pc+=i; cpu->registers.m++; } };

void DJNZn(CPU* cpu) { byte i=readByte(cpu->mmu,cpu->registers.pc); if(i>127) i=-((~i+1)&255); cpu->registers.pc++; cpu->registers.m=2; cpu->registers.b--; if(cpu->registers.b) { cpu->registers.pc+=i; cpu->registers.m++; } };

void CALLnn(CPU* cpu) { cpu->registers.sp-=2; writeWord(cpu->mmu,cpu->registers.sp,cpu->registers.pc+2); cpu->registers.pc=readWord(cpu->mmu,cpu->registers.pc); cpu->registers.m=5; };
void CALLNZnn(CPU* cpu) { cpu->registers.m=3; if((cpu->registers.f&0x80)==0x00) { cpu->registers.sp-=2; writeWord(cpu->mmu,cpu->registers.sp,cpu->registers.pc+2); cpu->registers.pc=readWord(cpu->mmu,cpu->registers.pc); cpu->registers.m+=2; } else cpu->registers.pc+=2; };
void CALLZnn(CPU* cpu) { cpu->registers.m=3; if((cpu->registers.f&0x80)==0x80) { cpu->registers.sp-=2; writeWord(cpu->mmu,cpu->registers.sp,cpu->registers.pc+2); cpu->registers.pc=readWord(cpu->mmu,cpu->registers.pc); cpu->registers.m+=2; } else cpu->registers.pc+=2; };
void CALLNCnn(CPU* cpu) { cpu->registers.m=3; if((cpu->registers.f&0x10)==0x00) { cpu->registers.sp-=2; writeWord(cpu->mmu,cpu->registers.sp,cpu->registers.pc+2); cpu->registers.pc=readWord(cpu->mmu,cpu->registers.pc); cpu->registers.m+=2; } else cpu->registers.pc+=2; };
void CALLCnn(CPU* cpu) { cpu->registers.m=3; if((cpu->registers.f&0x10)==0x10) { cpu->registers.sp-=2; writeWord(cpu->mmu,cpu->registers.sp,cpu->registers.pc+2); cpu->registers.pc=readWord(cpu->mmu,cpu->registers.pc); cpu->registers.m+=2; } else cpu->registers.pc+=2; };

void RET(CPU* cpu) { cpu->registers.pc=readWord(cpu->mmu,cpu->registers.sp); cpu->registers.sp+=2; cpu->registers.m=3; };
#warning unsupported register
void RETI(CPU* cpu) { /*cpu->registers.ime=1;*/ rrs(cpu); cpu->registers.pc=readWord(cpu->mmu,cpu->registers.sp); cpu->registers.sp+=2; cpu->registers.m=3; };
void RETNZ(CPU* cpu) { cpu->registers.m=1; if((cpu->registers.f&0x80)==0x00) { cpu->registers.pc=readWord(cpu->mmu,cpu->registers.sp); cpu->registers.sp+=2; cpu->registers.m+=2; } };
void RETZ(CPU* cpu) { cpu->registers.m=1; if((cpu->registers.f&0x80)==0x80) { cpu->registers.pc=readWord(cpu->mmu,cpu->registers.sp); cpu->registers.sp+=2; cpu->registers.m+=2; } };
void RETNC(CPU* cpu) { cpu->registers.m=1; if((cpu->registers.f&0x10)==0x00) { cpu->registers.pc=readWord(cpu->mmu,cpu->registers.sp); cpu->registers.sp+=2; cpu->registers.m+=2; } };
void RETC(CPU* cpu) { cpu->registers.m=1; if((cpu->registers.f&0x10)==0x10) { cpu->registers.pc=readWord(cpu->mmu,cpu->registers.sp); cpu->registers.sp+=2; cpu->registers.m+=2; } };

void RST00(CPU* cpu) { rsv(cpu); cpu->registers.sp-=2; writeWord(cpu->mmu,cpu->registers.sp,cpu->registers.pc); cpu->registers.pc=0x00; cpu->registers.m=3; };
void RST08(CPU* cpu) { rsv(cpu); cpu->registers.sp-=2; writeWord(cpu->mmu,cpu->registers.sp,cpu->registers.pc); cpu->registers.pc=0x08; cpu->registers.m=3; };
void RST10(CPU* cpu) { rsv(cpu); cpu->registers.sp-=2; writeWord(cpu->mmu,cpu->registers.sp,cpu->registers.pc); cpu->registers.pc=0x10; cpu->registers.m=3; };
void RST18(CPU* cpu) { rsv(cpu); cpu->registers.sp-=2; writeWord(cpu->mmu,cpu->registers.sp,cpu->registers.pc); cpu->registers.pc=0x18; cpu->registers.m=3; };
void RST20(CPU* cpu) { rsv(cpu); cpu->registers.sp-=2; writeWord(cpu->mmu,cpu->registers.sp,cpu->registers.pc); cpu->registers.pc=0x20; cpu->registers.m=3; };
void RST28(CPU* cpu) { rsv(cpu); cpu->registers.sp-=2; writeWord(cpu->mmu,cpu->registers.sp,cpu->registers.pc); cpu->registers.pc=0x28; cpu->registers.m=3; };
void RST30(CPU* cpu) { rsv(cpu); cpu->registers.sp-=2; writeWord(cpu->mmu,cpu->registers.sp,cpu->registers.pc); cpu->registers.pc=0x30; cpu->registers.m=3; };
void RST38(CPU* cpu) { rsv(cpu); cpu->registers.sp-=2; writeWord(cpu->mmu,cpu->registers.sp,cpu->registers.pc); cpu->registers.pc=0x38; cpu->registers.m=3; };
void RST40(CPU* cpu) { rsv(cpu); cpu->registers.sp-=2; writeWord(cpu->mmu,cpu->registers.sp,cpu->registers.pc); cpu->registers.pc=0x40; cpu->registers.m=3; };
void RST48(CPU* cpu) { rsv(cpu); cpu->registers.sp-=2; writeWord(cpu->mmu,cpu->registers.sp,cpu->registers.pc); cpu->registers.pc=0x48; cpu->registers.m=3; };
void RST50(CPU* cpu) { rsv(cpu); cpu->registers.sp-=2; writeWord(cpu->mmu,cpu->registers.sp,cpu->registers.pc); cpu->registers.pc=0x50; cpu->registers.m=3; };
void RST58(CPU* cpu) { rsv(cpu); cpu->registers.sp-=2; writeWord(cpu->mmu,cpu->registers.sp,cpu->registers.pc); cpu->registers.pc=0x58; cpu->registers.m=3; };
void RST60(CPU* cpu) { rsv(cpu); cpu->registers.sp-=2; writeWord(cpu->mmu,cpu->registers.sp,cpu->registers.pc); cpu->registers.pc=0x60; cpu->registers.m=3; };

void NOP(CPU* cpu) { cpu->registers.m=1; };
#warning unsupported cpu attribute
void HALT(CPU* cpu) { /*Z80._halt=1;*/ cpu->registers.m=1; };

#warning unsupported register
void DI(CPU* cpu) { /*cpu->registers.ime=0;*/ cpu->registers.m=1; };
#warning unsupported register
void EI(CPU* cpu) { /*cpu->registers.ime=1;*/ cpu->registers.m=1; };

/*--- Helper functions ---*/
void rsv(CPU* cpu) {
	cpu->rsv.a = cpu->registers.a; cpu->rsv.b = cpu->registers.b;
	cpu->rsv.c = cpu->registers.c; cpu->rsv.d = cpu->registers.d;
	cpu->rsv.e = cpu->registers.e; cpu->rsv.f = cpu->registers.f;
	cpu->rsv.h = cpu->registers.h; cpu->rsv.l = cpu->registers.l;
};

void rrs(CPU* cpu) {
	cpu->registers.a = cpu->rsv.a; cpu->registers.b = cpu->rsv.b;
	cpu->registers.c = cpu->rsv.c; cpu->registers.d = cpu->rsv.d;
	cpu->registers.e = cpu->rsv.e; cpu->registers.f = cpu->rsv.f;
	cpu->registers.h = cpu->rsv.h; cpu->registers.l = cpu->rsv.l;
};

void MAPcb(CPU* cpu) {
	byte i=readByte(cpu->mmu,cpu->registers.pc); cpu->registers.pc++;
	cpu->registers.pc &= 65535;
	if(CBFunctions[i]) CBFunctions[i](cpu);
#warning silenced error message
//	else console.log(i);
};

void XX(CPU* cpu) {
	/*Undefined map entry*/
	word opc = cpu->registers.pc-1;
#warning silenced error message
	//printf('Unimplemented instruction at $%b, stopping.', opc);
#warning unsupported cpu attribute
	/*Z80._stop=1;*/
}