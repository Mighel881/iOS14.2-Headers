/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWStillImageProcessorController.h>
#import <libobjc.A.dylib/BWRedEyeReductionControllerInputDelegate.h>

@class NSDictionary, CIDualRedEyeRepairSession, NSMutableArray, NSString;

@interface BWRedEyeReductionController : BWStillImageProcessorController <BWRedEyeReductionControllerInputDelegate> {

	NSDictionary* _redEyeReductionParametersByPortType;
	CIDualRedEyeRepairSession* _redEyeRepairSession;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	NSMutableArray* _requestQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)prewarm;
+(id)_newRedEyeRepairSessionWithMetalCommandQueue:(id)arg1 ;
-(id)_currentRequest;
-(id)initWithConfiguration:(id)arg1 ;
-(void)_serviceRequests;
-(unsigned long long)type;
-(int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2 ;
-(void)cancelProcessing;
-(void)dealloc;
-(void)didReceiveFrameForInput:(id)arg1 ;
-(void)didReceiveAllFramesForInput:(id)arg1 ;
-(void)_clearRequest:(id)arg1 ;
-(int)_configureRedEyeReductionSessionWithConfiguration:(id)arg1 ;
-(id)_requestForInput:(id)arg1 ;
-(void)_processRedEyeReductionWhenNecessaryForRequest:(id)arg1 ;
-(BOOL)_receivedRequiredFramesForRequest:(id)arg1 ;
-(void)_propagateSensorInterfaceRawFromAuxImage:(opaqueCMSampleBufferRef)arg1 toPrimaryImage:(opaqueCMSampleBufferRef)arg2 ;
@end

