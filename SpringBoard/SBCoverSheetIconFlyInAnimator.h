//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBCenterIconZoomAnimator.h>

#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>

@class CAMediaTimingFunction, NSString, UIPageControl, UIViewFloatAnimatableProperty;

@interface SBCoverSheetIconFlyInAnimator : SBCenterIconZoomAnimator <PTSettingsKeyObserver>
{
    double _baselineDistance;
    double _effectMultiplier;
    double _distanceExponent;
    UIViewFloatAnimatableProperty *_labelAlphaDrivingProgressAnimatableProperty;
    CAMediaTimingFunction *_timingFunction;
    UIPageControl *_pageControl;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIViewFloatAnimatableProperty *labelAlphaDrivingProgressAnimatableProperty; // @synthesize labelAlphaDrivingProgressAnimatableProperty=_labelAlphaDrivingProgressAnimatableProperty;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(readonly) Class superclass;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@end

