//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSPageViewController.h>

#import <SpringBoard/CSApplicationHosting-Protocol.h>
#import <SpringBoard/SBDashBoardHostedAppViewControllerDelegate-Protocol.h>
#import <SpringBoard/SBHomeGestureInteractionDelegate-Protocol.h>
#import <SpringBoard/SBHomeGesturePanGestureRecognizerInterfaceDelegate-Protocol.h>
#import <SpringBoard/SBHomeGestureParticipantDelegate-Protocol.h>
#import <SpringBoard/SBHomeGrabberPointerClickDelegate-Protocol.h>
#import <SpringBoard/SBSceneHandleObserver-Protocol.h>
#import <SpringBoard/SBSystemGestureRecognizerDelegate-Protocol.h>

@class CSLockScreenSettings, NSSet, NSString, SBDashBoardHostedAppViewController, SBFFluidBehaviorSettings, SBHomeGestureInteraction, SBHomeGestureParticipant, SBLockScreenDefaults, UIView, UIViewFloatAnimatableProperty;

@interface SBDashBoardCameraPageViewController : CSPageViewController <SBDashBoardHostedAppViewControllerDelegate, SBSceneHandleObserver, SBSystemGestureRecognizerDelegate, SBHomeGesturePanGestureRecognizerInterfaceDelegate, SBHomeGestureParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBHomeGestureInteractionDelegate, CSApplicationHosting>
{
    UIView *_maskView;
    UIView *_tintView;
    SBDashBoardHostedAppViewController *_appViewController;
    _Bool _orientationLockAcquired;
    _Bool _interactiveDismissalInProgress;
    _Bool _hasWarmedCameraForThisPresentation;
    _Bool _cameraPrewarmSucceeded;
    long long _cameraPresentLargestPercent;
    CSLockScreenSettings *_prototypeSettings;
    SBLockScreenDefaults *_lockScreenDefaults;
    SBHomeGestureInteraction *_homeGestureInteraction;
    UIViewFloatAnimatableProperty *_scaleProperty;
    UIViewFloatAnimatableProperty *_alphaProperty;
    SBFFluidBehaviorSettings *_scaleSettings;
    SBFFluidBehaviorSettings *_alphaSettings;
    SBHomeGestureParticipant *_homeGestureParticipant;
}


// Remaining properties
@property(retain, nonatomic) NSSet *actionsToDeliver;
@property(retain, nonatomic) UIViewFloatAnimatableProperty *alphaProperty; // @synthesize alphaProperty=_alphaProperty;
@property(retain, nonatomic) SBFFluidBehaviorSettings *alphaSettings; // @synthesize alphaSettings=_alphaSettings;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SBHomeGestureInteraction *homeGestureInteraction; // @synthesize homeGestureInteraction=_homeGestureInteraction;
@property(retain, nonatomic) SBHomeGestureParticipant *homeGestureParticipant; // @synthesize homeGestureParticipant=_homeGestureParticipant;
@property(retain, nonatomic) UIViewFloatAnimatableProperty *scaleProperty; // @synthesize scaleProperty=_scaleProperty;
@property(retain, nonatomic) SBFFluidBehaviorSettings *scaleSettings; // @synthesize scaleSettings=_scaleSettings;
@property(readonly) Class superclass;
@end

