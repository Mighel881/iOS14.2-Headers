/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NviAudioDataReceiver <NviDataReceiver>
@property (nonatomic,readonly) BOOL receiveOnlyProcessedChannelData; 
@required
-(void)audioChunkAvailable:(id)arg1 numChannels:(unsigned long long)arg2 numSamplesPerChannel:(unsigned long long)arg3 startSampleId:(unsigned long long)arg4 atAbsMachTimestamp:(unsigned long long)arg5;
-(BOOL)receiveOnlyProcessedChannelData;

@end
