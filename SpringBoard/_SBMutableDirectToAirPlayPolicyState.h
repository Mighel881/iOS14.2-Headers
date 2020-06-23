//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/_SBDirectToAirPlayPolicyState.h>

@class NSSet, NSString;

@interface _SBMutableDirectToAirPlayPolicyState : _SBDirectToAirPlayPolicyState
{
}


// Remaining properties
@property(copy, nonatomic) NSSet *allForegroundBundleIDs; // @dynamic allForegroundBundleIDs;
@property(copy, nonatomic) NSSet *allPlayingBundleIDs; // @dynamic allPlayingBundleIDs;
@property(nonatomic) _Bool currentRouteIsWired; // @dynamic currentRouteIsWired;
@property(copy, nonatomic) NSSet *foregroundEligibleBundleIDs; // @dynamic foregroundEligibleBundleIDs;
@property(copy, nonatomic) NSSet *foregroundIneligibleBundleIDs; // @dynamic foregroundIneligibleBundleIDs;
@property(copy, nonatomic) NSSet *foregroundPlayingBundleIDs; // @dynamic foregroundPlayingBundleIDs;
@property(copy, nonatomic) NSSet *foregroundReadyBundleIDs; // @dynamic foregroundReadyBundleIDs;
@property(nonatomic) _Bool playingAppIsActivelyPlaying; // @dynamic playingAppIsActivelyPlaying;
@property(nonatomic) unsigned long long policyStateSerialNumber; // @dynamic policyStateSerialNumber;
@property(copy, nonatomic) NSString *routeName; // @dynamic routeName;
@property(nonatomic) _Bool suppressReadyStateForLock; // @dynamic suppressReadyStateForLock;
@property(nonatomic) _Bool suppressStateChangesForObscured; // @dynamic suppressStateChangesForObscured;
@end

