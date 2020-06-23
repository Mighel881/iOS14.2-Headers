//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

@protocol SBHomeGestureDockSwitcherModifierDelegate;

@interface SBHomeGestureDockSwitcherModifier : SBSwitcherModifier
{
    struct CGPoint _lastTouchLocation;
    struct CGPoint _unadjustedGestureTranslation;
    struct CGPoint _velocity;
    struct CGPoint _translationAdjustmentForFloatingDock;
    _Bool _currentlyTrackingDock;
    _Bool _wasTrackingDockWhenGestureBegan;
    _Bool _hadOpenDockFolderWhenGestureBegan;
    _Bool _hadOpenHomeScreenFolderWhenGestureBegan;
    _Bool _verticallyRubberbandedOutOfDock;
    _Bool _wantsDockAssertion;
    _Bool _highEnoughToShowDock;
    _Bool _gestureHasBegun;
    _Bool _gestureHasEnded;
    id <SBHomeGestureDockSwitcherModifierDelegate> _delegate;
    long long _startingEnvironmentMode;
    _Bool _requireVerticalSwipeToTrackDock;
}


// Remaining properties
@property(readonly, nonatomic, getter=isCurrentlyTrackingDock) _Bool currentlyTrackingDock; // @synthesize currentlyTrackingDock=_currentlyTrackingDock;
@end
