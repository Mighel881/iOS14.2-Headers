/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDecimalNumber, NSLocale, NSString, SKProductSubscriptionPeriod;

@interface SKProductDiscount : NSObject {

	id _internal;

}

@property (nonatomic,readonly) NSDecimalNumber * price; 
@property (nonatomic,readonly) NSLocale * priceLocale; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) SKProductSubscriptionPeriod * subscriptionPeriod; 
@property (nonatomic,readonly) unsigned long long numberOfPeriods; 
@property (nonatomic,readonly) unsigned long long paymentMode; 
@property (nonatomic,readonly) unsigned long long type; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSDecimalNumber *)price;
-(void)_setPriceLocale:(id)arg1 ;
-(id)init;
-(void)_setPaymentMode:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)_setIdentifier:(id)arg1 ;
-(NSLocale *)priceLocale;
-(void)_setSubscriptionPeriod:(id)arg1 ;
-(unsigned long long)type;
-(void)_setType:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPeriods;
-(void)_setPrice:(id)arg1 ;
-(unsigned long long)paymentMode;
-(void)_setNumberOfPeriods:(unsigned long long)arg1 ;
-(SKProductSubscriptionPeriod *)subscriptionPeriod;
@end
