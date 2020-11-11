/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FCNetworkReachabilityObserving.h>
#import <libobjc.A.dylib/FCOperationThrottlerDelegate.h>

@protocol OS_dispatch_queue, FCOperationThrottler;
@class NSObject, NSMutableArray, NSMutableIndexSet, FCKeyValueStore, NSHashTable, NSArray, NSString;

@interface FCNetworkBehaviorMonitor : NSObject <FCNetworkReachabilityObserving, FCOperationThrottlerDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableArray* _sessions;
	NSMutableIndexSet* _sessionIDsThisLaunch;
	NSMutableArray* _events;
	FCKeyValueStore* _localStore;
	id<FCOperationThrottler> _saveThrottler;
	NSHashTable* _observers;

}

@property (nonatomic,copy,readonly) NSArray * sessions; 
@property (nonatomic,copy,readonly) NSArray * networkEvents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)networkEvents;
-(void)removeObserver:(id)arg1 ;
-(id)_respondingPOPFromEvent:(id)arg1 ;
-(id)init;
-(void)_visitEventGroupsFromDate:(id)arg1 toDate:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)initTransient;
-(int)_cacheStateFromEvent:(id)arg1 ;
-(BOOL)_shouldFilterNetworkEvent:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)_sanitizeNetworkEvent:(id)arg1 ;
-(NSArray *)sessions;
-(void)wifiReachabilityDidChange:(id)arg1 ;
-(void)logNetworkEvent:(id)arg1 ;
-(void)populateTelemetry:(id)arg1 withNetworkEventsFromDate:(id)arg2 toDate:(id)arg3 ;
-(id)initWithCacheDirectory:(id)arg1 ;
-(void)operationThrottlerPerformOperation:(id)arg1 ;
@end
