//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class BSUIAnimationFactory, SBSceneView;

@protocol SBSceneViewDelegate <NSObject>

@optional
- (void)sceneView:(SBSceneView *)arg1 changedPreferredStatusBarStyleTo:(long long)arg2;
- (BSUIAnimationFactory *)animationFactoryForImplicitTransitionFromMode:(long long)arg1 toMode:(long long)arg2 defaultFactory:(BSUIAnimationFactory *)arg3;
@end

