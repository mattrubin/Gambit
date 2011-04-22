//
//  Ops.h
//  Gambit
//
//  Created by Matt Rubin on 4/21/11.
//  Copyright 2011 Matt Rubin. All rights reserved.
//

#pragma once
#include "CPU.h"


typedef void (*opFunction)(CPU* cpu);

void LD_B_B(CPU* cpu);
void LD_B_C(CPU* cpu);
void LD_B_D(CPU* cpu);
void LD_B_E(CPU* cpu);
void LD_B_H(CPU* cpu);
void LD_B_L(CPU* cpu);
void LD_B_A(CPU* cpu);
void LD_C_B(CPU* cpu);
void LD_C_C(CPU* cpu);
void LD_C_D(CPU* cpu);
void LD_C_E(CPU* cpu);
void LD_C_H(CPU* cpu);
void LD_C_L(CPU* cpu);
void LD_C_A(CPU* cpu);
void LD_D_B(CPU* cpu);
void LD_D_C(CPU* cpu);
void LD_D_D(CPU* cpu);
void LD_D_E(CPU* cpu);
void LD_D_H(CPU* cpu);
void LD_D_L(CPU* cpu);
void LD_D_A(CPU* cpu);
void LD_E_B(CPU* cpu);
void LD_E_C(CPU* cpu);
void LD_E_D(CPU* cpu);
void LD_E_E(CPU* cpu);
void LD_E_H(CPU* cpu);
void LD_E_L(CPU* cpu);
void LD_E_A(CPU* cpu);
void LD_H_B(CPU* cpu);
void LD_H_C(CPU* cpu);
void LD_H_D(CPU* cpu);
void LD_H_E(CPU* cpu);
void LD_H_H(CPU* cpu);
void LD_H_L(CPU* cpu);
void LD_H_A(CPU* cpu);
void LD_L_B(CPU* cpu);
void LD_L_C(CPU* cpu);
void LD_L_D(CPU* cpu);
void LD_L_E(CPU* cpu);
void LD_L_H(CPU* cpu);
void LD_L_L(CPU* cpu);
void LD_L_A(CPU* cpu);
void LD_A_B(CPU* cpu);
void LD_A_C(CPU* cpu);
void LD_A_D(CPU* cpu);
void LD_A_E(CPU* cpu);
void LD_A_H(CPU* cpu);
void LD_A_L(CPU* cpu);
void LD_A_A(CPU* cpu);


void LDrHLm_b(CPU* cpu);
void LDrHLm_c(CPU* cpu);
void LDrHLm_d(CPU* cpu);
void LDrHLm_e(CPU* cpu);
void LDrHLm_h(CPU* cpu);
void LDrHLm_l(CPU* cpu);
void LDrHLm_a(CPU* cpu);

void LDHLmr_b(CPU* cpu);
void LDHLmr_c(CPU* cpu);
void LDHLmr_d(CPU* cpu);
void LDHLmr_e(CPU* cpu);
void LDHLmr_h(CPU* cpu);
void LDHLmr_l(CPU* cpu);
void LDHLmr_a(CPU* cpu);

void LDrn_b(CPU* cpu);
void LDrn_c(CPU* cpu);
void LDrn_d(CPU* cpu);
void LDrn_e(CPU* cpu);
void LDrn_h(CPU* cpu);
void LDrn_l(CPU* cpu);
void LDrn_a(CPU* cpu);

void LDHLmn(CPU* cpu);

void LDBCmA(CPU* cpu);
void LDDEmA(CPU* cpu);

void LDmmA(CPU* cpu);

void LDABCm(CPU* cpu);
void LDADEm(CPU* cpu);

void LDAmm(CPU* cpu);

void LD_BC_nn(CPU* cpu);
void LD_DE_nn(CPU* cpu);
void LD_HL_nn(CPU* cpu);
void LD_SP_nn(CPU* cpu);

void LDHLmm(CPU* cpu);
void LDmmHL(CPU* cpu);

void LDHLIA(CPU* cpu);
void LDAHLI(CPU* cpu);

