//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBFluidSwitcherGestureExclusionShape-Protocol.h>

@class NSString;

@interface SBFluidSwitcherGestureExclusionTrapezoid : NSObject <SBFluidSwitcherGestureExclusionShape>
{
    _Bool _allowHorizontalSwipesOutsideTrapezoid;
    double _baseHeight;
    double _trapezoidHeight;
    double _adjacentBaseXDistanceFromEdge;
    double _opposingBaseXDistanceFromEdge;
}


// Remaining properties
@property(nonatomic) double adjacentBaseXDistanceFromEdge; // @synthesize adjacentBaseXDistanceFromEdge=_adjacentBaseXDistanceFromEdge;
@property(nonatomic) _Bool allowHorizontalSwipesOutsideTrapezoid; // @synthesize allowHorizontalSwipesOutsideTrapezoid=_allowHorizontalSwipesOutsideTrapezoid;
@property(nonatomic) double baseHeight; // @synthesize baseHeight=_baseHeight;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) double opposingBaseXDistanceFromEdge; // @synthesize opposingBaseXDistanceFromEdge=_opposingBaseXDistanceFromEdge;
@property(readonly) Class superclass;
@property(nonatomic) double trapezoidHeight; // @synthesize trapezoidHeight=_trapezoidHeight;
@end

