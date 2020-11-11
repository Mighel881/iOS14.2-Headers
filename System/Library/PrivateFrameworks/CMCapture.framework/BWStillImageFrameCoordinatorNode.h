/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class NSDictionary, NSMutableDictionary, BWStillImageCaptureSettings, NSMutableArray;

@interface BWStillImageFrameCoordinatorNode : BWNode {

	NSDictionary* _portTypeToInput;
	NSDictionary* _portTypeToOutput;
	NSMutableDictionary* _portTypeToFrameCounters;
	BWStillImageCaptureSettings* _currentResolvedStillImageCaptureSettings;
	BOOL _holdMessagesUntilAllInputsAreLive;
	NSMutableArray* _queuedMessages;
	NSMutableArray* _inputsForQueuedMessages;

}
+(void)initialize;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeType;
-(void)_deliverQueuedMessages;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(id)nodeSubType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)_resetStillImageCaptureState;
-(id)outputForPortType:(id)arg1 ;
-(void)_handleZeroShutterLagSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)_setupStillImageCaptureStateWithResolvedStillImageCaptureSettings:(id)arg1 ;
-(BOOL)_isCaptureComplete;
-(void)_handleMessage:(id)arg1 fromInput:(id)arg2 ;
-(id)inputForPortType:(id)arg1 ;
-(id)initWithPortTypes:(id)arg1 ;
-(void)dealloc;
@end