void LDHLDA(CPU* cpu);
void LDAHLD(CPU* cpu);

void LDAIOn(CPU* cpu);
void LDIOnA(CPU* cpu);
void LDAIOC(CPU* cpu);
void LDIOCA(CPU* cpu);

void LDHLSPn(CPU* cpu);

void SWAPr_b(CPU* cpu);
void SWAPr_c(CPU* cpu);
void SWAPr_d(CPU* cpu);
void SWAPr_e(CPU* cpu);
void SWAPr_h(CPU* cpu);
void SWAPr_l(CPU* cpu);
void SWAPr_a(CPU* cpu);

/*--- Data processing ---*/
void ADDr_b(CPU* cpu);
void ADDr_c(CPU* cpu);
void ADDr_d(CPU* cpu);
void ADDr_e(CPU* cpu);
void ADDr_h(CPU* cpu);
void ADDr_l(CPU* cpu);
void ADDr_a(CPU* cpu);
void ADDHL(CPU* cpu);
void ADDn(CPU* cpu);
void ADDHLBC(CPU* cpu);
void ADDHLDE(CPU* cpu);
void ADDHLHL(CPU* cpu);
void ADDHLSP(CPU* cpu);
void ADDSPn(CPU* cpu);

void ADCr_b(CPU* cpu);
void ADCr_c(CPU* cpu);
void ADCr_d(CPU* cpu);
void ADCr_e(CPU* cpu);
void ADCr_h(CPU* cpu);
void ADCr_l(CPU* cpu);
void ADCr_a(CPU* cpu);
void ADCHL(CPU* cpu);
void ADCn(CPU* cpu);

void SUBr_b(CPU* cpu);
void SUBr_c(CPU* cpu);
void SUBr_d(CPU* cpu);
void SUBr_e(CPU* cpu);
void SUBr_h(CPU* cpu);
void SUBr_l(CPU* cpu);
void SUBr_a(CPU* cpu);
void SUBHL(CPU* cpu);
void SUBn(CPU* cpu);

void SBCr_b(CPU* cpu);
void SBCr_c(CPU* cpu);
void SBCr_d(CPU* cpu);
void SBCr_e(CPU* cpu);
void SBCr_h(CPU* cpu);
void SBCr_l(CPU* cpu);
void SBCr_a(CPU* cpu);
void SBCHL(CPU* cpu);
void SBCn(CPU* cpu);

void CPr_b(CPU* cpu);
void CPr_c(CPU* cpu);
void CPr_d(CPU* cpu);
void CPr_e(CPU* cpu);
void CPr_h(CPU* cpu);
void CPr_l(CPU* cpu);
void CPr_a(CPU* cpu);
void CPHL(CPU* cpu);
void CPn(CPU* cpu);

void DAA(CPU* cpu);

void ANDr_b(CPU* cpu);
void ANDr_c(CPU* cpu);
void ANDr_d(CPU* cpu);
void ANDr_e(CPU* cpu);
void ANDr_h(CPU* cpu);
void ANDr_l(CPU* cpu);
void ANDr_a(CPU* cpu);
void ANDHL(CPU* cpu);
void ANDn(CPU* cpu);

void ORr_b(CPU* cpu);
void ORr_c(CPU* cpu);
void ORr_d(CPU* cpu);
void ORr_e(CPU* cpu);
void ORr_h(CPU* cpu);
void ORr_l(CPU* cpu);
void ORr_a(CPU* cpu);
void ORHL(CPU* cpu);
void ORn(CPU* cpu);

void XORr_b(CPU* cpu);
void XORr_c(CPU* cpu);
void XORr_d(CPU* cpu);
void XORr_e(CPU* cpu);
void XORr_h(CPU* cpu);
void XORr_l(CPU* cpu);
void XORr_a(CPU* cpu);
void XORHL(CPU* cpu);
void XORn(CPU* cpu);

