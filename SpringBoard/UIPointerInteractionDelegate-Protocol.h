//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class UIPointerInteraction, UIPointerRegion, UIPointerRegionRequest, UIPointerStyle;
@protocol UIPointerInteractionAnimating;

@protocol UIPointerInteractionDelegate <NSObject>

@optional
- (void)pointerInteraction:(UIPointerInteraction *)arg1 willExitRegion:(UIPointerRegion *)arg2 animator:(id <UIPointerInteractionAnimating>)arg3;
- (void)pointerInteraction:(UIPointerInteraction *)arg1 willEnterRegion:(UIPointerRegion *)arg2 animator:(id <UIPointerInteractionAnimating>)arg3;
- (UIPointerStyle *)pointerInteraction:(UIPointerInteraction *)arg1 styleForRegion:(UIPointerRegion *)arg2;
- (UIPointerRegion *)pointerInteraction:(UIPointerInteraction *)arg1 regionForRequest:(UIPointerRegionRequest *)arg2 defaultRegion:(UIPointerRegion *)arg3;
@end

