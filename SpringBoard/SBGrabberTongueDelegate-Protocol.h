//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBGrabberTongue, SBIndirectPanGestureRecognizer, UIGestureRecognizer, UIPanGestureRecognizer, UITouch;

@protocol SBGrabberTongueDelegate <NSObject>
- (_Bool)grabberTongue:(SBGrabberTongue *)arg1 shouldShowTongueOnFirstSwipeWithEdgeLocation:(double)arg2;
- (_Bool)grabberTongueOrPullEnabled:(SBGrabberTongue *)arg1 forGestureRecognizer:(UIGestureRecognizer *)arg2;

@optional
- (_Bool)shouldSuppressTongueViewForGrabberTongue:(SBGrabberTongue *)arg1;
- (unsigned long long)indirectPanSystemGestureTypeForGrabberTongue:(SBGrabberTongue *)arg1;
- (SBIndirectPanGestureRecognizer *)indirectPanGestureRecognizerForGrabberTongue:(SBGrabberTongue *)arg1;
- (UIPanGestureRecognizer *)customGestureRecognizerForGrabberTongue:(SBGrabberTongue *)arg1;
- (void)grabberTongueDidPresentInteractively:(SBGrabberTongue *)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueWillPresentInteractively:(SBGrabberTongue *)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueDidDismiss:(SBGrabberTongue *)arg1;
- (void)grabberTongueWillDismiss:(SBGrabberTongue *)arg1;
- (void)grabberTongueWillPresent:(SBGrabberTongue *)arg1;
- (void)grabberTongueCanceledPulling:(SBGrabberTongue *)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(UIGestureRecognizer *)arg4;
- (void)grabberTongueEndedPulling:(SBGrabberTongue *)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(UIGestureRecognizer *)arg4;
- (void)grabberTongueUpdatedPulling:(SBGrabberTongue *)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(UIGestureRecognizer *)arg4;
- (void)grabberTongueBeganPulling:(SBGrabberTongue *)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(UIGestureRecognizer *)arg4;
- (_Bool)grabberTongueHonorsAmbiguousActivationMargin:(SBGrabberTongue *)arg1;
- (_Bool)grabberTongue:(SBGrabberTongue *)arg1 shouldAllowSecondSwipeWithEdgeLocation:(double)arg2;
- (_Bool)grabberTongue:(SBGrabberTongue *)arg1 shouldReceiveTouch:(UITouch *)arg2;
@end

