/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AFAudioPowerProviding <NSObject>
@required
-(void)willBeginAccessPower;
-(BOOL)getAveragePower:(float*)arg1 andPeakPower:(float*)arg2;
-(void)didEndAccessPower;

@end

