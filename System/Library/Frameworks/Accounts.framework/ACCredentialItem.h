/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Accounts/Accounts-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ACProtobufCoding.h>

@class NSString, NSDate, NSURL, ACAccountStore, NSMutableSet, NSSet;

@interface ACCredentialItem : NSObject <NSSecureCoding, ACProtobufCoding> {

	NSString* _accountIdentifier;
	NSDate* _expirationDate;
	NSString* _serviceName;
	BOOL _persistent;
	NSURL* _objectID;
	ACAccountStore* _accountStore;
	NSMutableSet* _dirtyProperties;

}

@property (nonatomic,readonly) NSString * accountIdentifier; 
@property (nonatomic,retain) NSDate * expirationDate; 
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSString * serviceName; 
@property (assign,getter=isPersistent,nonatomic) BOOL persistent; 
@property (nonatomic,retain) NSURL * objectID; 
@property (assign,nonatomic,__weak) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (getter=isDirty,nonatomic,readonly) BOOL dirty; 
@property (nonatomic,readonly) NSSet * dirtyProperties;                         //@synthesize dirtyProperties=_dirtyProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSURL *)objectID;
-(id)initWithManagedCredentialItem:(id)arg1 ;
-(NSString *)accountIdentifier;
-(BOOL)isExpired;
-(id)initWithAccountIdentifier:(id)arg1 serviceName:(id)arg2 ;
-(void)markAllPropertiesDirty;
-(id)fullDescription;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(id)_encodeProtobuf;
-(BOOL)isPersistent;
-(BOOL)isDirty;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setObjectID:(NSURL *)arg1 ;
-(NSSet *)dirtyProperties;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(id)_encodeProtobufData;
-(id)_initWithProtobuf:(id)arg1 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(void)_markPropertyDirty:(id)arg1 ;
-(ACAccountStore *)accountStore;
-(BOOL)isPropertyDirty:(id)arg1 ;
-(NSString *)description;
-(void)setServiceName:(NSString *)arg1 ;
-(id)_initWithProtobufData:(id)arg1 ;
-(void)setPersistent:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)serviceName;
-(NSDate *)expirationDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithManagedCredentialItem:(id)arg1 accountStore:(id)arg2 ;
-(void)clearDirtyProperties;
@end

