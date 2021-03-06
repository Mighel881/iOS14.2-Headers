/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>
#import <libobjc.A.dylib/BWInferenceFormatProvider.h>
#import <libobjc.A.dylib/BWInferencePixelBufferPoolProvider.h>

@class BWInferenceEngine, BWFigVideoCaptureDevice, NSString;

@interface BWInferenceNode : BWNode <BWInferenceFormatProvider, BWInferencePixelBufferPoolProvider> {

	BWInferenceEngine* _inferenceEngine;
	BWFigVideoCaptureDevice* _captureDevice;
	BOOL _awaitAsynchronousOutputs;

}

@property (nonatomic,readonly) BWInferenceEngine * inferenceEngine;              //@synthesize inferenceEngine=_inferenceEngine - In the implementation block
@property (assign,nonatomic) BOOL awaitAsynchronousOutputs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(BWInferenceEngine *)inferenceEngine;
-(BOOL)awaitAsynchronousOutputs;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id)nodeType;
-(id)nodeSubType;
-(NSString *)description;
-(id)outputFormatForAttachedMediaKey:(id)arg1 ;
-(id)preparedOutputPixelBufferPoolForAttachedMediaKey:(id)arg1 format:(id)arg2 ;
-(id)liveOutputPixelBufferPoolForAttachedMediaKey:(id)arg1 format:(id)arg2 ;
-(BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg1 ;
-(id)initWithCaptureDevice:(id)arg1 scheduler:(id)arg2 priority:(unsigned)arg3 ;
-(void)willEmitSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)inputInferenceVideoFormatForAttachedMediaKey:(id)arg1 ;
-(id)inputVideoFormatForAttachedMediaKey:(id)arg1 ;
-(id)outputVideoFormatForAttachedMediaKey:(id)arg1 ;
-(int)addInferenceOfType:(int)arg1 version:(SCD_Struct_BW57)arg2 configuration:(id)arg3 ;
-(int)addInferenceOfType:(int)arg1 version:(SCD_Struct_BW57)arg2 ;
-(void)dealloc;
-(void)setAwaitAsynchronousOutputs:(BOOL)arg1 ;
-(id)inputFormatForAttachedMediaKey:(id)arg1 ;
@end

