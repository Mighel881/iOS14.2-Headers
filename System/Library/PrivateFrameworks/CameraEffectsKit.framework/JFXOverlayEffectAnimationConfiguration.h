/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class JFXOverlayEffectFrame;

@interface JFXOverlayEffectAnimationConfiguration : NSObject {

	JFXOverlayEffectFrame* _startFrame;
	JFXOverlayEffectFrame* _endFrame;

}

@property (nonatomic,readonly) JFXOverlayEffectFrame * startFrame;              //@synthesize startFrame=_startFrame - In the implementation block
@property (nonatomic,readonly) JFXOverlayEffectFrame * endFrame;                //@synthesize endFrame=_endFrame - In the implementation block
-(JFXOverlayEffectFrame *)endFrame;
-(JFXOverlayEffectFrame *)startFrame;
-(id)initWithStartFrame:(id)arg1 endFrame:(id)arg2 ;
@end

