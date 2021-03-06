/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/PFCloudKitImportRecordsWorkItem.h>

@class NSString, NSDate, CKQueryCursor;

@interface PFCloudKitCKQueryBackedImportWorkItem : PFCloudKitImportRecordsWorkItem {

	NSString* _recordType;
	NSDate* _maxModificationDate;
	CKQueryCursor* _queryCursor;

}

@property (nonatomic,readonly) NSString * recordType;                   //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,retain) NSDate * maxModificationDate;              //@synthesize maxModificationDate=_maxModificationDate - In the implementation block
@property (nonatomic,retain) CKQueryCursor * queryCursor;               //@synthesize queryCursor=_queryCursor - In the implementation block
-(NSString *)recordType;
-(CKQueryCursor *)queryCursor;
-(void)addUpdatedRecord:(id)arg1 ;
-(void)setQueryCursor:(CKQueryCursor *)arg1 ;
-(id)newCKQueryOperationFromMetadataInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
-(NSDate *)maxModificationDate;
-(void)queryOperationFinishedWithCursor:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)applyAccumulatedChangesToStore:(id)arg1 inManagedObjectContext:(id)arg2 withStoreMonitor:(id)arg3 madeChanges:(BOOL*)arg4 error:(id*)arg5 ;
-(BOOL)updateMetadataForAccumulatedChangesInContext:(id)arg1 inStore:(id)arg2 error:(id*)arg3 ;
-(BOOL)commitMetadataChangesWithContext:(id)arg1 forStore:(id)arg2 error:(id*)arg3 ;
-(id)initForRecordType:(id)arg1 withOptions:(id)arg2 request:(id)arg3 ;
-(void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMaxModificationDate:(NSDate *)arg1 ;
-(id)description;
-(void)dealloc;
@end

