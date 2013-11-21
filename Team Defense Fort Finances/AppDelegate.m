//
//  AppDelegate.m
//  Team Defense Fort Finances
//
//  Created by Jeffrey Brice on 11/1/13.
//  Copyright (c) 2013 Jeffrey Brice. All rights reserved.
//

#import "AppDelegate.h"

@implementation AppDelegate

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification
{

}

- (void)awakeFromNib {
    
    statusItem = [[NSStatusBar systemStatusBar] statusItemWithLength:NSVariableStatusItemLength];
    
    NSBundle *bundle = [NSBundle mainBundle];
    
    statusImage = [[NSImage alloc] initWithContentsOfFile:[bundle pathForResource:@"tffinanceicon" ofType:@"png"]];
    statusHighlightImage = [[NSImage alloc] initWithContentsOfFile:[bundle pathForResource:@"tffinanceicon" ofType:@"png"]];
    
    [statusItem setImage:statusImage];
    [statusItem setAlternateImage:statusHighlightImage];
    [statusItem setMenu:statusMenu];
    [statusItem setToolTip:@"SAY SOMETHING"];
    [statusItem setHighlightMode:YES];
                            
}

                            
/* - (void)dealloc {
    [statusImage];
    [statusHighlightImage];
    [super dealloc];
} */

- (IBAction)pcBuds:(id)sender {
    
    NSLog(@"Is pcBuds");
}

- (IBAction)chckBP:(id)sender{
    [NSURLRequest requestWithURL:[NSURL URLWithString:@"http://backpack.tf/id/76561198042595842"]];
}

- (IBAction)keyButton:(id)sender {
}

- (IBAction)pcKeys:(id)sender {
    
}

- (IBAction)pcRef:(id)sender {
    
}

- (IBAction)pcMax:(id)sender {
    
}

- (IBAction)tradeOffer:(id)sender {
    
}

- (IBAction)priceCheck:(id)sender {
    
}

- (IBAction)tfCalc:(id)sender {
    
}

- (IBAction)opTradeOutpost:(id)sender {
    
}

@end
