//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBAppLayout, SBAppSwitcherReusableSnapshotView;

@protocol SBAppSwitcherReusableSnapshotViewDelegate <NSObject>
- (_Bool)snapshotView:(SBAppSwitcherReusableSnapshotView *)arg1 shouldShowAppClipOverlayForLayout:(SBAppLayout *)arg2;
- (struct CGRect)layoutFrameForItemWithRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2 interfaceOrientation:(long long)arg3 forSnapshotView:(SBAppSwitcherReusableSnapshotView *)arg4;
@end

