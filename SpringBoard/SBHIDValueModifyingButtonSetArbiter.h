//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBHIDButtonStateDelegate-Protocol.h>

@class BSTimer, NSDictionary, SBHIDButtonStateArbiter;
@protocol SBHIDValueModifyingButtonSetArbiterDelegate;

@interface SBHIDValueModifyingButtonSetArbiter : NSObject <SBHIDButtonStateDelegate>
{
    NSDictionary *_usageToButtonDictionary;
    NSDictionary *_buttonToUsageDictionary;
    BSTimer *_timer;
    SBHIDButtonStateArbiter *_currentDownButton;
    id <SBHIDValueModifyingButtonSetArbiterDelegate> _delegate;
    double _initialRepeatDelay;
    double _subsequentRepeatDelay;
}


// Remaining properties
@property(nonatomic) __weak id <SBHIDValueModifyingButtonSetArbiterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double initialRepeatDelay; // @synthesize initialRepeatDelay=_initialRepeatDelay;
@property(nonatomic) double subsequentRepeatDelay; // @synthesize subsequentRepeatDelay=_subsequentRepeatDelay;
@end
