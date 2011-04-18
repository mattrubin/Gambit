//
//  Emulator.m
//  Gambit
//
//  Created by Matt Rubin on 4/17/11.
//  Copyright 2011 Matt Rubin. All rights reserved.
//

#import "Emulator.h"


@implementation Emulator

- (id)init
{
    self = [super init];
    if (self) {
        cpu.mmu = &mmu;
    }
    
    return self;
}

- (void)dealloc
{
    [super dealloc];
}

@end
