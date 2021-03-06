/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSObject, VCPFaceTimeSession, NSMutableArray;

@interface VCPVideoChatAnalysis : NSObject {

	NSObject*<OS_dispatch_queue> _detectionQueue;
	VCPFaceTimeSession* _faceTimeSession;
	NSMutableArray* _faces;
	BOOL _finished;

}
+(id)videoChatAnalysis;
-(id)init;
-(int)detectFaces:(CVBufferRef)arg1 ;
-(void)checkAddFaces;
-(int)analyzeFrame:(CVBufferRef)arg1 ;
-(BOOL)persistAnalysis;
@end

