//
//  Ops.h
//  Gambit
//
//  Created by Matt Rubin on 4/21/11.
//  Copyright 2011 Matt Rubin. All rights reserved.
//

#pragma once
#include "CPU.h"


typedef void (*opFunction)(CPU* cpu);

void NOP(CPU* cpu);

static const opFunction opFunctions[1] = {&NOP};
