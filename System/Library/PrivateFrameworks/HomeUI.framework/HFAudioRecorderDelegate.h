/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HFAudioRecorderDelegate <NSObject>
@optional
-(void)didUpdateAveragePower:(float)arg1;
-(void)audioRecorderDidStartRecording:(id)arg1;
-(void)audioRecorderFailedToStartRecording:(id)arg1;
-(void)audioRecorderFailedToFinishRecording:(id)arg1;
-(void)audioRecorderFinishedRecording:(id)arg1 audioFile:(id)arg2;

@end

