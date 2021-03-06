/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@class BWPixelBufferPool, FigM2MController;

@interface BWVisionLandmarkDetector : NSObject {

	BWPixelBufferPool* _faceDetectionBufferPool;
	FigM2MController* _m2mController;

}
+(void)initialize;
-(id)init;
-(int)prepareForDetectionWithInputVideoFormat:(id)arg1 ;
-(void)prewarmForDetection;
-(id)_detectLandmarksUsingInputPixelBuffer:(CVBufferRef)arg1 metadata:(id)arg2 outputFaceDetectionOrientation:(int*)arg3 includePoseAndQuality:(BOOL)arg4 ;
-(int)detectFaceLandmarksUsingSampleBuffer:(opaqueCMSampleBufferRef)arg1 attachingToSampleBuffer:(opaqueCMSampleBufferRef)arg2 includePoseAndQuality:(BOOL)arg3 ;
-(void)dealloc;
@end

