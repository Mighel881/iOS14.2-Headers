//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardServices/SBSAbstractSystemService.h>

@class BSMutableIntegerMap;

@interface SBSHardwareButtonService : SBSAbstractSystemService
{
    BSMutableIntegerMap *_consumersPerKind;
    BSMutableIntegerMap *_buttonConfigurationsPerKind;
    BSMutableIntegerMap *_requestHIDAssertionsPerKind;
}


// Remaining properties
@property(retain, nonatomic) BSMutableIntegerMap *buttonConfigurationsPerKind; // @synthesize buttonConfigurationsPerKind=_buttonConfigurationsPerKind;
@property(retain, nonatomic) BSMutableIntegerMap *consumersPerKind; // @synthesize consumersPerKind=_consumersPerKind;
@property(retain, nonatomic) BSMutableIntegerMap *requestHIDAssertionsPerKind; // @synthesize requestHIDAssertionsPerKind=_requestHIDAssertionsPerKind;
@end

