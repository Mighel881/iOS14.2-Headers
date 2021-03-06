/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <libobjc.A.dylib/BCSBatchable.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface BCSPersistentStore : NSObject <BCSBatchable> {

	sqlite3Ref _openedDatabase;
	long long _batchCount;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) long long batchCount;                            //@synthesize batchCount=_batchCount - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) sqlite3Ref openedDatabase;                     //@synthesize openedDatabase=_openedDatabase - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const char*)debugQueueName;
-(id)databasePath;
-(const char*)schema;
-(id)init;
-(void)endBatch;
-(long long)batchCount;
-(void)setBatchCount:(long long)arg1 ;
-(BOOL)_setDatabaseSchemaVersion:(long long)arg1 forDatabase:(sqlite3Ref)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(long long)schemaVersion;
-(void)dealloc;
-(void)beginBatch;
-(sqlite3Ref)openedDatabase;
-(void)schemaVersionWillChangeForDatabase:(sqlite3Ref)arg1 fromSchemaVersion:(long long)arg2 toSchemaVersion:(long long)arg3 ;
-(sqlite3Ref)_createDatabaseFileAtPath:(id)arg1 ;
-(BOOL)_generateTableWithDatabase:(sqlite3Ref)arg1 ;
-(long long)_databaseSchemaVersionForDatabase:(sqlite3Ref)arg1 ;
-(void)schemaVersionDidChangeForDatabase:(sqlite3Ref)arg1 fromSchemaVersion:(long long)arg2 toSchemaVersion:(long long)arg3 ;
-(void)queue_openDatabaseIfNecessary;
-(void)queue_closeDatabase;
-(BOOL)deleteDatabaseFile;
@end

