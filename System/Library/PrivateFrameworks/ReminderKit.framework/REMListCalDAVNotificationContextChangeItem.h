/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class REMListChangeItem, NSArray;

@interface REMListCalDAVNotificationContextChangeItem : NSObject {

	REMListChangeItem* _listChangeItem;

}

@property (nonatomic,retain) REMListChangeItem * listChangeItem;              //@synthesize listChangeItem=_listChangeItem - In the implementation block
@property (nonatomic,readonly) NSArray * calDAVNotifications; 
-(id)initWithListChangeItem:(id)arg1 ;
-(void)setListChangeItem:(REMListChangeItem *)arg1 ;
-(REMListChangeItem *)listChangeItem;
-(void)_addCalDAVNotification:(id)arg1 ;
-(void)removeCalDAVNotication:(id)arg1 ;
-(void)clearCalDAVNotifications;
-(id)addCalDAVNotificationWithUUIDString:(id)arg1 hostURL:(id)arg2 externalIdentifier:(id)arg3 externalModificationTag:(id)arg4 ;
-(void)updateCalDAVNotification:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(NSArray *)calDAVNotifications;
@end
