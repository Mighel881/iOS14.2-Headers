//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBLayoutElementViewController.h>

#import <SpringBoard/SBApplicationSceneStatusBarDescriberProviding-Protocol.h>
#import <SpringBoard/SBApplicationSceneStatusBarDescribing-Protocol.h>
#import <SpringBoard/SBSceneLayoutMedusaStatusBarAssertionProviding-Protocol.h>
#import <SpringBoard/SBSceneViewStatusBarAssertionObserver-Protocol.h>

@class FBScene, NSMutableArray, NSString, SBAppClipOverlayViewController, SBDeviceApplicationSceneHandle, SBDeviceApplicationSceneStatusBarBreadcrumbProvider, _UIStatusBarData;
@protocol SBApplicationSceneStatusBarDescribing, SBDeviceApplicationSceneStatusBarStateObserver;

@interface SBAppClipPlaceholderLayoutElementViewController : SBLayoutElementViewController <SBSceneViewStatusBarAssertionObserver, SBApplicationSceneStatusBarDescriberProviding, SBApplicationSceneStatusBarDescribing, SBSceneLayoutMedusaStatusBarAssertionProviding>
{
    NSString *_bundleIdentifier;
    NSString *_sceneIdentifier;
    SBAppClipOverlayViewController *_placeholderViewController;
    _Bool _isObservingApplicationInstalls;
    NSMutableArray *_statusBarAssertions;
    id <SBDeviceApplicationSceneStatusBarStateObserver> _statusBarDelegate;
}


// Remaining properties
@property(readonly, nonatomic) SBDeviceApplicationSceneStatusBarBreadcrumbProvider *breadcrumbProvider;
@property(readonly, nonatomic) SBDeviceApplicationSceneHandle *classicApplicationSceneHandleIfExists;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _UIStatusBarData *overlayStatusBarData;
@property(readonly, nonatomic) FBScene *sceneToHandleStatusBarTapIfExists;
@property(readonly, nonatomic) _Bool sceneWantsDeviceOrientationEventsEnabled;
@property(readonly, nonatomic) double statusBarAlpha;
@property(readonly, nonatomic) struct CGRect statusBarAvoidanceFrame;
@property(nonatomic) __weak id <SBDeviceApplicationSceneStatusBarStateObserver> statusBarDelegate; // @synthesize statusBarDelegate=_statusBarDelegate;
@property(readonly, nonatomic) id <SBApplicationSceneStatusBarDescribing> statusBarDescriber;
@property(readonly, nonatomic) _Bool statusBarHidden;
@property(readonly, nonatomic) long long statusBarOrientation;
@property(readonly, nonatomic) NSString *statusBarSceneIdentifier;
@property(readonly, nonatomic) long long statusBarStyle;
@property(readonly, nonatomic) int statusBarStyleOverridesToSuppress;
@property(readonly) Class superclass;
@end

