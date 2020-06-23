//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class UIPointerRegion, UIPointerStyle, UIView;

@protocol SBSystemPointerInteractionDelegate <NSObject>
- (_Bool)shouldBeginPointerInteractionAtLocation:(struct CGPoint)arg1 forView:(UIView *)arg2;

@optional
- (UIPointerStyle *)styleForRegion:(UIPointerRegion *)arg1 forView:(UIView *)arg2;
- (UIPointerRegion *)regionAtLocation:(struct CGPoint)arg1 forView:(UIView *)arg2;
- (struct UIEdgeInsets)pointerInteractionHitTestInsetsForView:(UIView *)arg1;
@end