void INCr_b(CPU* cpu);
void INCr_c(CPU* cpu);
void INCr_d(CPU* cpu);
void INCr_e(CPU* cpu);
void INCr_h(CPU* cpu);
void INCr_l(CPU* cpu);
void INCr_a(CPU* cpu);
void INCHLm(CPU* cpu);

void DECr_b(CPU* cpu);
void DECr_c(CPU* cpu);
void DECr_d(CPU* cpu);
void DECr_e(CPU* cpu);
void DECr_h(CPU* cpu);
void DECr_l(CPU* cpu);
void DECr_a(CPU* cpu);
void DECHLm(CPU* cpu);

void INCBC(CPU* cpu);
void INCDE(CPU* cpu);
void INCHL(CPU* cpu);
void INCSP(CPU* cpu);

void DECBC(CPU* cpu);
void DECDE(CPU* cpu);
void DECHL(CPU* cpu);
void DECSP(CPU* cpu);

/*--- Bit manipulation ---*/
void BIT0b(CPU* cpu);
void BIT0c(CPU* cpu);
void BIT0d(CPU* cpu);
void BIT0e(CPU* cpu);
void BIT0h(CPU* cpu);
void BIT0l(CPU* cpu);
void BIT0a(CPU* cpu);
void BIT0m(CPU* cpu);

void RES0b(CPU* cpu);
void RES0c(CPU* cpu);
void RES0d(CPU* cpu);
void RES0e(CPU* cpu);
void RES0h(CPU* cpu);
void RES0l(CPU* cpu);
void RES0a(CPU* cpu);
void RES0m(CPU* cpu);

void SET0b(CPU* cpu);
void SET0c(CPU* cpu);
void SET0d(CPU* cpu);
void SET0e(CPU* cpu);
void SET0h(CPU* cpu);
void SET0l(CPU* cpu);
void SET0a(CPU* cpu);
void SET0m(CPU* cpu);

void BIT1b(CPU* cpu);
void BIT1c(CPU* cpu);
void BIT1d(CPU* cpu);
void BIT1e(CPU* cpu);
void BIT1h(CPU* cpu);
void BIT1l(CPU* cpu);
void BIT1a(CPU* cpu);
void BIT1m(CPU* cpu);

void RES1b(CPU* cpu);
void RES1c(CPU* cpu);
void RES1d(CPU* cpu);
void RES1e(CPU* cpu);
void RES1h(CPU* cpu);
void RES1l(CPU* cpu);
void RES1a(CPU* cpu);
void RES1m(CPU* cpu);

void SET1b(CPU* cpu);
void SET1c(CPU* cpu);
void SET1d(CPU* cpu);
void SET1e(CPU* cpu);
void SET1h(CPU* cpu);
void SET1l(CPU* cpu);
void SET1a(CPU* cpu);
void SET1m(CPU* cpu);

void BIT2b(CPU* cpu);
void BIT2c(CPU* cpu);
void BIT2d(CPU* cpu);
void BIT2e(CPU* cpu);
void BIT2h(CPU* cpu);
void BIT2l(CPU* cpu);
void BIT2a(CPU* cpu);
void BIT2m(CPU* cpu);

void RES2b(CPU* cpu);
void RES2c(CPU* cpu);
void RES2d(CPU* cpu);
void RES2e(CPU* cpu);
void RES2h(CPU* cpu);
void RES2l(CPU* cpu);
void RES2a(CPU* cpu);
void RES2m(CPU* cpu);

void SET2b(CPU* cpu);
void SET2c(CPU* cpu);
void SET2d(CPU* cpu);
void SET2e(CPU* cpu);
void SET2h(CPU* cpu);
void SET2l(CPU* cpu);
void SET2a(CPU* cpu);
void SET2m(CPU* cpu);

void BIT3b(CPU* cpu);
void BIT3c(CPU* cpu);
void BIT3d(CPU* cpu);
void BIT3e(CPU* cpu);
void BIT3h(CPU* cpu);
void BIT3l(CPU* cpu);
void BIT3a(CPU* cpu);
void BIT3m(CPU* cpu);

