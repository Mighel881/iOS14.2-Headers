//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoard/MTLumaDodgePillBackgroundLuminanceObserver-Protocol.h>
#import <SpringBoard/PTSettingsKeyPathObserver-Protocol.h>
#import <SpringBoard/SBAttentionAwarenessClientDelegate-Protocol.h>
#import <SpringBoard/SBSystemPointerInteractionDelegate-Protocol.h>

@class MTLumaDodgePillSettings, MTLumaDodgePillView, NSMutableSet, NSString, SBAttentionAwarenessClient, SBFHomeGrabberSettings;
@protocol SBHomeGrabberDelegate, SBHomeGrabberPointerClickDelegate;

@interface SBHomeGrabberView : UIView <PTSettingsKeyPathObserver, SBAttentionAwarenessClientDelegate, MTLumaDodgePillBackgroundLuminanceObserver, SBSystemPointerInteractionDelegate>
{
    SBFHomeGrabberSettings *_settings;
    MTLumaDodgePillSettings *_pillSettings;
    MTLumaDodgePillView *_pillView;
    UIView *_pointerHitTestBlockingView;
    SBAttentionAwarenessClient *_idleTouchAwarenessClient;
    long long _touchState;
    unsigned long long _lastActivatingToken;
    unsigned long long _lastInitialHideToken;
    _Bool _autoHides;
    _Bool _edgeProtectEnabled;
    _Bool _shouldEnableGestures;
    NSMutableSet *_hiddenOverrides;
    long long _luma;
    long long _presence;
    long long _style;
    unsigned long long _lastVisibilityTransitionToken;
    NSMutableSet *_outstandingVisibilityTransitionTokens;
    _Bool _isSystemPointerInteractionEnabled;
    _Bool _suppressesBounce;
    id <SBHomeGrabberDelegate> _delegate;
    long long _colorBias;
    id <SBHomeGrabberPointerClickDelegate> _pointerClickDelegate;
}


// Remaining properties
@property(nonatomic) _Bool autoHides; // @synthesize autoHides=_autoHides;
@property(nonatomic) long long colorBias; // @synthesize colorBias=_colorBias;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SBHomeGrabberDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isEdgeProtectEnabled) _Bool edgeProtectEnabled; // @synthesize edgeProtectEnabled=_edgeProtectEnabled;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <SBHomeGrabberPointerClickDelegate> pointerClickDelegate; // @synthesize pointerClickDelegate=_pointerClickDelegate;
@property(readonly, nonatomic) double suggestedEdgeSpacing;
@property(readonly) Class superclass;
@property(nonatomic) _Bool suppressesBounce; // @synthesize suppressesBounce=_suppressesBounce;
@end
