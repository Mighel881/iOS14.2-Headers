/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNGradientKernel.h>

@interface MPSCNNUpsamplingGradient : MPSCNNGradientKernel {

	unsigned long long _filterType;
	double _scaleFactorX;
	double _scaleFactorY;

}

@property (nonatomic,readonly) double scaleFactorX;              //@synthesize scaleFactorX=_scaleFactorX - In the implementation block
@property (nonatomic,readonly) double scaleFactorY;              //@synthesize scaleFactorY=_scaleFactorY - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 filterType:(unsigned long long)arg2 integerScaleFactorX:(unsigned long long)arg3 integerScaleFactorY:(unsigned long long)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 ;
-(double)scaleFactorX;
-(double)scaleFactorY;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
@end

