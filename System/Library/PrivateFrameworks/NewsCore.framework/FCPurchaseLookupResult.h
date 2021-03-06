/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSNumber, FCIntroductoryOffer;

@interface FCPurchaseLookupResult : NSObject {

	NSString* _purchaseID;
	NSString* _offerName;
	NSString* _subscriptionPeriodInISO_8601;
	NSString* _subscriptionPriceFormatted;
	NSNumber* _price;
	NSNumber* _appAdamID;
	FCIntroductoryOffer* _introOffer;

}

@property (nonatomic,copy) NSString * purchaseID;                                //@synthesize purchaseID=_purchaseID - In the implementation block
@property (nonatomic,copy) NSString * offerName;                                 //@synthesize offerName=_offerName - In the implementation block
@property (nonatomic,copy) NSString * subscriptionPeriodInISO_8601;              //@synthesize subscriptionPeriodInISO_8601=_subscriptionPeriodInISO_8601 - In the implementation block
@property (nonatomic,copy) NSString * subscriptionPriceFormatted;                //@synthesize subscriptionPriceFormatted=_subscriptionPriceFormatted - In the implementation block
@property (nonatomic,copy) NSNumber * price;                                     //@synthesize price=_price - In the implementation block
@property (nonatomic,copy) NSNumber * appAdamID;                                 //@synthesize appAdamID=_appAdamID - In the implementation block
@property (nonatomic,retain) FCIntroductoryOffer * introOffer;                   //@synthesize introOffer=_introOffer - In the implementation block
-(void)setPurchaseID:(NSString *)arg1 ;
-(NSNumber *)price;
-(void)setOfferName:(NSString *)arg1 ;
-(NSNumber *)appAdamID;
-(void)setPrice:(NSNumber *)arg1 ;
-(void)setAppAdamID:(NSNumber *)arg1 ;
-(NSString *)subscriptionPeriodInISO_8601;
-(NSString *)purchaseID;
-(void)setSubscriptionPeriodInISO_8601:(NSString *)arg1 ;
-(FCIntroductoryOffer *)introOffer;
-(void)setSubscriptionPriceFormatted:(NSString *)arg1 ;
-(void)setIntroOffer:(FCIntroductoryOffer *)arg1 ;
-(NSString *)subscriptionPriceFormatted;
-(NSString *)offerName;
@end

