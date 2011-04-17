//
//  CPU.h
//  Gambit
//
//  Created by Matt Rubin on 4/17/11.
//  Copyright 2011 Matt Rubin. All rights reserved.
//

typedef unsigned char byte;
typedef unsigned short word;

typedef struct {
	// Time clock: The Z80 holds two types of clock (m and t)
	struct {
		int m = 0;
		int t = 0;
	} clock;

	// Register set
	struct {
		byte a, b, c, d, e, h, l, f;    // 8-bit registers
		word pc, sp;                    // 16-bit registers
		byte m, t;                      // Clock for last instr
	} registers;
} CPU;