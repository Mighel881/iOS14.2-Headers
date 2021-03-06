/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPKProtoStandalonePaymentSetupProduct, NSString;

@interface NPKProtoStandalonePaymentProvisioningFlowTermsAndConditionsStepContext : PBCodable <NSCopying> {

	NPKProtoStandalonePaymentSetupProduct* _product;
	NSString* _termsURL;
	BOOL _allowNonSecureHTTP;
	SCD_Struct_NP2 _has;

}

@property (nonatomic,readonly) BOOL hasTermsURL; 
@property (nonatomic,retain) NSString * termsURL;                                          //@synthesize termsURL=_termsURL - In the implementation block
@property (assign,nonatomic) BOOL hasAllowNonSecureHTTP; 
@property (assign,nonatomic) BOOL allowNonSecureHTTP;                                      //@synthesize allowNonSecureHTTP=_allowNonSecureHTTP - In the implementation block
@property (nonatomic,readonly) BOOL hasProduct; 
@property (nonatomic,retain) NPKProtoStandalonePaymentSetupProduct * product;              //@synthesize product=_product - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(NSString *)termsURL;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NPKProtoStandalonePaymentSetupProduct *)product;
-(void)setProduct:(NPKProtoStandalonePaymentSetupProduct *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTermsURL:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAllowNonSecureHTTP:(BOOL)arg1 ;
-(BOOL)hasTermsURL;
-(void)setHasAllowNonSecureHTTP:(BOOL)arg1 ;
-(BOOL)hasAllowNonSecureHTTP;
-(BOOL)hasProduct;
-(BOOL)allowNonSecureHTTP;
@end

