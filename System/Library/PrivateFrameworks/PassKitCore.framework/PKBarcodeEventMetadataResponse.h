/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface PKBarcodeEventMetadataResponse : NSObject <NSSecureCoding> {

	NSData* _paymentInformation;

}

@property (nonatomic,copy) NSData * paymentInformation;              //@synthesize paymentInformation=_paymentInformation - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPaymentInformation:(id)arg1 ;
-(NSData *)paymentInformation;
-(void)setPaymentInformation:(NSData *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

