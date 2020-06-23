//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/BSDescriptionProviding-Protocol.h>
#import <SpringBoardFoundation/NSCopying-Protocol.h>
#import <SpringBoardFoundation/NSMutableCopying-Protocol.h>

@class NSDictionary, NSString;

@interface SBFMobileKeyBagState : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>
{
    NSDictionary *_state;
}


// Remaining properties
@property(readonly, nonatomic) double backOffTime;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long escrowCount;
@property(readonly, nonatomic) unsigned long long failedAttemptCount;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long lockState;
@property(readonly, nonatomic) _Bool permanentlyBlocked;
@property(readonly, nonatomic) _Bool recoveryEnabled;
@property(readonly, nonatomic) _Bool recoveryPossible;
@property(readonly, nonatomic) _Bool recoveryRequired;
@property(readonly, nonatomic) _Bool shouldWipe;
@property(readonly) Class superclass;
@end

