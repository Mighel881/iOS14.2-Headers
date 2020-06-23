//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SBApplicationSceneView, SBLayoutElement, SBOrientationTransformWrapperView;
@protocol BSInvalidatable;

@interface SBSceneLayoutElementAnimationWrapperView : UIView
{
    SBLayoutElement *_layoutElement;
    SBApplicationSceneView *_appView;
    SBOrientationTransformWrapperView *_orientedView;
    UIView<BSInvalidatable> *_contentView;
}


// Remaining properties
@property(readonly, nonatomic) SBApplicationSceneView *applicationSceneViewIfExists;
@property(readonly, nonatomic) UIView<BSInvalidatable> *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) SBLayoutElement *layoutElement; // @synthesize layoutElement=_layoutElement;
@end

