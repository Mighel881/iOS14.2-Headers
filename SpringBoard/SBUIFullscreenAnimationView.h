//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol SBUIFullscreenAnimationViewDelegate;

@interface SBUIFullscreenAnimationView : UIView
{
    id <SBUIFullscreenAnimationViewDelegate> _delegate;
    _Bool _animating;
}


// Remaining properties
@property(readonly, nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) __weak id <SBUIFullscreenAnimationViewDelegate> delegate; // @synthesize delegate=_delegate;
@end

