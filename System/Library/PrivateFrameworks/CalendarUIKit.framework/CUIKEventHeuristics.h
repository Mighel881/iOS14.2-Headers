/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CUIKEventHeuristics : NSObject
+(id)_sortedAndFilteredEventsForPredicate:(id)arg1 filterOptions:(unsigned long long)arg2 sortMethod:(unsigned long long)arg3 eventStore:(id)arg4 ;
+(id)_sortedEvents:(id)arg1 withMethod:(unsigned long long)arg2 ;
+(BOOL)_shouldFilterEvent:(id)arg1 filterOptions:(unsigned long long)arg2 ;
+(id)todaysEventsInCalendars:(id)arg1 filterOptions:(unsigned long long)arg2 sortMethod:(unsigned long long)arg3 eventStore:(id)arg4 ;
+(id)tomorrowsEventsInCalendars:(id)arg1 filterOptions:(unsigned long long)arg2 sortMethod:(unsigned long long)arg3 eventStore:(id)arg4 ;
+(id)upcomingEventsInCalendars:(id)arg1 onlyReturnFirstEvents:(BOOL)arg2 filterOptions:(unsigned long long)arg3 sortMethod:(unsigned long long)arg4 eventStore:(id)arg5 ;
@end

