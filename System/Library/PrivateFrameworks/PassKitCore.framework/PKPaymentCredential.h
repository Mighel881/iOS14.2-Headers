/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PKPaymentRequirementsResponse, PKPaymentEligibilityResponse;

@interface PKPaymentCredential : NSObject <NSSecureCoding> {

	BOOL _deletable;
	long long _credentialType;
	NSString* _sanitizedPrimaryAccountNumber;
	NSString* _sanitizedPrimaryAccountName;
	NSString* _expiration;
	NSString* _longDescription;
	long long _cardType;
	PKPaymentRequirementsResponse* _requirementsResponse;
	PKPaymentEligibilityResponse* _eligibilityResponse;

}

@property (assign,nonatomic) long long credentialType;                                          //@synthesize credentialType=_credentialType - In the implementation block
@property (nonatomic,copy) NSString * sanitizedPrimaryAccountNumber;                            //@synthesize sanitizedPrimaryAccountNumber=_sanitizedPrimaryAccountNumber - In the implementation block
@property (nonatomic,copy) NSString * sanitizedPrimaryAccountName;                              //@synthesize sanitizedPrimaryAccountName=_sanitizedPrimaryAccountName - In the implementation block
@property (nonatomic,copy) NSString * expiration;                                               //@synthesize expiration=_expiration - In the implementation block
@property (nonatomic,copy) NSString * longDescription;                                          //@synthesize longDescription=_longDescription - In the implementation block
@property (assign,nonatomic) long long cardType;                                                //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,retain) PKPaymentRequirementsResponse * requirementsResponse;              //@synthesize requirementsResponse=_requirementsResponse - In the implementation block
@property (nonatomic,retain) PKPaymentEligibilityResponse * eligibilityResponse;                //@synthesize eligibilityResponse=_eligibilityResponse - In the implementation block
@property (assign,getter=isDeletable,nonatomic) BOOL deletable;                                 //@synthesize deletable=_deletable - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)fakeRemoteCredentials;
-(id)init;
-(PKPaymentRequirementsResponse *)requirementsResponse;
-(void)setRequirementsResponse:(PKPaymentRequirementsResponse *)arg1 ;
-(PKPaymentEligibilityResponse *)eligibilityResponse;
-(void)setEligibilityResponse:(PKPaymentEligibilityResponse *)arg1 ;
-(void)setDeletable:(BOOL)arg1 ;
-(void)setLongDescription:(NSString *)arg1 ;
-(NSString *)sanitizedPrimaryAccountName;
-(NSString *)sanitizedPrimaryAccountNumber;
-(NSString *)expiration;
-(BOOL)isRemoteCredential;
-(BOOL)isLocalPassCredential;
-(BOOL)isPeerPaymentCredential;
-(BOOL)isPurchasedProductCredential;
-(NSString *)longDescription;
-(BOOL)isContactlessProductCredential;
-(BOOL)isDigitalIssuanceProductCredential;
-(BOOL)isAccountCredential;
-(BOOL)isShareableCredential;
-(void)setExpiration:(NSString *)arg1 ;
-(BOOL)isLocalAppletSubcredentialPassCredential;
-(BOOL)isIssuerProvisioningExtensionCredential;
-(id)localPassCredential;
-(id)accountCredential;
-(id)peerPaymentCredential;
-(id)contactlessProductCredential;
-(id)digitalIssuanceProductCredential;
-(id)purchasedProductCredential;
-(id)shareableCredential;
-(id)localAppletSubcredentialPassCredential;
-(id)issuerProvisioningExtensionCredential;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCredentialType:(long long)arg1 ;
-(BOOL)isDeletable;
-(void)setSanitizedPrimaryAccountName:(NSString *)arg1 ;
-(void)setSanitizedPrimaryAccountNumber:(NSString *)arg1 ;
-(long long)cardType;
-(void)setCardType:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)credentialType;
-(id)remoteCredential;
@end
