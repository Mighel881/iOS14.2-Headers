//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol SBFOverlayObserving, UIViewControllerTransitionCoordinator;

@protocol SBFOverlayControlling
@property(readonly, nonatomic, getter=isPresented) _Bool presented;
@property(nonatomic) double presentationProgress;
@property(readonly, nonatomic) double contentWidth;
- (void)removeHomeScreenOverlayObserver:(id <SBFOverlayObserving>)arg1;
- (void)addHomeScreenOverlayObserver:(id <SBFOverlayObserving>)arg1;
- (double)finalPresentationProgressForPresentationProgress:(double)arg1 gestureVelocity:(double)arg2 fromLeading:(_Bool)arg3;
- (double)finalPresentationProgressForPresentationProgress:(double)arg1 gestureVelocity:(double)arg2;
- (void)dismissUsingViewControllerTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg1;
- (void)dismissAnimated:(_Bool)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)presentAnimated:(_Bool)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)presentAnimated:(_Bool)arg1 fromLeading:(_Bool)arg2;
- (void)presentAnimated:(_Bool)arg1;
- (void)setPresentationProgress:(double)arg1 fromLeading:(_Bool)arg2 interactive:(_Bool)arg3 animated:(_Bool)arg4 completionHandler:(void (^)(_Bool))arg5;
- (void)setPresentationProgress:(double)arg1 interactive:(_Bool)arg2 animated:(_Bool)arg3 completionHandler:(void (^)(_Bool))arg4;
- (void)setPresentationProgress:(double)arg1 fromLeading:(_Bool)arg2;
@end
