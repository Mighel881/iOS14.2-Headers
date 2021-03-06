/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CALNNotificationStorage.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface CALNInMemoryNotificationStorage : NSObject <CALNNotificationStorage> {

	NSMutableDictionary* _recordMap;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * recordMap;                     //@synthesize recordMap=_recordMap - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)init;
-(void)removeAllNotificationRecords;
-(void)_removeNotificationRecordsPassingTest:(/*^block*/id)arg1 ;
-(void)addNotificationRecord:(id)arg1 ;
-(void)addNotificationRecords:(id)arg1 ;
-(NSMutableDictionary *)recordMap;
-(void)_addNotificationRecord:(id)arg1 ;
-(id)notificationRecords;
-(id)_notificationRecords;
-(void)removeNotificationRecordsPassingTest:(/*^block*/id)arg1 ;
@end

