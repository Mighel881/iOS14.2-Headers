/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString, NSDate;

@interface CRKPrivateIdentity : NSObject <NSSecureCoding> {

	NSData* _identityPersistentId;
	NSData* _stagedIdentityPersistentId;
	NSString* _commonNamePrefix;
	NSDate* _identityExpirationDate;
	NSDate* _stagedIdentityExpirationDate;

}

@property (nonatomic,retain) NSDate * identityExpirationDate;                    //@synthesize identityExpirationDate=_identityExpirationDate - In the implementation block
@property (nonatomic,retain) NSData * identityPersistentId;                      //@synthesize identityPersistentId=_identityPersistentId - In the implementation block
@property (nonatomic,retain) NSDate * stagedIdentityExpirationDate;              //@synthesize stagedIdentityExpirationDate=_stagedIdentityExpirationDate - In the implementation block
@property (nonatomic,retain) NSData * stagedIdentityPersistentId;                //@synthesize stagedIdentityPersistentId=_stagedIdentityPersistentId - In the implementation block
@property (nonatomic,copy) NSString * commonNamePrefix;                          //@synthesize commonNamePrefix=_commonNamePrefix - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)commonNameWithPrefix:(id)arg1 ;
+(id)makeIdentityWithCommonName:(id)arg1 ;
+(id)keychainGroup;
+(id)freshPrivateIdentityWithCommonNamePrefix:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)commonNamePrefix;
-(id)initWithIdentityPersistentId:(id)arg1 stagedIdentityPersistentId:(id)arg2 commonNamePrefix:(id)arg3 ;
-(NSDate *)identityExpirationDate;
-(NSData *)stagedIdentityPersistentId;
-(NSData *)identityPersistentId;
-(void)setIdentityPersistentId:(NSData *)arg1 ;
-(NSDate *)stagedIdentityExpirationDate;
-(void)setIdentityExpirationDate:(NSDate *)arg1 ;
-(void)setStagedIdentityPersistentId:(NSData *)arg1 ;
-(void)setStagedIdentityExpirationDate:(NSDate *)arg1 ;
-(BOOL)refreshIdentities;
-(void)setCommonNamePrefix:(NSString *)arg1 ;
@end

