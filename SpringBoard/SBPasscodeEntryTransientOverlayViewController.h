//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransientOverlayViewController.h>

#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/SBFAuthenticationResponder-Protocol.h>
#import <SpringBoard/SBUIPasscodeLockViewDelegate-Protocol.h>

@class CSLockScreenPearlSettings, NSString, SBFUserAuthenticationController, SBUIPasscodeViewWithLockScreenStyle;
@protocol SBPasscodeEntryTransientOverlayViewControllerDelegate, SBUIPasscodeLockView;

@interface SBPasscodeEntryTransientOverlayViewController : SBTransientOverlayViewController <PTSettingsKeyObserver, SBFAuthenticationResponder, SBUIPasscodeLockViewDelegate>
{
    _Bool _attemptingUnlock;
    SBFUserAuthenticationController *_authenticationController;
    id <SBUIPasscodeLockView> _passcodeRequester;
    SBUIPasscodeViewWithLockScreenStyle *_passcodeView;
    CSLockScreenPearlSettings *_pearlSettings;
    _Bool _showEmergencyCallButton;
    _Bool _useBiometricPresentation;
    id <SBPasscodeEntryTransientOverlayViewControllerDelegate> _delegate;
    NSString *_unlockDestination;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SBPasscodeEntryTransientOverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool showEmergencyCallButton; // @synthesize showEmergencyCallButton=_showEmergencyCallButton;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *unlockDestination; // @synthesize unlockDestination=_unlockDestination;
@property(nonatomic) _Bool useBiometricPresentation; // @synthesize useBiometricPresentation=_useBiometricPresentation;
@end

