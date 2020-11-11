/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@protocol MTLCommandQueue;
@class NSString, FigMetalContext, FigMetalHistogram, NSDictionary;

@interface BWMeteorHeadroomNode : BWNode {

	NSString* _lastCaptureRequestIdentifier;
	float _lastMeteorHeadroom;
	float _gainMapMainImageDownscalingFactor;
	int _headroomProcessingType;
	FigMetalContext* _metalContext;
	id<MTLCommandQueue> _metalCommandQueue;
	FigMetalHistogram* _histogram;
	NSDictionary* _meteorHeadroomParametersByPortType;

}
+(void)initialize;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)setGainMapMainImageDownscalingFactor:(float)arg1 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(id)initWithNodeConfiguration:(id)arg1 sensorConfigurationsByPortType:(id)arg2 ;
-(void)setHeadroomProcessingType:(int)arg1 ;
-(int)headroomProcessingType;
-(float)gainMapMainImageDownscalingFactor;
-(void)dealloc;
@end
