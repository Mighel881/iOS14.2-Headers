/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDSQLiteStatement.h>

@class HDDatabaseTransaction;

@interface HDMetadataValueStatement : HDSQLiteStatement {

	HDDatabaseTransaction* _transaction;

}

@property (nonatomic,readonly) HDDatabaseTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
+(id)metadataValueStatementWithTransaction:(id)arg1 ;
-(BOOL)enumerateResultsForObjectID:(long long)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)initWithTransaction:(id)arg1 ;
-(HDDatabaseTransaction *)transaction;
@end

