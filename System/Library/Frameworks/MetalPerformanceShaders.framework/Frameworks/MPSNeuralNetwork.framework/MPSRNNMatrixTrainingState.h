/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSCore/MPSState.h>

@class MPSMatrix;

@interface MPSRNNMatrixTrainingState : MPSState {

	MPSMatrix* singleGateZ;
	BOOL _isTemporary;

}
-(BOOL)isTemporary;
-(id)initForSingleGateWithCommandBuffer:(id)arg1 matrixDescriptor:(id)arg2 isTemporary:(BOOL)arg3 ;
-(void)setReadCount:(unsigned long long)arg1 ;
-(void)dealloc;
@end

