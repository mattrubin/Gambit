//
//  MMU.h
//  Gambit
//
//  Created by Matt Rubin on 4/17/11.
//  Copyright 2011 Matt Rubin. All rights reserved.
//

#include "DataTypes.h"

typedef struct {
	
	void readByte(word address); // Read 8-bit byte from a given address
	void readWord(word address); // Read 16-bit word from a given address
	
	void writeByte: function(word address, byte data); // Write 8-bit byte to a given address
	void writeWord: function(word address, word data); // Write 16-bit word to a given address
	
} MMU;
