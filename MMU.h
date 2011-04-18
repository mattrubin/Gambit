//
//  MMU.h
//  Gambit
//
//  Created by Matt Rubin on 4/17/11.
//  Copyright 2011 Matt Rubin. All rights reserved.
//

#include "DataTypes.h"

typedef struct {
	
} MMU;

void readByte(MMU* mmu, addr address); // Read 8-bit byte from a given address
void readWord(MMU* mmu, addr address); // Read 16-bit word from a given address

void writeByte(MMU* mmu, addr address, byte data); // Write 8-bit byte to a given address
void writeWord(MMU* mmu, addr address, word data); // Write 16-bit word to a given address
