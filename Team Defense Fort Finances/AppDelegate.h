//
//  AppDelegate.h
//  Team Defense Fort Finances
//
//  Created by Jeffrey Brice on 11/1/13.
//  Copyright (c) 2013 Jeffrey Brice. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate> {
    IBOutlet NSMenu *statusMenu;
    NSStatusItem *statusItem;
    NSImage * statusImage;
    NSImage * statusHighlightImage;
    
}


// optional

- (IBAction)pcBuds:(id)sender;
- (IBAction)chckBP:(id)sender;
- (IBAction)pcKeys:(id)sender;
- (IBAction)pcRef:(id)sender;
- (IBAction)pcMax:(id)sender;
- (IBAction)tradeOffer:(id)sender;
- (IBAction)priceCheck:(id)sender;
- (IBAction)tfCalc:(id)sender;
- (IBAction)opTradeOutpost:(id)sender;

@property (assign) IBOutlet NSWindow *window;

@end
