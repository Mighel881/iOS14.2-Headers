/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CALNTimeToLeaveEventTrackerUtilities : NSObject
+(id)ttlEventTrackerAlertTypeForTravelAdvisoryTimelinessPeriod:(unsigned long long)arg1 ;
+(unsigned long long)ttlEventTrackerTransportTypeForGEOTransportType:(int)arg1 ;
+(unsigned long long)ttlEventTrackerETATypeForHypothesis:(id)arg1 ;
+(unsigned long long)ttlEventTrackerTravelStateForHypothesisTravelState:(long long)arg1 ;
+(unsigned long long)ttlEventTrackerAlertTypeForDate:(id)arg1 hypothesis:(id)arg2 ;
+(void)trackDirectionsEngagedForNotificationUsingTTLEventTracker:(id)arg1 hypothesis:(id)arg2 hasSuggestedLocation:(BOOL)arg3 isOnSharedCalendar:(BOOL)arg4 ;
+(void)trackEmailEngagedForNotificationUsingTTLEventTracker:(id)arg1 hypothesis:(id)arg2 hasSuggestedLocation:(BOOL)arg3 isOnSharedCalendar:(BOOL)arg4 ;
@end
