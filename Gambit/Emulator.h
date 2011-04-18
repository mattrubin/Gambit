//
//  Emulator.h
//  Gambit
//
//  Created by Matt Rubin on 4/17/11.
//  Copyright 2011 Matt Rubin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CPU.h"

@interface Emulator : NSObject {
@private
	CPU cpu;
	MMU mmu;
}

@end
