//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBSwitcherLiveContentOverlay-Protocol.h>

@class NSString, SBSceneLayoutAnimationWrapperView, UIView;

@interface SBAnimationWrapperViewLiveContentOverlay : NSObject <SBSwitcherLiveContentOverlay>
{
    long long _containerOrientation;
    SBSceneLayoutAnimationWrapperView *_animationWrapperView;
}


// Remaining properties
@property(readonly, nonatomic) SBSceneLayoutAnimationWrapperView *animationWrapperView; // @synthesize animationWrapperView=_animationWrapperView;
@property(nonatomic) long long containerOrientation; // @synthesize containerOrientation=_containerOrientation;
@property(readonly, nonatomic) UIView *contentOverlayView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
