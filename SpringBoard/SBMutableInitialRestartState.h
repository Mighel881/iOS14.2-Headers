//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBInitialRestartState.h>

@class SBBootDefaults;

@interface SBMutableInitialRestartState : SBInitialRestartState
{
}


// Remaining properties
@property(nonatomic, getter=isAuthenticated) _Bool authenticated; // @dynamic authenticated;
@property(nonatomic, getter=isBlocked) _Bool blocked; // @dynamic blocked;
@property(retain, nonatomic) SBBootDefaults *bootDefaults; // @dynamic bootDefaults;
@property(nonatomic, getter=isForSimulator) _Bool forSimulator; // @dynamic forSimulator;
@property(nonatomic) _Bool hasPasscodeSet; // @dynamic hasPasscodeSet;
@property(nonatomic, getter=homeButtonType) long long homeButtonType; // @dynamic homeButtonType;
@property(nonatomic, getter=isInLostMode) _Bool inLostMode; // @dynamic inLostMode;
@property(nonatomic, getter=isLoginSession) _Bool loginSession; // @dynamic loginSession;
@property(nonatomic) _Bool requiresSetup; // @dynamic requiresSetup;
@property(nonatomic) _Bool shouldNeverLock; // @dynamic shouldNeverLock;
@end

