/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitBackingStore/HMBModelUnindexedQuery.h>

@class NSString, NSArray;

@interface HMBModelIndexedQuery : HMBModelUnindexedQuery {

	NSString* _indexNameSuffix;
	NSArray* _indexedColumns;

}

@property (nonatomic,readonly) NSString * indexNameSuffix;              //@synthesize indexNameSuffix=_indexNameSuffix - In the implementation block
@property (nonatomic,readonly) NSArray * indexedColumns;                //@synthesize indexedColumns=_indexedColumns - In the implementation block
@property (nonatomic,readonly) NSString * indexName; 
+(id)queryWithSQLPredicate:(id)arg1 ascending:(BOOL)arg2 indexedProperties:(id)arg3 arguments:(id)arg4 ;
-(BOOL)hasExpectedIndexes;
-(NSArray *)indexedColumns;
-(NSString *)indexNameSuffix;
-(NSString *)indexName;
-(id)initWithSQLPredicate:(id)arg1 sqlColumns:(id)arg2 initialSequence:(id)arg3 maximumRowsPerSelect:(unsigned long long)arg4 indexNameSuffix:(id)arg5 indexedColumns:(id)arg6 arguments:(id)arg7 ;
@end

