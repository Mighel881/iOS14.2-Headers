//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBFInfiniteImpulseResponseFilter : NSObject
{
    unsigned long long _count;
    double *_ffC;
    double *_fbC;
    double *_inputHistory;
    double *_outputHistory;
    double _zeroGradientThreshold;
}


// Remaining properties
@property(nonatomic) double zeroGradientThreshold; // @synthesize zeroGradientThreshold=_zeroGradientThreshold;
@end

