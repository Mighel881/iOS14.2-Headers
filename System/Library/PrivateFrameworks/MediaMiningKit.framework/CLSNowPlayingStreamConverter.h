/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CLSNowPlayingStreamConverter : NSObject {

	unsigned long long _options;

}

@property (assign,nonatomic) unsigned long long options;              //@synthesize options=_options - In the implementation block
+(unsigned long long)defaultOptions;
+(id)recognizedMusicSources;
-(void)setOptions:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)options;
-(id)eventsFromDuetKnowledgeEvents:(id)arg1 ;
-(id)eventFromDuetKnoweledgeEvent:(id)arg1 ;
-(BOOL)_canUseEvent:(id)arg1 ;
@end

