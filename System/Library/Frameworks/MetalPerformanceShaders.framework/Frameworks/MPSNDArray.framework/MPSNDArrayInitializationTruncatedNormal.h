/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayInitialization.h>

@interface MPSNDArrayInitializationTruncatedNormal : MPSNDArrayInitialization {

	float _mean;
	float _standardDeviation;

}

@property (nonatomic,readonly) float mean;                           //@synthesize mean=_mean - In the implementation block
@property (nonatomic,readonly) float standardDeviation;              //@synthesize standardDeviation=_standardDeviation - In the implementation block
-(float)mean;
-(id)initWithDevice:(id)arg1 sourceCount:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(float)standardDeviation;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(unsigned long long)kernelDimensionalityForDestinationArray:(id)arg1 ;
-(id)initWithDevice:(id)arg1 mean:(float)arg2 standardDeviation:(float)arg3 seed:(unsigned long long)arg4 ;
@end
