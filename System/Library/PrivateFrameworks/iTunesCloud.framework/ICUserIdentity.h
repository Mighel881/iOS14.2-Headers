/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/ML3AccountInformationProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface ICUserIdentity : NSObject <ML3AccountInformationProviding, NSCopying, NSSecureCoding> {

	NSString* _deviceIdentifier;
	BOOL _allowsDelegation;
	BOOL _allowsAccountEstablishment;
	long long _type;
	unsigned long long _creationTime;
	NSNumber* _DSID;

}

@property (nonatomic,copy,readonly) NSString * accountDSID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long creationTime;               //@synthesize creationTime=_creationTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceIdentifier; 
@property (nonatomic,copy,readonly) NSNumber * DSID;                          //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,readonly) BOOL allowsDelegation;                         //@synthesize allowsDelegation=_allowsDelegation - In the implementation block
@property (nonatomic,readonly) BOOL allowsAccountEstablishment;               //@synthesize allowsAccountEstablishment=_allowsAccountEstablishment - In the implementation block
@property (nonatomic,readonly) long long type;                                //@synthesize type=_type - In the implementation block
+(id)activeAccount;
+(id)autoupdatingActiveLockerAccount;
+(BOOL)supportsSecureCoding;
+(id)activeLockerAccount;
+(id)nullIdentity;
+(id)specificAccountWithDSID:(id)arg1 ;
+(id)carrierBundleWithDeviceIdentifier:(id)arg1 ;
+(id)autoupdatingActiveAccount;
-(NSString *)accountDSID;
-(NSNumber *)DSID;
-(BOOL)_isComparableUsingResolvedDSID;
-(void)_setResolvedDSID:(id)arg1 ;
-(BOOL)allowsDelegation;
-(id)_resolvedDSIDUsingSpecificIdentityStore:(id)arg1 ;
-(void)_ensureResolvedDSIDUsingSpecificIdentityStore:(id)arg1 ;
-(id)identityAllowingDelegation:(BOOL)arg1 ;
-(id)identityAllowingEstablishment:(BOOL)arg1 ;
-(BOOL)allowsAccountEstablishment;
-(id)init;
-(NSString *)accountDSID;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)creationTime;
-(BOOL)isEqualToIdentity:(id)arg1 inStore:(id)arg2 ;
-(unsigned long long)hashInStore:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)deviceIdentifier;
@end
