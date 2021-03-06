/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSArray;

@interface NCNotificationCollapsingQueue : NSObject {

	unsigned long long _collapsingThreshold;
	NSMutableArray* _requests;

}

@property (nonatomic,retain) NSMutableArray * requests;                           //@synthesize requests=_requests - In the implementation block
@property (assign,nonatomic) unsigned long long collapsingThreshold;              //@synthesize collapsingThreshold=_collapsingThreshold - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * enqueuedRequestIdentifiers; 
-(id)notificationRequestsCoalescebleWithCoalescedRequest:(id)arg1 ;
-(void)removeNotificationRequest:(id)arg1 ;
-(id)peekNextNotificationRequest;
-(id)init;
-(unsigned long long)_indexOfRequestMatchingNotificationRequest:(id)arg1 ;
-(void)addNotificationRequest:(id)arg1 ;
-(NSArray *)enqueuedRequestIdentifiers;
-(id)_collapsedNotificationRequestForNotificationRequest:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)count;
-(NSMutableArray *)requests;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(void)_insertPreemptingNotificationRequest:(id)arg1 ;
-(unsigned long long)_collapsedCountForCollapsibleRequests:(id)arg1 ;
-(BOOL)containsNotificationRequest:(id)arg1 ;
-(id)_requestsCollapsibleWithNotificationRequest:(id)arg1 ;
-(BOOL)containsNotificationRequestMatchingRequest:(id)arg1 ;
-(void)replaceNotificationRequest:(id)arg1 ;
-(void)setCollapsingThreshold:(unsigned long long)arg1 ;
-(unsigned long long)collapsingThreshold;
-(id)_collapsedNotificationRequestFromCollapsibleRequests:(id)arg1 ;
-(id)peekNextNotificationRequestPassingTest:(/*^block*/id)arg1 ;
@end

