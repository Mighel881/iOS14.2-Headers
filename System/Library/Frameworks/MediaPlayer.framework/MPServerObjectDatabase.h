/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MPMediaKitEntityRelationshipPayloadProvider.h>

@protocol OS_dispatch_queue;
@class NSObject, MSVSQLDatabase, NSHashTable, NSString;

@interface MPServerObjectDatabase : NSObject <MPMediaKitEntityRelationshipPayloadProvider> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	MSVSQLDatabase* _database;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,readonly) MSVSQLDatabase * database;                             //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                               //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServerObjectDatabase;
+(void)setPrefersInMemoryDatabase:(BOOL)arg1 ;
+(BOOL)prefersInMemoryDatabase;
-(BOOL)_createDatabaseSchema;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(id)_initWithDatabaseCreationBlock:(/*^block*/id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(id)assetsMatchingIdentifierSet:(id)arg1 ;
-(id)modelObjectMatchingIdentifierSet:(id)arg1 propertySet:(id)arg2 ;
-(BOOL)importAssetsFromRequest:(id)arg1 error:(id*)arg2 ;
-(void)addObserver:(id)arg1 ;
-(id)payloadForRelatedEntityWithIdentifierSet:(id)arg1 ;
-(id)assetsWithMiniSINFsMatchingIdentifierSet:(id)arg1 ;
-(void)enumerateAssetsMissingSINFsForHashedPersonID:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)relatedIdentifierSetsForParentIdentifierSet:(id)arg1 childKey:(id)arg2 ;
-(MSVSQLDatabase *)database;
-(id)_assetsMatchingIdentifierSet:(id)arg1 query:(id)arg2 ;
-(id)importObjectsFromRequest:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
@end

