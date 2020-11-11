/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKPaymentSummaryItem.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKShippingMethod : PKPaymentSummaryItem <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _detail;

}

@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * detail;                  //@synthesize detail=_detail - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)version;
+(id)shippingMethodWithProtobuf:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)formattedString;
-(id)protobuf;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)detail;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDetail:(NSString *)arg1 ;
-(BOOL)isEqualToShippingMethod:(id)arg1 ;
@end
