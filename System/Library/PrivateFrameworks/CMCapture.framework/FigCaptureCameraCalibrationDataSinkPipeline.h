/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureRemoteQueueSinkPipeline.h>

@class NSString;

@interface FigCaptureCameraCalibrationDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {

	NSString* _sourceID;

}

@property (nonatomic,readonly) NSString * sourceID;              //@synthesize sourceID=_sourceID - In the implementation block
+(void)initialize;
-(int)_buildCameraCalibrationDataSinkPipelineWithConfiguration:(id)arg1 sourceOutput:(id)arg2 graph:(id)arg3 cameraInfoByPortType:(id)arg4 clientAuditToken:(SCD_Struct_Fi80)arg5 delegate:(id)arg6 ;
-(id)initWithConfiguration:(id)arg1 sourceOutput:(id)arg2 graph:(id)arg3 name:(id)arg4 cameraInfoByPortType:(id)arg5 clientAuditToken:(SCD_Struct_Fi80)arg6 delegate:(id)arg7 ;
-(NSString *)sourceID;
-(void)dealloc;
@end
