//
//  CPU.c
//  Gambit
//
//  Created by Matt Rubin on 4/17/11.
//  Copyright 2011 Matt Rubin. All rights reserved.
//

#include "CPU.h"
#include "Ops.h"


/**
 * Reset all CPU registers and clock values to zero.
 * Zero the program counter to restart execution at the first instruction.
 */
void resetCPU(CPU* cpu) {
	cpu->registers.a = 0;
	cpu->registers.b = 0;
	cpu->registers.c = 0;
	cpu->registers.d = 0;
	cpu->registers.e = 0;
	cpu->registers.h = 0;
	cpu->registers.l = 0;
	cpu->registers.f = 0;
	
	cpu->registers.sp = 0;
	cpu->registers.pc = 0;
	
	cpu->clock.m = 0;
	cpu->clock.t = 0;
}


/**
 * Run the dispatch loop on the CPU.
 */
void runCPU(CPU* cpu) {
	while(true) {
		// Fetch and execute instruction
		byte opcode = readByte(cpu->mmu, cpu->registers.pc++);
		opFunctions[opcode](cpu);
		
		// Add execution time to the CPU clock
		cpu->clock.m += cpu->registers.m;
		cpu->clock.t += cpu->registers.t;
	}
}
