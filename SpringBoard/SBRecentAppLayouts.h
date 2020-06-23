//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBApplicationRestrictionObserver-Protocol.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SBAppSwitcherDefaults, SBApplicationController, SBApplicationPlaceholderController, SBIconController, SBMainDisplaySceneManager, SBRecentAppLayoutsPersister;
@protocol BSInvalidatable, SBRecentAppLayoutsDelegate;

@interface SBRecentAppLayouts : NSObject <SBApplicationRestrictionObserver>
{
    NSMutableArray *_allRecents;
    NSMutableArray *_unhiddenRecents;
    NSDictionary *_allRecentsForBundleIdentifiers;
    NSDictionary *_unhiddenRecentsForBundleIdentifiers;
    NSDictionary *_allRecentDisplayItemsForBundleIdentifiers;
    NSDictionary *_unhiddenRecentDisplayItemsForBundleIdentifiers;
    NSMutableDictionary *_allowHiddenAppAssertions;
    SBAppSwitcherDefaults *_defaults;
    SBIconController *_iconController;
    SBApplicationController *_applicationController;
    SBApplicationPlaceholderController *_placeholderController;
    SBMainDisplaySceneManager *_sceneManager;
    SBRecentAppLayoutsPersister *_persister;
    id <BSInvalidatable> _stateCaptureInvalidatable;
    id <SBRecentAppLayoutsDelegate> _delegate;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SBRecentAppLayoutsDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

