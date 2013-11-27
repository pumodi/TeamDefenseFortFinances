//
//  calculator.h
//  Team Defense Fort Finances
//
//  Created by Jeffrey Brice on 11/26/13.
//  Copyright (c) 2013 Jeffrey Brice. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface calculator : NSObject <NSApplicationDelegate> {
    IBOutlet NSTextField *calcKeysInput;
    IBOutlet NSTextField *calcBudsInput;
    IBOutlet NSTextField *calcScrapInput;
    IBOutlet NSTextField *calcRecInput;
    IBOutlet NSTextField *calcRefInput;
    IBOutlet NSTextField *calcMaxInput;
    IBOutlet NSTextField *calcTCInput;
    IBOutlet NSTextField *calcUSDInput;
    IBOutlet NSButton *calcAggregateToggle;
    
}

-(IBAction)calculatorUpdate:(id)sender;

@property (nonatomic) float *priceScrap;
@property (nonatomic) float *priceRec;
@property (nonatomic) float *priceRef;
@property (nonatomic) int *priceKey;
@property (nonatomic) int *priceBud;
@property (nonatomic) float *priceMax;
@property (nonatomic) float *priceTC;
@property (nonatomic) float *priceUSD;
@property (nonatomic, retain) NSString *calcBudsValText;

@end
