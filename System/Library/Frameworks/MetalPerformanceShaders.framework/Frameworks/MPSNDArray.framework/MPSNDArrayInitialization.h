/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayMultiaryKernel.h>

@class MPSParallelRandomDistributionDescriptor, MPSParallelRandom;

@interface MPSNDArrayInitialization : MPSNDArrayMultiaryKernel {

	MPSParallelRandomDistributionDescriptor* _distribution;
	MPSParallelRandom* _generator;
	unsigned long long _seed;
	float _constantValue;

}
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 sourceCount:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)dealloc;
-(unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 destinationArray:(id)arg2 ;
-(unsigned long long)kernelDimensionalityForDestinationArray:(id)arg1 ;
-(id)encodeToCommandBuffer:(id)arg1 destinationDescriptor:(id)arg2 ;
@end

