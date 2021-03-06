/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUUID, HDProfile, HDDatabaseTransaction;

@interface _HDAssociationInsertionContext : NSObject {

	BOOL _enforceSameSource;
	BOOL _permitPendingAssociations;
	NSUUID* _parentUUID;
	HDProfile* _profile;
	HDDatabaseTransaction* _transaction;

}

@property (nonatomic,copy,readonly) NSUUID * parentUUID;                         //@synthesize parentUUID=_parentUUID - In the implementation block
@property (nonatomic,readonly) BOOL enforceSameSource;                           //@synthesize enforceSameSource=_enforceSameSource - In the implementation block
@property (nonatomic,readonly) BOOL permitPendingAssociations;                   //@synthesize permitPendingAssociations=_permitPendingAssociations - In the implementation block
@property (nonatomic,readonly) HDProfile * profile;                              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) HDDatabaseTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
-(HDProfile *)profile;
-(NSUUID *)parentUUID;
-(HDDatabaseTransaction *)transaction;
-(id)initWithParentUUID:(id)arg1 enforceSameSource:(BOOL)arg2 permitPendingAssociations:(BOOL)arg3 profile:(id)arg4 transaction:(id)arg5 ;
-(BOOL)enforceSameSource;
-(BOOL)permitPendingAssociations;
@end

