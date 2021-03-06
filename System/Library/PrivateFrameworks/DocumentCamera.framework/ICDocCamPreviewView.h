/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class AVCaptureVideoPreviewLayer, AVCaptureSession;

@interface ICDocCamPreviewView : UIView

@property (nonatomic,readonly) AVCaptureVideoPreviewLayer * videoPreviewLayer; 
@property (nonatomic,retain) AVCaptureSession * session; 
+(Class)layerClass;
-(AVCaptureVideoPreviewLayer *)videoPreviewLayer;
-(void)setSession:(AVCaptureSession *)arg1 ;
-(AVCaptureSession *)session;
@end

