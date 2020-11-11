/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDecimalNumber, NSArray;

@interface PKAccountFeatureDescriptor : NSObject <NSSecureCoding, NSCopying> {

	NSString* _identifier;
	NSDecimalNumber* _minimumAmount;
	NSDecimalNumber* _maximumAmount;
	NSString* _merchantIdentifier;
	NSArray* _supportedNetworks;
	unsigned long long _merchantCapabilities;

}

@property (nonatomic,copy) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * minimumAmount;                        //@synthesize minimumAmount=_minimumAmount - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * maximumAmount;                        //@synthesize maximumAmount=_maximumAmount - In the implementation block
@property (nonatomic,copy) NSString * merchantIdentifier;                          //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * supportedNetworks;                            //@synthesize supportedNetworks=_supportedNetworks - In the implementation block
@property (assign,nonatomic) unsigned long long merchantCapabilities;              //@synthesize merchantCapabilities=_merchantCapabilities - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSupportedNetworks:(NSArray *)arg1 ;
-(unsigned long long)hash;
-(NSDecimalNumber *)minimumAmount;
-(id)initWithDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDecimalNumber *)maximumAmount;
-(NSString *)identifier;
-(void)setMerchantCapabilities:(unsigned long long)arg1 ;
-(NSString *)merchantIdentifier;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)supportedNetworks;
-(unsigned long long)merchantCapabilities;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMinimumAmount:(NSDecimalNumber *)arg1 ;
-(void)setMaximumAmount:(NSDecimalNumber *)arg1 ;
-(BOOL)isEqualToAccountFeatureDescriptor:(id)arg1 ;
@end
