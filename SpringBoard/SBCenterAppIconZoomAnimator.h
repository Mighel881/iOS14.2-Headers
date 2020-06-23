//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBCenterIconZoomAnimator.h>

@class NSMutableArray, SBHCenterAppZoomSettings, SBReversibleLayerPropertyAnimator, UIView;

@interface SBCenterAppIconZoomAnimator : SBCenterIconZoomAnimator
{
    UIView *_appView;
    UIView *_appZoomView;
    struct CGRect _destinationFrame;
    unsigned char _testCompletionCount;
    double _distantScale;
    SBReversibleLayerPropertyAnimator *_appZoomAnimator;
    NSMutableArray *_animationCompletions;
}


// Remaining properties
@property(retain, nonatomic) NSMutableArray *animationCompletions; // @synthesize animationCompletions=_animationCompletions;
@property(retain, nonatomic) SBReversibleLayerPropertyAnimator *appZoomAnimator; // @synthesize appZoomAnimator=_appZoomAnimator;
@property double distantScale; // @synthesize distantScale=_distantScale;
@property(retain, nonatomic) SBHCenterAppZoomSettings *settings; // @dynamic settings;
@end