void RES3b(CPU* cpu);
void RES3c(CPU* cpu);
void RES3d(CPU* cpu);
void RES3e(CPU* cpu);
void RES3h(CPU* cpu);
void RES3l(CPU* cpu);
void RES3a(CPU* cpu);
void RES3m(CPU* cpu);

void SET3b(CPU* cpu);
void SET3c(CPU* cpu);
void SET3d(CPU* cpu);
void SET3e(CPU* cpu);
void SET3h(CPU* cpu);
void SET3l(CPU* cpu);
void SET3a(CPU* cpu);
void SET3m(CPU* cpu);

void BIT4b(CPU* cpu);
void BIT4c(CPU* cpu);
void BIT4d(CPU* cpu);
void BIT4e(CPU* cpu);
void BIT4h(CPU* cpu);
void BIT4l(CPU* cpu);
void BIT4a(CPU* cpu);
void BIT4m(CPU* cpu);

void RES4b(CPU* cpu);
void RES4c(CPU* cpu);
void RES4d(CPU* cpu);
void RES4e(CPU* cpu);
void RES4h(CPU* cpu);
void RES4l(CPU* cpu);
void RES4a(CPU* cpu);
void RES4m(CPU* cpu);

void SET4b(CPU* cpu);
void SET4c(CPU* cpu);
void SET4d(CPU* cpu);
void SET4e(CPU* cpu);
void SET4h(CPU* cpu);
void SET4l(CPU* cpu);
void SET4a(CPU* cpu);
void SET4m(CPU* cpu);

void BIT5b(CPU* cpu);
void BIT5c(CPU* cpu);
void BIT5d(CPU* cpu);
void BIT5e(CPU* cpu);
void BIT5h(CPU* cpu);
void BIT5l(CPU* cpu);
void BIT5a(CPU* cpu);
void BIT5m(CPU* cpu);

void RES5b(CPU* cpu);
void RES5c(CPU* cpu);
void RES5d(CPU* cpu);
void RES5e(CPU* cpu);
void RES5h(CPU* cpu);
void RES5l(CPU* cpu);
void RES5a(CPU* cpu);
void RES5m(CPU* cpu);

void SET5b(CPU* cpu);
void SET5c(CPU* cpu);
void SET5d(CPU* cpu);
void SET5e(CPU* cpu);
void SET5h(CPU* cpu);
void SET5l(CPU* cpu);
void SET5a(CPU* cpu);
void SET5m(CPU* cpu);

void BIT6b(CPU* cpu);
void BIT6c(CPU* cpu);
void BIT6d(CPU* cpu);
void BIT6e(CPU* cpu);
void BIT6h(CPU* cpu);
void BIT6l(CPU* cpu);
void BIT6a(CPU* cpu);
void BIT6m(CPU* cpu);

void RES6b(CPU* cpu);
void RES6c(CPU* cpu);
void RES6d(CPU* cpu);
void RES6e(CPU* cpu);
void RES6h(CPU* cpu);
void RES6l(CPU* cpu);
void RES6a(CPU* cpu);
void RES6m(CPU* cpu);

void SET6b(CPU* cpu);
void SET6c(CPU* cpu);
void SET6d(CPU* cpu);
void SET6e(CPU* cpu);
void SET6h(CPU* cpu);
void SET6l(CPU* cpu);
void SET6a(CPU* cpu);
void SET6m(CPU* cpu);

void BIT7b(CPU* cpu);
void BIT7c(CPU* cpu);
void BIT7d(CPU* cpu);
void BIT7e(CPU* cpu);
void BIT7h(CPU* cpu);
void BIT7l(CPU* cpu);
void BIT7a(CPU* cpu);
void BIT7m(CPU* cpu);

void RES7b(CPU* cpu);
void RES7c(CPU* cpu);
void RES7d(CPU* cpu);
void RES7e(CPU* cpu);
void RES7h(CPU* cpu);
void RES7l(CPU* cpu);
void RES7a(CPU* cpu);
void RES7m(CPU* cpu);

