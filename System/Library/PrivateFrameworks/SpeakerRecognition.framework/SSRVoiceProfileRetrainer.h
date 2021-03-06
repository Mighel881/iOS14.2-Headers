/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSURL;


@protocol SSRVoiceProfileRetrainer <NSObject>
@property (nonatomic,readonly) NSURL * modelFilePath; 
@property (nonatomic,readonly) BOOL implicitTrainingRequired; 
@property (nonatomic,readonly) unsigned long long retrainerType; 
@required
-(NSURL *)modelFilePath;
-(id)initWithVoiceRetrainingContext:(id)arg1;
-(BOOL)resetModelForRetraining;
-(void)addUtterances:(id)arg1 withPolicy:(/*^block*/id)arg2 withCompletion:(/*^block*/id)arg3;
-(BOOL)needsRetrainingWithAudioFiles:(id)arg1;
-(void)purgeLastSpeakerEmbedding;
-(id)purgeConfusionInformationWithPolicy:(/*^block*/id)arg1;
-(BOOL)implicitTrainingRequired;
-(unsigned long long)retrainerType;

@end

