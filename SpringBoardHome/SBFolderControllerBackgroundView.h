//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MTMaterialView, UIImageView;
@protocol SBFolderControllerBackgroundViewDelegate;

@interface SBFolderControllerBackgroundView : UIView
{
    MTMaterialView *_blurView;
    UIImageView *_blurViewSnapshot;
    UIView *_tintView;
    UIView *_debugFreezingView;
    _Bool _transitionCancelled;
    _Bool _effectActive;
    _Bool _expanding;
    _Bool _frozen;
    _Bool _reduceTransparencyEnabled;
    id <SBFolderControllerBackgroundViewDelegate> _delegate;
    unsigned long long _effect;
    unsigned long long _currentEffect;
}


// Remaining properties
@property(readonly, nonatomic) unsigned long long concreteEffect;
@property(nonatomic) unsigned long long currentEffect; // @synthesize currentEffect=_currentEffect;
@property(nonatomic) __weak id <SBFolderControllerBackgroundViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long effect; // @synthesize effect=_effect;
@property(nonatomic, getter=isEffectActive) _Bool effectActive; // @synthesize effectActive=_effectActive;
@property(nonatomic, getter=isExpanding) _Bool expanding; // @synthesize expanding=_expanding;
@property(nonatomic, getter=isFrozen) _Bool frozen; // @synthesize frozen=_frozen;
@property(nonatomic, getter=isReduceTransparencyEnabled) _Bool reduceTransparencyEnabled; // @synthesize reduceTransparencyEnabled=_reduceTransparencyEnabled;
@property(nonatomic, getter=isTransitionCancelled) _Bool transitionCancelled; // @synthesize transitionCancelled=_transitionCancelled;
@end