void SET7b(CPU* cpu);
void SET7c(CPU* cpu);
void SET7d(CPU* cpu);
void SET7e(CPU* cpu);
void SET7h(CPU* cpu);
void SET7l(CPU* cpu);
void SET7a(CPU* cpu);
void SET7m(CPU* cpu);

void RLA(CPU* cpu);
void RLCA(CPU* cpu);
void RRA(CPU* cpu);
void RRCA(CPU* cpu);

void RLr_b(CPU* cpu);
void RLr_c(CPU* cpu);
void RLr_d(CPU* cpu);
void RLr_e(CPU* cpu);
void RLr_h(CPU* cpu);
void RLr_l(CPU* cpu);
void RLr_a(CPU* cpu);
void RLHL(CPU* cpu);

void RLCr_b(CPU* cpu);
void RLCr_c(CPU* cpu);
void RLCr_d(CPU* cpu);
void RLCr_e(CPU* cpu);
void RLCr_h(CPU* cpu);
void RLCr_l(CPU* cpu);
void RLCr_a(CPU* cpu);
void RLCHL(CPU* cpu);

void RRr_b(CPU* cpu);
void RRr_c(CPU* cpu);
void RRr_d(CPU* cpu);
void RRr_e(CPU* cpu);
void RRr_h(CPU* cpu);
void RRr_l(CPU* cpu);
void RRr_a(CPU* cpu);
void RRHL(CPU* cpu);

void RRCr_b(CPU* cpu);
void RRCr_c(CPU* cpu);
void RRCr_d(CPU* cpu);
void RRCr_e(CPU* cpu);
void RRCr_h(CPU* cpu);
void RRCr_l(CPU* cpu);
void RRCr_a(CPU* cpu);
void RRCHL(CPU* cpu);

void SLAr_b(CPU* cpu);
void SLAr_c(CPU* cpu);
void SLAr_d(CPU* cpu);
void SLAr_e(CPU* cpu);
void SLAr_h(CPU* cpu);
void SLAr_l(CPU* cpu);
void SLAr_a(CPU* cpu);

void SLLr_b(CPU* cpu);
void SLLr_c(CPU* cpu);
void SLLr_d(CPU* cpu);
void SLLr_e(CPU* cpu);
void SLLr_h(CPU* cpu);
void SLLr_l(CPU* cpu);
void SLLr_a(CPU* cpu);

void SRAr_b(CPU* cpu);
void SRAr_c(CPU* cpu);
void SRAr_d(CPU* cpu);
void SRAr_e(CPU* cpu);
void SRAr_h(CPU* cpu);
void SRAr_l(CPU* cpu);
void SRAr_a(CPU* cpu);

void SRLr_b(CPU* cpu);
void SRLr_c(CPU* cpu);
void SRLr_d(CPU* cpu);
void SRLr_e(CPU* cpu);
void SRLr_h(CPU* cpu);
void SRLr_l(CPU* cpu);
void SRLr_a(CPU* cpu);

void CPL(CPU* cpu);
void NEG(CPU* cpu);

void CCF(CPU* cpu);
void SCF(CPU* cpu);

/*--- Stack ---*/
void PUSHBC(CPU* cpu);
void PUSHDE(CPU* cpu);
void PUSHHL(CPU* cpu);
void PUSHAF(CPU* cpu);

void POPBC(CPU* cpu);
void POPDE(CPU* cpu);
void POPHL(CPU* cpu);
void POPAF(CPU* cpu);

/*--- Jump ---*/
void JPnn(CPU* cpu);
void JPHL(CPU* cpu);
void JPNZnn(CPU* cpu);
void JPZnn(CPU* cpu);
void JPNCnn(CPU* cpu);
void JPCnn(CPU* cpu);

void JRn(CPU* cpu);
void JRNZn(CPU* cpu);
void JRZn(CPU* cpu);
void JRNCn(CPU* cpu);
void JRCn(CPU* cpu);

void DJNZn(CPU* cpu);

void CALLnn(CPU* cpu);
void CALLNZnn(CPU* cpu);
void CALLZnn(CPU* cpu);
void CALLNCnn(CPU* cpu);
void CALLCnn(CPU* cpu);

