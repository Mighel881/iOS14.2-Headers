//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol SBHWidgetConfigurationAnimationContext;

@protocol SBHWidgetConfigurationAnimating
- (void)finalizeAnimationAtEndpoint:(long long)arg1 withContext:(id <SBHWidgetConfigurationAnimationContext>)arg2;
- (void)animateToEndpoint:(long long)arg1 withContext:(id <SBHWidgetConfigurationAnimationContext>)arg2 completion:(void (^)(void))arg3;
- (void)prepareToAnimateFromEndpoint:(long long)arg1 withContext:(id <SBHWidgetConfigurationAnimationContext>)arg2;
@end

