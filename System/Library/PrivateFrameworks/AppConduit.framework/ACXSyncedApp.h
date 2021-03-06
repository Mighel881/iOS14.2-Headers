/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppConduit.framework/AppConduit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSUUID, NSArray;


@protocol ACXSyncedApp <NSObject,NSSecureCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSUUID * databaseUUID; 
@property (nonatomic,readonly) unsigned long long sequenceNumber; 
@property (nonatomic,copy,readonly) NSArray * counterpartIdentifiers; 
@property (nonatomic,readonly) unsigned long long applicationType; 
@property (nonatomic,readonly) BOOL isSystemApp; 
@property (nonatomic,readonly) BOOL isDeletable; 
@required
-(unsigned long long)applicationType;
-(BOOL)isSystemApp;
-(NSString *)bundleIdentifier;
-(BOOL)isDeletable;
-(unsigned long long)sequenceNumber;
-(NSArray *)counterpartIdentifiers;
-(NSUUID *)databaseUUID;
-(id)initWithApplicationProxy:(id)arg1 databaseUUID:(id)arg2 sequenceNumber:(unsigned long long)arg3;
-(id)serializeAsRemoteApplication;

@end

