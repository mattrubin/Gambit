//
//  MMU.h
//  Gambit
//
//  Created by Matt Rubin on 4/17/11.
//  Copyright 2011 Matt Rubin. All rights reserved.
//

#pragma once
#include "DataTypes.h"
#include <stdbool.h>

typedef struct {
	
	//byte bios[0xFFFF];
	byte rom[0x4000];
	byte rom1[0x4000];
	byte vram[0x2000];
	byte eram[0x2000];
	byte wram[0x2000];
	byte zram[0xFFFF];
	
	bool inBIOS;

} MMU;

void initMMU(MMU* mmu);

byte readByte(MMU* mmu, addr address); // Read 8-bit byte from a given address
word readWord(MMU* mmu, addr address); // Read 16-bit word from a given address

void writeByte(MMU* mmu, addr address, byte data); // Write 8-bit byte to a given address
void writeWord(MMU* mmu, addr address, word data); // Write 16-bit word to a given address
