//
//  GambitAppDelegate.h
//  Gambit
//
//  Created by Matt Rubin on 4/17/11.
//  Copyright 2011 Matt Rubin. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface GambitAppDelegate : NSObject <NSApplicationDelegate> {
@private
	NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
