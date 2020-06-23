//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/BSSimpleAssertion.h>

@class BKSHIDEventDeferringToken;

@interface SBKeyboardFocusRedirection : BSSimpleAssertion
{
    int _fromProcessIdentifier;
    int _toProcessIdentifier;
    BKSHIDEventDeferringToken *_fromToken;
    BKSHIDEventDeferringToken *_toToken;
}


// Remaining properties
@property(nonatomic) int fromProcessIdentifier; // @synthesize fromProcessIdentifier=_fromProcessIdentifier;
@property(copy, nonatomic) BKSHIDEventDeferringToken *fromToken; // @synthesize fromToken=_fromToken;
@property(nonatomic) int toProcessIdentifier; // @synthesize toProcessIdentifier=_toProcessIdentifier;
@property(copy, nonatomic) BKSHIDEventDeferringToken *toToken; // @synthesize toToken=_toToken;
@end

