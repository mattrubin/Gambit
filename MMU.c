//
//  MMU.c
//  Gambit
//
//  Created by Matt Rubin on 4/17/11.
//  Copyright 2011 Matt Rubin. All rights reserved.
//

#include "MMU.h"


void initMMU(MMU* mmu){
	mmu->inBIOS = true;
	// write bios to mmu->bios
}

byte readByte(MMU* mmu, addr address){
	switch(address & 0xF000){
/*		// BIOS (256b)/ROM0
		case 0x0000:
			if(mmu->inBIOS)
			{
				if(address < 0x0100)
					return mmu->bios[address];
				else if(Z80._r.pc == 0x0100)
					mmu->inBIOS = false;
			}
			
			return mmu->rom[address];
			
		// ROM0
		case 0x1000:
		case 0x2000:
		case 0x3000:
			return mmu->rom[address];
			
		// ROM1 (unbanked) (16k)
		case 0x4000:
		case 0x5000:
		case 0x6000:
		case 0x7000:
			return mmu->rom[address];
			
		// Graphics: VRAM (8k)
		case 0x8000:
		case 0x9000:
			return mmu->vram[address & 0x1FFF];
			
		// External RAM (8k)
		case 0xA000:
		case 0xB000:
			return mmu->eram[address & 0x1FFF];
			
		// Working RAM (8k)
		case 0xC000:
		case 0xD000:
			return mmu->wram[address & 0x1FFF];
			
		// Working RAM shadow
		case 0xE000:
			return mmu->wram[address & 0x1FFF];
			
		// Working RAM shadow, I/O, Zero-page RAM
		case 0xF000:
			switch(address & 0x0F00){
				// Working RAM shadow
				case 0x000: case 0x100: case 0x200: case 0x300:
				case 0x400: case 0x500: case 0x600: case 0x700:
				case 0x800: case 0x900: case 0xA00: case 0xB00:
				case 0xC00: case 0xD00:
					return mmu->wram[address & 0x1FFF];
					
				// Graphics: object attribute memory
				// OAM is 160 bytes, remaining bytes read as 0
				case 0xE00:
					if(address < 0xFEA0)
						return GPU->oam[address & 0xFF];
					else
						return 0;
				
				// Zero-page
			case 0xF00:
				if(address >= 0xFF80)
				{
					return mmu->zram[address & 0x7F];
				}
				else
				{
					// I/O control handling
					// Currently unhandled
					return 0;
				}
		}*/
		default:
			return 0;
	}
}

word readWord(MMU* mmu, addr address) {
	return (word)readByte(mmu, address) & ((word)readByte(mmu, address+1)<<8);
}

 // Write 8-bit byte to a given address
void writeByte(MMU* mmu, addr address, byte data){
#warning UNIMPLEMENTED
}

// Write 16-bit word to a given address
void writeWord(MMU* mmu, addr address, word data){
#warning UNIMPLENETED
}
