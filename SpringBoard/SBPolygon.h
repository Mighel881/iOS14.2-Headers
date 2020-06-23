//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SBPolygon : NSObject
{
    NSMutableArray *_mutablePoints;
    NSMutableArray *_weights;
    struct CGPoint _centroid;
    struct CGPoint _weightedCentroid;
}


// Remaining properties
@property(nonatomic, getter=_centroid, setter=_setCentroid:) struct CGPoint centroid; // @synthesize centroid=_centroid;
@property(readonly, nonatomic) double distanceOfFarthestPointFromCentroid;
@property(retain, nonatomic, getter=_points, setter=_setPoints:) NSMutableArray *mutablePoints; // @synthesize mutablePoints=_mutablePoints;
@property(readonly, nonatomic, getter=_perimeter) double perimeter;
@property(readonly, nonatomic) unsigned long long pointCount;
@property(nonatomic, getter=_weightedCentroid, setter=_setWeightedCentroid:) struct CGPoint weightedCentroid; // @synthesize weightedCentroid=_weightedCentroid;
@property(retain, nonatomic, getter=_weights, setter=_setWeights:) NSMutableArray *weights; // @synthesize weights=_weights;
@end

