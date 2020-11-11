/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/WBSURLCompletionMatchData.h>

@class NSArray, NSString;

@interface WBSHistoryServiceURLCompletionMatchData : NSObject <WBSURLCompletionMatchData> {

	unique_ptr<SafariShared::_HistoryStreamedMatchData, std::__1::default_delete<SafariShared::_HistoryStreamedMatchData> >* _streamData;
	NSArray* _autocompleteTriggersAsStringArray;
	NSArray* _entries;

}

@property (nonatomic,copy) NSArray * entries;                                     //@synthesize entries=_entries - In the implementation block
@property (assign,nonatomic) double lastVisitedTimeInterval; 
@property (nonatomic,readonly) BOOL lastVisitWasFailure; 
@property (assign,nonatomic) long long visitCount; 
@property (nonatomic,readonly) HistoryStreamedMatchData* streamData; 
@property (nonatomic,readonly) NSString * originalURLString; 
@property (nonatomic,readonly) BOOL containsBookmark; 
@property (nonatomic,readonly) BOOL shouldPreload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)entries;
-(id)init;
-(id)initWithStreamData:(unique_ptr<SafariShared::_HistoryStreamedMatchData, std::__1::default_delete<SafariShared::_HistoryStreamedMatchData> >*)arg1 entries:(id)arg2 ;
-(id)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)arg1 ;
-(NSString *)originalURLString;
-(BOOL)containsBookmark;
-(id)userVisibleURLStringForPageTitleAtIndex:(unsigned long long)arg1 ;
-(id)userVisibleURLStringAtIndex:(unsigned long long)arg1 ;
-(void)enumeratePageTitlesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateUserVisibleURLsUsingBlock:(/*^block*/id)arg1 ;
-(float)topSitesScoreForPageTitleAtTime:(double)arg1 ;
-(float)topSitesScoreForURLStringAtIndex:(unsigned long long)arg1 atTime:(double)arg2 ;
-(long long)visitCount;
-(void)setEntries:(NSArray *)arg1 ;
-(id)matchDataByMergingWithMatchData:(id)arg1 ;
-(BOOL)matchesAutocompleteTrigger:(id)arg1 ;
-(BOOL)shouldPreload;
-(void)setVisitCount:(long long)arg1 ;
-(void)setLastVisitedTimeInterval:(double)arg1 ;
-(void)setAutocompleteTriggers:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithLastVisitWasFailure:(BOOL)arg1 visitWasFromThisDevice:(BOOL)arg2 ;
-(HistoryStreamedMatchData*)streamData;
-(BOOL)lastVisitWasFailure;
-(double)lastVisitedTimeInterval;
-(id)pageTitleAtIndex:(unsigned long long)arg1 ;
@end
