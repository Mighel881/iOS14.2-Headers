/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@interface CFXNextRenderedFrameCallback : NSObject {

	/*^block*/id _block;
	SCD_Struct_JF3 _sendAfterRenderTime;

}

@property (nonatomic,readonly) SCD_Struct_JF3 sendAfterRenderTime;              //@synthesize sendAfterRenderTime=_sendAfterRenderTime - In the implementation block
@property (nonatomic,readonly) id block;                                        //@synthesize block=_block - In the implementation block
-(id)block;
-(id)initWithBlock:(/*^block*/id)arg1 sendAfterRenderTime:(SCD_Struct_JF3)arg2 ;
-(SCD_Struct_JF3)sendAfterRenderTime;
@end

