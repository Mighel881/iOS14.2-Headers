//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBSoftLockoutControllerDelegate-Protocol.h>

@class NSString, SBFMobileKeyBag, SBSoftLockoutController;

@interface SBSoftwareUpdatePasscodePolicyManager : NSObject <SBSoftLockoutControllerDelegate>
{
    long long _softwareUpdatePasscodePolicy;
    SBSoftLockoutController *_softLockoutController;
    SBFMobileKeyBag *_mobileKeyBag;
    _Bool _passcodeAuthenticationSuccessPending;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long softwareUpdatePasscodePolicy;
@property(readonly) Class superclass;
@end

