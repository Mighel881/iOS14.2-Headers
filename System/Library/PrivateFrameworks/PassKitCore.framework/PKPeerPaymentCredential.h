/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentCredential.h>

@class NSString, PKPeerPaymentAccount, PKPeerPaymentPassDetailsResponse, PKCurrencyAmount;

@interface PKPeerPaymentCredential : PKPaymentCredential {

	NSString* _pendingPaymentSenderName;
	PKPeerPaymentAccount* _account;
	PKPeerPaymentPassDetailsResponse* _passDetailsResponse;
	PKCurrencyAmount* _amount;
	unsigned long long _state;
	NSString* _pendingPaymentSenderAddress;

}

@property (nonatomic,readonly) PKPeerPaymentAccount * account;                                    //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) PKPeerPaymentPassDetailsResponse * passDetailsResponse;              //@synthesize passDetailsResponse=_passDetailsResponse - In the implementation block
@property (nonatomic,copy,readonly) NSString * ownershipTokenIdentifier; 
@property (nonatomic,retain) PKCurrencyAmount * amount;                                           //@synthesize amount=_amount - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                            //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * pendingPaymentSenderAddress;                                //@synthesize pendingPaymentSenderAddress=_pendingPaymentSenderAddress - In the implementation block
@property (nonatomic,copy,readonly) NSString * pendingPaymentSenderName; 
-(PKPeerPaymentAccount *)account;
-(void)setState:(unsigned long long)arg1 ;
-(BOOL)_isEqualToCredential:(id)arg1 ;
-(NSString *)ownershipTokenIdentifier;
-(unsigned long long)hash;
-(id)longDescription;
-(PKCurrencyAmount *)amount;
-(PKPeerPaymentPassDetailsResponse *)passDetailsResponse;
-(NSString *)pendingPaymentSenderName;
-(NSString *)pendingPaymentSenderAddress;
-(void)setPendingPaymentSenderAddress:(NSString *)arg1 ;
-(unsigned long long)state;
-(id)initWithPeerPaymentAccount:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAmount:(PKCurrencyAmount *)arg1 ;
-(void)setPassDetailsResponse:(PKPeerPaymentPassDetailsResponse *)arg1 ;
@end
