/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ARRollingNumberSeries : NSObject {

	double* _series;
	unsigned long long _currentIndex;
	double _sumVariance;
	unsigned long long _windowSize;
	unsigned long long _count;
	double _sum;
	double _average;
	double _variance;

}

@property (nonatomic,readonly) unsigned long long windowSize;              //@synthesize windowSize=_windowSize - In the implementation block
@property (nonatomic,readonly) unsigned long long count;                   //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) double sum;                                 //@synthesize sum=_sum - In the implementation block
@property (nonatomic,readonly) double max; 
@property (nonatomic,readonly) double min; 
@property (nonatomic,readonly) double average;                             //@synthesize average=_average - In the implementation block
@property (nonatomic,readonly) double variance;                            //@synthesize variance=_variance - In the implementation block
-(void)clear;
-(double)sum;
-(unsigned long long)windowSize;
-(id)initWithWindowSize:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(double)max;
-(double)variance;
-(double)min;
-(double)average;
-(void)dealloc;
-(void)appendNumber:(double)arg1 ;
@end

