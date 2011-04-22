//
//  CPU.h
//  Gambit
//
//  Created by Matt Rubin on 4/17/11.
//  Copyright 2011 Matt Rubin. All rights reserved.
//

#pragma once
#include "DataTypes.h"
#include "MMU.h"

typedef struct {
	// Time clock: The Z80 holds two types of clock (m and t)
	struct {
		int m;
		int t;
	} clock;

	// Register set
	struct {
		byte a, b, c, d, e, h, l, f;    // 8-bit registers
		word pc, sp;                    // Program counter and stack pointer
		byte m, t;                      // Clock for last instruction
	} registers;
	
	// Saved register set
	struct {
		byte a, b, c, d, e, h, l, f;    // 8-bit registers
	} rsv;
	
	MMU* mmu;
	
} CPU;

void resetCPU(CPU* cpu);
void runCPU(CPU* cpu);
