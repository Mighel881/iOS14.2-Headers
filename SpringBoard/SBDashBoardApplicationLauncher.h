//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/CSApplicationLaunching-Protocol.h>
#import <SpringBoard/CSCameraPrewarming-Protocol.h>
#import <SpringBoard/CSExternalEventHandling-Protocol.h>
#import <SpringBoard/SBLockScreenApplicationLaunching-Protocol.h>

@class CSCoverSheetViewController, NSString, SBInProcessSecureAppAction, SBSecureAppManager;

@interface SBDashBoardApplicationLauncher : NSObject <CSExternalEventHandling, SBLockScreenApplicationLaunching, CSApplicationLaunching, CSCameraPrewarming>
{
    SBInProcessSecureAppAction *_secureAppAction;
    _Bool _cameraIsPrewarming;
    _Bool _cameraPrewarmSucceeded;
    CSCoverSheetViewController *_coverSheetViewController;
    SBSecureAppManager *_secureAppManager;
}


// Remaining properties
@property(readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property(retain, nonatomic) CSCoverSheetViewController *coverSheetViewController; // @synthesize coverSheetViewController=_coverSheetViewController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long participantState;
@property(nonatomic) __weak SBSecureAppManager *secureAppManager; // @synthesize secureAppManager=_secureAppManager;
@property(readonly) Class superclass;
@end
