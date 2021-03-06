/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudDocsDaemon/BRCSyncDownOperation.h>

@class NSString, CKQueryCursor, NSMutableArray;

@interface BRCMigrationQueryOperation : BRCSyncDownOperation {

	NSString* _migrationKey;
	CKQueryCursor* _continuationCursor;
	NSMutableArray* _shareIDsToFetch;

}
+(id)folderSharesMigrationKey;
+(id)folderShareAliasesMigrationKey;
+(id)documentSharesMigrationKey;
+(id)allMigrationKeysOrdered;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)main;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)initWithServerZone:(id)arg1 migrationKey:(id)arg2 continuationCursor:(id)arg3 ;
-(BOOL)_saveFetchedRecords:(id)arg1 cursor:(id)arg2 error:(id*)arg3 ;
-(void)_performQuery:(id)arg1 recordFetchedBlock:(/*^block*/id)arg2 cursorUpdatedBlock:(/*^block*/id)arg3 desiredKeys:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)_updatedContinuationCursor:(id)arg1 fetchedRecords:(id)arg2 error:(id*)arg3 ;
-(void)_performAfterQueryingForShareIDsOfFolders:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performAfterQueryingForShareAliasesWithCompletion:(/*^block*/id)arg1 ;
@end

