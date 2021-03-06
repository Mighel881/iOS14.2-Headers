/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVCaptureDevice, AVCaptureDeviceFormat;

@interface AXMCaptureSettings : NSObject {

	AVCaptureDevice* _captureDevice;
	AVCaptureDeviceFormat* _captureFormat;

}

@property (nonatomic,retain) AVCaptureDevice * captureDevice;                    //@synthesize captureDevice=_captureDevice - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceFormat * captureFormat;              //@synthesize captureFormat=_captureFormat - In the implementation block
-(AVCaptureDevice *)captureDevice;
-(void)setCaptureDevice:(AVCaptureDevice *)arg1 ;
-(AVCaptureDeviceFormat *)captureFormat;
-(void)setCaptureFormat:(AVCaptureDeviceFormat *)arg1 ;
@end

