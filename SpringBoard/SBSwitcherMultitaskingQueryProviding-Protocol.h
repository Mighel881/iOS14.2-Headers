//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherQueryProviding-Protocol.h>

@class SBAppLayout, SBSwitcherScrollViewAttributes;

@protocol SBSwitcherMultitaskingQueryProviding <SBSwitcherQueryProviding>
- (void)resetAdjustedScrollingState;
- (struct CGPoint)adjustedOffsetForOffset:(struct CGPoint)arg1 translation:(struct CGPoint)arg2 startPoint:(struct CGPoint)arg3 locationInView:(struct CGPoint)arg4 horizontalVelocity:(inout double *)arg5 verticalVelocity:(inout double *)arg6;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1;
- (double)minimumTranslationToKillIndex:(unsigned long long)arg1;
- (struct CGPoint)restingOffsetForScrollOffset:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (struct CGPoint)contentOffsetForIndex:(unsigned long long)arg1 centered:(_Bool)arg2;
- (SBSwitcherScrollViewAttributes *)scrollViewAttributes;
- (double)contentPageViewScaleForAppLayout:(SBAppLayout *)arg1;
- (double)snapshotScaleForAppLayout:(SBAppLayout *)arg1;
@end
