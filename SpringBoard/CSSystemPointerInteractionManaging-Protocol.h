//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class UIView;
@protocol SBSystemPointerInteractionDelegate;

@protocol CSSystemPointerInteractionManaging <NSObject>
- (void)unregisterView:(UIView *)arg1;
- (void)registerView:(UIView *)arg1 delegate:(id <SBSystemPointerInteractionDelegate>)arg2;
@end

