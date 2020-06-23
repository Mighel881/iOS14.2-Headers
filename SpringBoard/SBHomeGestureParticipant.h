//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>

@class NSIndexSet, NSString, SBHomeGestureArbiter;
@protocol SBHomeGestureParticipantDelegate;

@interface SBHomeGestureParticipant : NSObject <BSDescriptionProviding>
{
    _Bool _ownsHomeGesture;
    _Bool _canShareOwnershipWithNextParticipant;
    long long _identifier;
    id <SBHomeGestureParticipantDelegate> _delegate;
    long long _homeAffordanceSuppression;
    long long _resolvedHomeAffordanceSuppression;
    NSIndexSet *_trumpsAdditionalIdentifiers;
    SBHomeGestureArbiter *_arbiter;
}


// Remaining properties
@property(nonatomic) __weak SBHomeGestureArbiter *arbiter; // @synthesize arbiter=_arbiter;
@property(nonatomic) _Bool canShareOwnershipWithNextParticipant; // @synthesize canShareOwnershipWithNextParticipant=_canShareOwnershipWithNextParticipant;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SBHomeGestureParticipantDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long homeAffordanceSuppression; // @synthesize homeAffordanceSuppression=_homeAffordanceSuppression;
@property(nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool ownsHomeGesture; // @synthesize ownsHomeGesture=_ownsHomeGesture;
@property(nonatomic) long long resolvedHomeAffordanceSuppression; // @synthesize resolvedHomeAffordanceSuppression=_resolvedHomeAffordanceSuppression;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSIndexSet *trumpsAdditionalIdentifiers; // @synthesize trumpsAdditionalIdentifiers=_trumpsAdditionalIdentifiers;
@end
