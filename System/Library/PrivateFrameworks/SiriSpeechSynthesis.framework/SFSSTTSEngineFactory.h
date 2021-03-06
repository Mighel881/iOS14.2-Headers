/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:49:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface SFSSTTSEngineFactory : NSObject {

	NSMutableDictionary* _keyToTTSEngineMap;

}

@property (nonatomic,retain) NSMutableDictionary * keyToTTSEngineMap;              //@synthesize keyToTTSEngineMap=_keyToTTSEngineMap - In the implementation block
+(id)sharedInstance;
+(id)getKeyByVoiceAsset:(id)arg1 resourceAsset:(id)arg2 ;
-(id)init;
-(id)getEngineByVoiceAsset:(id)arg1 resourceAsset:(id)arg2 ;
-(NSMutableDictionary *)keyToTTSEngineMap;
-(void)removeEngineByVoiceAsset:(id)arg1 resourceAsset:(id)arg2 ;
-(void)removeAllEngines;
-(void)setKeyToTTSEngineMap:(NSMutableDictionary *)arg1 ;
@end

