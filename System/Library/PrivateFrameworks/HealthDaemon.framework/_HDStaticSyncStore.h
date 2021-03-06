/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HDSyncStore.h>

@class HDProfile, NSUUID, NSString;

@interface _HDStaticSyncStore : NSObject <HDSyncStore> {

	long long _syncProvenance;
	HDProfile* _profile;
	NSUUID* _storeIdentifier;

}

@property (nonatomic,copy,readonly) NSUUID * storeIdentifier;              //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                 //@synthesize profile=_profile - In the implementation block
@property (readonly) int protocolVersion; 
@property (readonly) long long syncStoreType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSUUID *)storeIdentifier;
-(id)syncStoreIdentifier;
-(HDProfile *)profile;
-(NSString *)description;
-(int)protocolVersion;
-(id)orderedSyncEntities;
-(id)databaseIdentifier;
-(BOOL)replacePersistedAnchorMap:(id)arg1 error:(id*)arg2 ;
-(long long)syncProvenance;
-(BOOL)supportsSpeculativeChangesForSyncEntityClass:(Class)arg1 ;
-(id)initWithProfile:(id)arg1 storeIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)resetReceivedSyncAnchorMapWithError:(id*)arg1 ;
-(long long)syncEpoch;
-(id)syncStoreDefaultSourceBundleIdentifier;
-(id)syncEntityDependenciesForSyncEntity:(Class)arg1 ;
-(BOOL)canRecieveSyncObjectsForEntityClass:(Class)arg1 ;
-(BOOL)enforceSyncEntityOrdering;
-(BOOL)shouldContinueAfterAnchorValidationError:(id)arg1 ;
-(BOOL)shouldEnforceSequenceOrdering;
-(long long)expectedSequenceNumberForSyncEntityClass:(Class)arg1 ;
-(void)setExpectedSequenceNumber:(long long)arg1 forSyncEntityClass:(Class)arg2 ;
-(long long)syncStoreType;
@end

