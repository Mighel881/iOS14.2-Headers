/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMVideoRecordFaceMetadataCommand : CAMCaptureCommand {

	BOOL __enabled;

}

@property (getter=_isEnabled,nonatomic,readonly) BOOL _enabled;              //@synthesize _enabled=__enabled - In the implementation block
-(id)initWithEnabled:(BOOL)arg1 ;
-(void)_addMetadataConnectionForPortType:(id)arg1 videoDeviceInput:(id)arg2 movieFileOutput:(id)arg3 captureSession:(id)arg4 ;
-(void)executeWithContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_isEnabled;
-(id)_connectionForMovieFileOutput:(id)arg1 metadataPortType:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

