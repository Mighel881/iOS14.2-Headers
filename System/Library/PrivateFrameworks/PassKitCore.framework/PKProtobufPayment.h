/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, PKProtobufShippingMethod, PKProtobufPaymentToken;

@interface PKProtobufPayment : PBCodable <NSCopying> {

	NSData* _billingContact;
	NSData* _shippingContact;
	PKProtobufShippingMethod* _shippingMethod;
	PKProtobufPaymentToken* _token;

}

@property (nonatomic,readonly) BOOL hasToken; 
@property (nonatomic,retain) PKProtobufPaymentToken * token;                         //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) BOOL hasBillingContact; 
@property (nonatomic,retain) NSData * billingContact;                                //@synthesize billingContact=_billingContact - In the implementation block
@property (nonatomic,readonly) BOOL hasShippingContact; 
@property (nonatomic,retain) NSData * shippingContact;                               //@synthesize shippingContact=_shippingContact - In the implementation block
@property (nonatomic,readonly) BOOL hasShippingMethod; 
@property (nonatomic,retain) PKProtobufShippingMethod * shippingMethod;              //@synthesize shippingMethod=_shippingMethod - In the implementation block
-(void)setToken:(PKProtobufPaymentToken *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(PKProtobufPaymentToken *)token;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasToken;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PKProtobufShippingMethod *)shippingMethod;
-(NSData *)shippingContact;
-(void)setBillingContact:(NSData *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setShippingContact:(NSData *)arg1 ;
-(void)setShippingMethod:(PKProtobufShippingMethod *)arg1 ;
-(BOOL)hasBillingContact;
-(BOOL)hasShippingContact;
-(BOOL)hasShippingMethod;
-(NSData *)billingContact;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

