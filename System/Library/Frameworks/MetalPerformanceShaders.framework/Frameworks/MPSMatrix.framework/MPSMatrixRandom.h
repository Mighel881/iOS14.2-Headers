/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSMatrix/MPSMatrix-Structs.h>
#import <MPSCore/MPSKernel.h>

@interface MPSMatrixRandom : MPSKernel {

	unsigned _destinationDataType;
	unsigned long long _distributionType;
	unsigned long long _batchStart;
	unsigned long long _batchSize;

}

@property (nonatomic,readonly) unsigned destinationDataType;                     //@synthesize destinationDataType=_destinationDataType - In the implementation block
@property (nonatomic,readonly) unsigned long long distributionType;              //@synthesize distributionType=_distributionType - In the implementation block
@property (assign,nonatomic) unsigned long long batchStart;                      //@synthesize batchStart=_batchStart - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;                       //@synthesize batchSize=_batchSize - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(unsigned long long)batchSize;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)destinationDataType;
-(unsigned long long)distributionType;
-(unsigned long long)batchStart;
-(void)setBatchStart:(unsigned long long)arg1 ;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(id)initWithDevice:(id)arg1 destinationDataType:(unsigned)arg2 distributionType:(unsigned long long)arg3 ;
-(void)encodeToCommandBuffer:(id)arg1 destinationVector:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 destinationMatrix:(id)arg2 ;
@end
