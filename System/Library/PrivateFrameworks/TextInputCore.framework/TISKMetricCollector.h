/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TITypingSessionAggregatedEventObserver.h>

@protocol OS_dispatch_queue, TISensorWriterWrapper;
@class TIInputMode, NSString, NSMutableDictionary, NSMutableArray, NSArray, TIKeyboardInput, TIUserModelDataStore, NSObject, TITypingSession;

@interface TISKMetricCollector : NSObject <TITypingSessionAggregatedEventObserver> {

	TIInputMode* _inputMode;
	NSString* _wordSeparator;
	NSMutableDictionary* _touchToEventMap;
	NSMutableArray* _events;
	NSArray* _sortedEvents;
	NSMutableArray* _touches;
	NSMutableArray* _layoutIDs;
	NSMutableArray* _taps;
	long long _wordPosition;
	TIKeyboardInput* _lastInput;
	long long _currentWordPosition;
	long long _eventOrder;
	NSMutableArray* _currentSessionSamplesArray;
	unsigned long long _aggregatedWordThreshold;
	BOOL _isLoaded;
	TIUserModelDataStore* _userModelDataStore;
	BOOL _accentedLanguage;
	NSMutableArray* _accentedLayoutsMap;
	NSString* _idenitifer;
	NSObject*<OS_dispatch_queue> _workQueue;
	int _tccNotifyToken;
	BOOL _isTCCAuthorized;
	BOOL _skipTCCAuthorization;
	unsigned long long _wordAccumulationThreshold;
	id<TISensorWriterWrapper> _dataWriter;
	NSMutableArray* _savedSessionSamplesArray;
	TITypingSession* _typingSession;

}

@property (assign,nonatomic) unsigned long long wordAccumulationThreshold;              //@synthesize wordAccumulationThreshold=_wordAccumulationThreshold - In the implementation block
@property (nonatomic,retain) id<TISensorWriterWrapper> dataWriter;                      //@synthesize dataWriter=_dataWriter - In the implementation block
@property (nonatomic,retain) NSMutableArray * savedSessionSamplesArray;                 //@synthesize savedSessionSamplesArray=_savedSessionSamplesArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentSessionSamplesArray;               //@synthesize currentSessionSamplesArray=_currentSessionSamplesArray - In the implementation block
@property (nonatomic,retain) TITypingSession * typingSession;                           //@synthesize typingSession=_typingSession - In the implementation block
@property (assign,nonatomic) BOOL isLoaded;                                             //@synthesize isLoaded=_isLoaded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)makeMetricCollector:(id)arg1 separator:(id)arg2 wordsThreshold:(unsigned long long)arg3 isTesting:(BOOL)arg4 ;
-(void)_clear;
-(void)setSavedSessionSamplesArray:(NSMutableArray *)arg1 ;
-(void)_consumeUserAction:(id)arg1 ;
-(TITypingSession *)typingSession;
-(id)eventsDescription:(BOOL)arg1 ;
-(void)_processEvents;
-(double)totalTimeSpan;
-(id)_mapIDToLayout:(unsigned long long)arg1 ;
-(void)handleTypingSession:(id)arg1 ;
-(void)_consumeWordEntry:(id)arg1 ;
-(void)_setupTCCAuthNotification;
-(void)placeTaskOnWorkQueue:(/*^block*/id)arg1 ;
-(NSMutableArray *)currentSessionSamplesArray;
-(id)eventsDescription;
-(void)setupSessionSamplesForLayouts;
-(void)setIsLoaded:(BOOL)arg1 ;
-(void)setCurrentSessionSamplesArray:(NSMutableArray *)arg1 ;
-(void)_persistSavedSessionSampleArray;
-(NSMutableArray *)savedSessionSamplesArray;
-(BOOL)isLoaded;
-(id)init:(id)arg1 separator:(id)arg2 wordsThreshold:(unsigned long long)arg3 accentedLanguage:(BOOL)arg4 skipTCCAuthorization:(BOOL)arg5 ;
-(void)_mapTapsToEvents;
-(id)consumeTypingSession:(id)arg1 ;
-(void)_coalesceTaps;
-(void)testTCCAuthorization;
-(void)_metricWalk;
-(void)setTypingSession:(TITypingSession *)arg1 ;
-(id)_retrieveSavedSessionSampleArray;
-(id)_findSessionWithLayoutOfSameDimentions:(id)arg1 layout:(id)arg2 ;
-(unsigned long long)wordAccumulationThreshold;
-(id<TISensorWriterWrapper>)dataWriter;
-(void)_mergeStats:(id)arg1 ;
-(void)_resetConsumeState;
-(void)_haltSessionTypingTimer:(id)arg1 event:(id)arg2 ;
-(void)setDataWriter:(id<TISensorWriterWrapper>)arg1 ;
-(void)sessionDidEnd:(id)arg1 aligned:(id)arg2 ;
-(double)totalTimeSpanFromLastTap;
-(id)init:(id)arg1 separator:(id)arg2 wordsThreshold:(unsigned long long)arg3 accentedLanguage:(BOOL)arg4 ;
-(id)init:(id)arg1 ;
-(id)_consumeTypingSession:(id)arg1 ;
-(void)_loadStatsFromDataStore;
-(void)_reportRipeBuckets;
-(void)dealloc;
-(id)init:(id)arg1 separator:(id)arg2 wordsThreshold:(unsigned long long)arg3 ;
-(void)setWordAccumulationThreshold:(unsigned long long)arg1 ;
@end

