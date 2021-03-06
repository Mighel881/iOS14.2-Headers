/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureSynchronizedData.h>

@class AVCaptureSynchronizedVisionDataInternal;

@interface AVCaptureSynchronizedVisionData : AVCaptureSynchronizedData {

	AVCaptureSynchronizedVisionDataInternal* _internal;

}

@property (readonly) CVBufferRef visionDataPixelBuffer; 
@property (readonly) BOOL visionDataWasDropped; 
@property (readonly) long long droppedReason; 
-(id)_initWithVisionDataPixelBuffer:(CVBufferRef)arg1 timestamp:(SCD_Struct_AV0)arg2 visionDataWasDropped:(BOOL)arg3 droppedReason:(long long)arg4 ;
-(CVBufferRef)visionDataPixelBuffer;
-(long long)droppedReason;
-(BOOL)visionDataWasDropped;
-(void)dealloc;
@end

