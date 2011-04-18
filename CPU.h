//
//  CPU.h
//  Gambit
//
//  Created by Matt Rubin on 4/17/11.
//  Copyright 2011 Matt Rubin. All rights reserved.
//

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
		word pc, sp;                    // 16-bit registers
		byte m, t;                      // Clock for last instr
	} registers;
	
	MMU* mmu;
	
} CPU;
