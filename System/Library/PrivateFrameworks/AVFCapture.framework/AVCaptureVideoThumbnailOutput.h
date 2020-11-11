/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureOutput.h>

@class AVCaptureVideoThumbnailOutputInternal, NSArray;

@interface AVCaptureVideoThumbnailOutput : AVCaptureOutput {

	AVCaptureVideoThumbnailOutputInternal* _internal;

}

@property (assign,nonatomic) id<AVCaptureVideoThumbnailContentsDelegate> thumbnailContentsDelegate; 
@property (nonatomic,copy) NSArray * filters; 
@property (assign,nonatomic) CGSize thumbnailSize; 
+(void)initialize;
+(CGRect)contentsRectForFilterAtIndex:(unsigned long long)arg1 thumbnailSize:(CGSize)arg2 filterCount:(unsigned long long)arg3 ;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(id)connectionMediaTypes;
-(void)setThumbnailContentsDelegate:(id<AVCaptureVideoThumbnailContentsDelegate>)arg1 ;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)setFilters:(NSArray *)arg1 ;
-(void)safelyHandleServerConnectionDeathForFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(CGSize)thumbnailSize;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(NSArray *)filters;
-(id)init;
-(void)_signalInvalidationOfPropagatedContentsIfNecessary;
-(id<AVCaptureVideoThumbnailContentsDelegate>)thumbnailContentsDelegate;
-(void)dealloc;
@end
