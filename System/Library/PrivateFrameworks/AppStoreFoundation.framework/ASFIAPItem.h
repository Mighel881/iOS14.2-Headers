/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreFoundation.framework/AppStoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreFoundation/AppStoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString, NSNumber;

@interface ASFIAPItem : NSObject <NSCopying> {

	NSDate* _originalPurchaseDate;
	NSString* _originalTransactionID;
	NSDate* _purchaseDate;
	NSString* _productID;
	NSNumber* _quantity;
	NSString* _transactionID;

}

@property (copy) NSDate * originalPurchaseDate;                 //@synthesize originalPurchaseDate=_originalPurchaseDate - In the implementation block
@property (copy) NSString * originalTransactionID;              //@synthesize originalTransactionID=_originalTransactionID - In the implementation block
@property (copy) NSDate * purchaseDate;                         //@synthesize purchaseDate=_purchaseDate - In the implementation block
@property (copy) NSString * productID;                          //@synthesize productID=_productID - In the implementation block
@property (copy) NSNumber * quantity;                           //@synthesize quantity=_quantity - In the implementation block
@property (copy) NSString * transactionID;                      //@synthesize transactionID=_transactionID - In the implementation block
-(NSString *)transactionID;
-(NSNumber *)quantity;
-(void)setPurchaseDate:(NSDate *)arg1 ;
-(void)setTransactionID:(NSString *)arg1 ;
-(void)setProductID:(NSString *)arg1 ;
-(NSString *)productID;
-(NSDate *)purchaseDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setQuantity:(NSNumber *)arg1 ;
-(NSDate *)originalPurchaseDate;
-(void)setOriginalPurchaseDate:(NSDate *)arg1 ;
-(NSString *)originalTransactionID;
-(void)setOriginalTransactionID:(NSString *)arg1 ;
@end

