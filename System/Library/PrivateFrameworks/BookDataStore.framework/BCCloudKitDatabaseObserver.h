/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BCCloudKitDatabaseObserver <NSObject>
@required
-(void)databaseController:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3;
-(void)databaseController:(id)arg1 reachabilityChanged:(BOOL)arg2;
-(void)databaseController:(id)arg1 attachmentChanged:(BOOL)arg2;
-(void)databaseController:(id)arg1 recordsChanged:(id)arg2;
-(void)databaseController:(id)arg1 fetchedAllRecordsInZone:(id)arg2;

@end

