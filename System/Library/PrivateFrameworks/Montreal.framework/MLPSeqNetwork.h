/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Montreal/MLPNetwork.h>
#import <libobjc.A.dylib/MLPLearningRateDecayHandlerDelegate.h>

@class MLPLearningRateDecayHandler, NSString;

@interface MLPSeqNetwork : MLPNetwork <MLPLearningRateDecayHandlerDelegate> {

	MLPLearningRateDecayHandler* _seqLearningRateDecayHandler;

}

@property (retain) MLPLearningRateDecayHandler * seqLearningRateDecayHandler;              //@synthesize seqLearningRateDecayHandler=_seqLearningRateDecayHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithLayers:(id)arg1 ;
-(void)setOptimizerParams:(id)arg1 ;
-(void)createLayerKernels;
-(void)runTraining:(id)arg1 databatch:(id)arg2 iteration:(unsigned long long)arg3 lossCallback:(/*^block*/id)arg4 semaphore:(id)arg5 ;
-(unsigned long long)runInference:(id)arg1 databatch:(id)arg2 inferredResult:(id)arg3 semaphore:(id)arg4 ;
-(id)computeInference:(id)arg1 ;
-(void)setSeqLearningRateDecayHandler:(MLPLearningRateDecayHandler *)arg1 ;
-(float)computeLoss:(id)arg1 ;
-(MLPLearningRateDecayHandler *)seqLearningRateDecayHandler;
-(void)decayHandler:(id)arg1 didUpdateLearningRate:(float)arg2 ;
@end

