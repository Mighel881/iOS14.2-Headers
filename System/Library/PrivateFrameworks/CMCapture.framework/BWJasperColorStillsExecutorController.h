/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWStillImageProcessorController.h>
#import <libobjc.A.dylib/BWJasperColorStillsExecutorInputDelegate.h>

@class FigStateMachine, BWJasperColorStillsExecutorControllerConfiguration, ADJasperColorStillsExecutor, NSMutableArray, BWJasperColorStillsExecutorRequest, NSString;

@interface BWJasperColorStillsExecutorController : BWStillImageProcessorController <BWJasperColorStillsExecutorInputDelegate> {

	FigStateMachine* _stateMachine;
	BWJasperColorStillsExecutorControllerConfiguration* _configuration;
	ADJasperColorStillsExecutor* _adStillImageExecutor;
	NSMutableArray* _requestQueue;
	BWJasperColorStillsExecutorRequest* _currentRequest;
	opaqueCMFormatDescriptionRef _depthFormatDescription;
	SCD_Struct_BW14 _identityMatrix;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)_execute;
-(id)initWithConfiguration:(id)arg1 ;
-(unsigned long long)type;
-(void)inputReadyToExecute:(id)arg1 ;
-(int)_setupJasperColorStillsExecutor;
-(void)_updateStateIfNeeded;
-(void)_serviceNextRequest;
-(int)_createJasperToColorCameraTransformForJasperSensorConfiguration:(id)arg1 jasperToColorCameraTransformOut:(SCD_Struct_BW14*)arg2 ;
-(int)_createColorCameraCalibrationAndDepthMetadataForColorSampleBuffer:(opaqueCMSampleBufferRef)arg1 colorSensorConfiguration:(id)arg2 colorCameraCalibrationOut:(id*)arg3 depthMetadataOut:(id*)arg4 ;
-(int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2 ;
-(void)cancelProcessing;
-(void)dealloc;
@end