void RET(CPU* cpu);
void RETI(CPU* cpu);
void RETNZ(CPU* cpu);
void RETZ(CPU* cpu);
void RETNC(CPU* cpu);
void RETC(CPU* cpu);

void RST00(CPU* cpu);
void RST08(CPU* cpu);
void RST10(CPU* cpu);
void RST18(CPU* cpu);
void RST20(CPU* cpu);
void RST28(CPU* cpu);
void RST30(CPU* cpu);
void RST38(CPU* cpu);
void RST40(CPU* cpu);
void RST48(CPU* cpu);
void RST50(CPU* cpu);
void RST58(CPU* cpu);
void RST60(CPU* cpu);

void NOP(CPU* cpu);
void HALT(CPU* cpu);

void DI(CPU* cpu);
void EI(CPU* cpu);

/*--- Helper functions ---*/
void rsv(CPU* cpu);

void rrs(CPU* cpu);

void MAPcb(CPU* cpu);

void XX(CPU* cpu);

static const opFunction opFunctions[256] = {
	// 00
	&NOP,		&LD_BC_nn,	&LDBCmA,	&INCBC,		&INCr_b,	&DECr_b,	&LDrn_b,	&RLCA,
	&XX/*&LDmmSP*/,	&ADDHLBC,	&LDABCm,	&DECBC,		&INCr_c,	&DECr_c,	&LDrn_c,	&RRCA,
	// 10
	&DJNZn,		&LD_DE_nn,	&LDDEmA,	&INCDE,		&INCr_d,	&DECr_d,	&LDrn_d,	&RLA,
	&JRn,		&ADDHLDE,	&LDADEm,	&DECDE,		&INCr_e,	&DECr_e,	&LDrn_e,	&RRA,
	// 20
	&JRNZn,		&LD_HL_nn,	&LDHLIA,	&INCHL,		&INCr_h,	&DECr_h,	&LDrn_h,	&DAA,
	&JRZn,		&ADDHLHL,	&LDAHLI,	&DECHL,		&INCr_l,	&DECr_l,	&LDrn_l,	&CPL,
	// 30
	&JRNCn,		&LD_SP_nn,	&LDHLDA,	&INCSP,		&INCHLm,	&DECHLm,	&LDHLmn,	&SCF,
	&JRCn,		&ADDHLSP,	&LDAHLD,	&DECSP,		&INCr_a,	&DECr_a,	&LDrn_a,	&CCF,
	// 40
	&LD_B_B,	&LD_B_C,	&LD_B_D,	&LD_B_E,	&LD_B_H,	&LD_B_L,	&LDrHLm_b,	&LD_B_A,
	&LD_C_B,	&LD_C_C,	&LD_C_D,	&LD_C_E,	&LD_C_H,	&LD_C_L,	&LDrHLm_c,	&LD_C_A,
	// 50
	&LD_D_B,	&LD_D_C,	&LD_D_D,	&LD_D_E,	&LD_D_H,	&LD_D_L,	&LDrHLm_d,	&LD_D_A,
	&LD_E_B,	&LD_E_C,	&LD_E_D,	&LD_E_E,	&LD_E_H,	&LD_E_L,	&LDrHLm_e,	&LD_E_A,
	// 60
	&LD_H_B,	&LD_H_C,	&LD_H_D,	&LD_H_E,	&LD_H_H,	&LD_H_L,	&LDrHLm_h,	&LD_H_A,
	&LD_L_B,	&LD_L_C,	&LD_L_C,	&LD_L_E,	&LD_L_H,	&LD_L_L,	&LDrHLm_l,	&LD_L_A,
	// 70
	&LDHLmr_b,	&LDHLmr_c,	&LDHLmr_d,	&LDHLmr_e,	&LDHLmr_h,	&LDHLmr_l,	&HALT,		&LDHLmr_a,
	&LD_A_B,	&LD_A_C,	&LD_A_D,	&LD_A_E,	&LD_A_H,	&LD_A_L,	&LDrHLm_a,	&LD_A_A,
	// 80
	&ADDr_b,	&ADDr_c,	&ADDr_d,	&ADDr_e,	&ADDr_h,	&ADDr_l,	&ADDHL,		&ADDr_a,
	&ADCr_b,	&ADCr_c,	&ADCr_d,	&ADCr_e,	&ADCr_h,	&ADCr_l,	&ADCHL,		&ADCr_a,
	// 90
	&SUBr_b,	&SUBr_c,	&SUBr_d,	&SUBr_e,	&SUBr_h,	&SUBr_l,	&SUBHL,		&SUBr_a,
	&SBCr_b,	&SBCr_c,	&SBCr_d,	&SBCr_e,	&SBCr_h,	&SBCr_l,	&SBCHL,		&SBCr_a,
	// A0
	&ANDr_b,	&ANDr_c,	&ANDr_d,	&ANDr_e,	&ANDr_h,	&ANDr_l,	&ANDHL,		&ANDr_a,
	&XORr_b,	&XORr_c,	&XORr_d,	&XORr_e,	&XORr_h,	&XORr_l,	&XORHL,		&XORr_a,
	// B0
	&ORr_b,		&ORr_c,		&ORr_d,		&ORr_e,		&ORr_h,		&ORr_l,		&ORHL,		&ORr_a,
	&CPr_b,		&CPr_c,		&CPr_d,		&CPr_e,		&CPr_h,		&CPr_l,		&CPHL,		&CPr_a,
	// C0
	&RETNZ,		&POPBC,		&JPNZnn,	&JPnn,		&CALLNZnn,	&PUSHBC,	&ADDn,		&RST00,
	&RETZ,		&RET,		&JPZnn,		&MAPcb,		&CALLZnn,	&CALLnn,	&ADCn,		&RST08,
	// D0
	&RETNC,		&POPDE,		&JPNCnn,	&XX,		&CALLNCnn,	&PUSHDE,	&SUBn,		&RST10,
	&RETC,		&RETI,		&JPCnn,		&XX,		&CALLCnn,	&XX,		&SBCn,		&RST18,
	// E0
	&LDIOnA,	&POPHL,		&LDIOCA,	&XX,		&XX,		&PUSHHL,	&ANDn,		&RST20,
	&ADDSPn,	&JPHL,		&LDmmA,		&XX,		&XX,		&XX,		&XORn,		&RST28,
	// F0
	&LDAIOn,	&POPAF,		&LDAIOC,	&DI,		&XX,		&PUSHAF,	&ORn,		&RST30,
	&LDHLSPn,	&XX,		&LDAmm,		&EI,		&XX,		&XX,		&CPn,		&RST38
};

