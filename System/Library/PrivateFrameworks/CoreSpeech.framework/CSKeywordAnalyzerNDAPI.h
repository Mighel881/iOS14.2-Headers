/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CSKeywordAnalyzerNDAPIScoreDelegate;
@class CSNovDetector;

@interface CSKeywordAnalyzerNDAPI : NSObject {

	CSNovDetector* _novDetector;
	unsigned long long _startAnalyzeSampleCount;
	BOOL _isStartSampleCountMarked;
	unsigned long long _lastSampleFed;
	unsigned long long _sampleFedWrapAroundOffset;
	unsigned _activePhraseId;
	unsigned long long _activeChannel;
	id<CSKeywordAnalyzerNDAPIScoreDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long activeChannel;                                     //@synthesize activeChannel=_activeChannel - In the implementation block
@property (assign,nonatomic) unsigned activePhraseId;                                              //@synthesize activePhraseId=_activePhraseId - In the implementation block
@property (assign,nonatomic,__weak) id<CSKeywordAnalyzerNDAPIScoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(unsigned)activePhraseId;
-(unsigned long long)activeChannel;
-(id<CSKeywordAnalyzerNDAPIScoreDelegate>)delegate;
-(id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2 ;
-(void)_setStartAnalyzeTime:(unsigned long long)arg1 ;
-(id)getSuperVectorWithEndPoint:(unsigned long long)arg1 ;
-(void)setDelegate:(id<CSKeywordAnalyzerNDAPIScoreDelegate>)arg1 ;
-(void)reset;
-(void)setActivePhraseId:(unsigned)arg1 ;
-(id)getAnalyzedMpVtResults;
-(void)resetBest;
-(float)getRejectLoggingThreshold;
-(float)getThreshold;
-(void)setActiveChannel:(unsigned long long)arg1 ;
-(void)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(void)analyzeWavFloatData:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(void)processAudioChunk:(id)arg1 ;
-(float)getLoggingThreshold;
-(void)_resetStartAnalyzeTime;
-(id)getAnalyzedResult;
-(id)_keywordAnalyzerNDAPIResultForPhraseId:(unsigned)arg1 withNovDetectorResult:(id)arg2 ;
@end

