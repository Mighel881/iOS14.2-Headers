/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FigVisionDataCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedVisionDataSinkConfiguration : NSObject {

	FigVisionDataCaptureConnectionConfiguration* _visionDataConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _videoDataConnectionConfiguration;

}

@property (nonatomic,readonly) FigVisionDataCaptureConnectionConfiguration * visionDataConnectionConfiguration;              //@synthesize visionDataConnectionConfiguration=_visionDataConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * videoDataConnectionConfiguration;                    //@synthesize videoDataConnectionConfiguration=_videoDataConnectionConfiguration - In the implementation block
-(id)initWithVisionDataConnectionConfiguration:(id)arg1 videoDataConnectionConfiguration:(id)arg2 ;
-(FigVisionDataCaptureConnectionConfiguration *)visionDataConnectionConfiguration;
-(FigVideoCaptureConnectionConfiguration *)videoDataConnectionConfiguration;
-(void)dealloc;
@end