static const opFunction CBFunctions[256] = {
	// CB00
	&RLCr_b,	&RLCr_c,	&RLCr_d,	&RLCr_e,
	&RLCr_h,	&RLCr_l,	&RLCHL,		&RLCr_a,
	&RRCr_b,	&RRCr_c,	&RRCr_d,	&RRCr_e,
	&RRCr_h,	&RRCr_l,	&RRCHL,		&RRCr_a,
	// CB10
	&RLr_b,	&RLr_c,		&RLr_d,		&RLr_e,
	&RLr_h,	&RLr_l,		&RLHL,		&RLr_a,
	&RRr_b,	&RRr_c,		&RRr_d,		&RRr_e,
	&RRr_h,	&RRr_l,		&RRHL,		&RRr_a,
	// CB20
	&SLAr_b,	&SLAr_c,	&SLAr_d,	&SLAr_e,
	&SLAr_h,	&SLAr_l,	&XX,		&SLAr_a,
	&SRAr_b,	&SRAr_c,	&SRAr_d,	&SRAr_e,
	&SRAr_h,	&SRAr_l,	&XX,		&SRAr_a,
	// CB30
	&SWAPr_b,	&SWAPr_c,	&SWAPr_d,	&SWAPr_e,
	&SWAPr_h,	&SWAPr_l,	&XX,		&SWAPr_a,
	&SRLr_b,	&SRLr_c,	&SRLr_d,	&SRLr_e,
	&SRLr_h,	&SRLr_l,	&XX,		&SRLr_a,
	// CB40
	&BIT0b,	&BIT0c,		&BIT0d,		&BIT0e,
	&BIT0h,	&BIT0l,		&BIT0m,		&BIT0a,
	&BIT1b,	&BIT1c,		&BIT1d,		&BIT1e,
	&BIT1h,	&BIT1l,		&BIT1m,		&BIT1a,
	// CB50
	&BIT2b,	&BIT2c,		&BIT2d,		&BIT2e,
	&BIT2h,	&BIT2l,		&BIT2m,		&BIT2a,
	&BIT3b,	&BIT3c,		&BIT3d,		&BIT3e,
	&BIT3h,	&BIT3l,		&BIT3m,		&BIT3a,
	// CB60
	&BIT4b,	&BIT4c,		&BIT4d,		&BIT4e,
	&BIT4h,	&BIT4l,		&BIT4m,		&BIT4a,
	&BIT5b,	&BIT5c,		&BIT5d,		&BIT5e,
	&BIT5h,	&BIT5l,		&BIT5m,		&BIT5a,
	// CB70
	&BIT6b,	&BIT6c,		&BIT6d,		&BIT6e,
	&BIT6h,	&BIT6l,		&BIT6m,		&BIT6a,
	&BIT7b,	&BIT7c,		&BIT7d,		&BIT7e,
	&BIT7h,	&BIT7l,		&BIT7m,		&BIT7a,
	// CB80
	&RES0b,	&RES0c,		&RES0d,		&RES0e,
	&RES0h,	&RES0l,		&RES0m,		&RES0a,
	&RES1b,	&RES1c,		&RES1d,		&RES1e,
	&RES1h,	&RES1l,		&RES1m,		&RES1a,
	// CB90
	&RES2b,	&RES2c,		&RES2d,		&RES2e,
	&RES2h,	&RES2l,		&RES2m,		&RES2a,
	&RES3b,	&RES3c,		&RES3d,		&RES3e,
	&RES3h,	&RES3l,		&RES3m,		&RES3a,
	// CBA0
	&RES4b,	&RES4c,		&RES4d,		&RES4e,
	&RES4h,	&RES4l,		&RES4m,		&RES4a,
	&RES5b,	&RES5c,		&RES5d,		&RES5e,
	&RES5h,	&RES5l,		&RES5m,		&RES5a,
	// CBB0
	&RES6b,	&RES6c,		&RES6d,		&RES6e,
	&RES6h,	&RES6l,		&RES6m,		&RES6a,
	&RES7b,	&RES7c,		&RES7d,		&RES7e,
	&RES7h,	&RES7l,		&RES7m,		&RES7a,
	// CBC0
	&SET0b,	&SET0c,		&SET0d,		&SET0e,
	&SET0h,	&SET0l,		&SET0m,		&SET0a,
	&SET1b,	&SET1c,		&SET1d,		&SET1e,
	&SET1h,	&SET1l,		&SET1m,		&SET1a,
	// CBD0
	&SET2b,	&SET2c,		&SET2d,		&SET2e,
	&SET2h,	&SET2l,		&SET2m,		&SET2a,
	&SET3b,	&SET3c,		&SET3d,		&SET3e,
	&SET3h,	&SET3l,		&SET3m,		&SET3a,
	// CBE0
	&SET4b,	&SET4c,		&SET4d,		&SET4e,
	&SET4h,	&SET4l,		&SET4m,		&SET4a,
	&SET5b,	&SET5c,		&SET5d,		&SET5e,
	&SET5h,	&SET5l,		&SET5m,		&SET5a,
	// CBF0
	&SET6b,	&SET6c,		&SET6d,		&SET6e,
	&SET6h,	&SET6l,		&SET6m,		&SET6a,
	&SET7b,	&SET7c,		&SET7d,		&SET7e,
	&SET7h,	&SET7l,		&SET7m,		&SET7a,
};

