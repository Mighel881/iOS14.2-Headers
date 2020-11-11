/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface PPEventsAggregator : NSObject {

	NSArray* _eventsPool;

}

@property (nonatomic,retain) NSArray * eventsPool;              //@synthesize eventsPool=_eventsPool - In the implementation block
-(id)sortedEvents;
-(id)initWithEventsPool:(id)arg1 ;
-(id)tripCandidatesFromEventsPool;
-(BOOL)isEvent:(id)arg1 dupeOfEvent:(id)arg2 ;
-(void)dedupeEventsInPool;
-(NSArray *)eventsPool;
-(void)setEventsPool:(NSArray *)arg1 ;
@end
