/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPAssistantMusicLogEvent.h>

@interface MPAssistantMusicAssetLoadLogEvent : MPAssistantMusicLogEvent {

	double _duration;

}

@property (assign,nonatomic) double duration;              //@synthesize duration=_duration - In the implementation block
-(long long)eventCode;
-(id)eventName;
-(void)setDuration:(double)arg1 ;
-(id)eventPayload;
-(double)duration;
@end
