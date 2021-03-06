/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDate, CKServerChangeToken, NSArray;


@protocol SCKZoneStore
@property (nonatomic,copy) NSDate * lastSyncDate; 
@property (nonatomic,copy) NSDate * lastDirtyDate; 
@property (nonatomic,copy) CKServerChangeToken * serverChangeToken; 
@property (nonatomic,copy) NSArray * serverRecords; 
@property (nonatomic,copy) NSArray * pendingCommands; 
@required
-(NSArray *)serverRecords;
-(NSDate *)lastSyncDate;
-(NSArray *)pendingCommands;
-(void)setLastSyncDate:(id)arg1;
-(void)clearPendingCommandsUpToCount:(unsigned long long)arg1;
-(CKServerChangeToken *)serverChangeToken;
-(void)setServerRecords:(id)arg1;
-(void)setServerChangeToken:(id)arg1;
-(void)applyServerRecordsDiff:(id)arg1;
-(void)setLastDirtyDate:(id)arg1;
-(void)addPendingCommands:(id)arg1;
-(NSDate *)lastDirtyDate;
-(void)setPendingCommands:(id)arg1;

@end

