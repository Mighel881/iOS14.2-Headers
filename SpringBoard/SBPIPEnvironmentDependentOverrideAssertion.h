//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBPIPBehaviorOverrideAssertion.h>

#import <SpringBoard/SBLayoutStateTransitionObserver-Protocol.h>

@class NSSet, NSString;

@interface SBPIPEnvironmentDependentOverrideAssertion : SBPIPBehaviorOverrideAssertion <SBLayoutStateTransitionObserver>
{
    _Bool _invalidatesEarly;
    NSSet *_allowedEnvironmentModes;
}


// Remaining properties
@property(copy, nonatomic) NSSet *allowedEnvironmentModes; // @synthesize allowedEnvironmentModes=_allowedEnvironmentModes;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool invalidatesEarly; // @synthesize invalidatesEarly=_invalidatesEarly;
@property(readonly) Class superclass;
@end
