//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBTestRecipe-Protocol.h>

@class NSString, SBHomeGestureParticipant;

@interface SBHomeGestureArbiterRecipe : NSObject <SBTestRecipe>
{
    SBHomeGestureParticipant *_participant;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SBHomeGestureParticipant *participant; // @synthesize participant=_participant;
@property(readonly) Class superclass;
@end

