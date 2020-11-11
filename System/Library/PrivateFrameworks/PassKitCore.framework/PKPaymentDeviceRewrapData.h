/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface PKPaymentDeviceRewrapData : NSObject <NSSecureCoding> {

	NSData* _platformData;
	NSData* _platformDataSignature;

}

@property (nonatomic,copy) NSData * platformData;                       //@synthesize platformData=_platformData - In the implementation block
@property (nonatomic,copy) NSData * platformDataSignature;              //@synthesize platformDataSignature=_platformDataSignature - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)platformData;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)platformDataSignature;
-(void)setPlatformData:(NSData *)arg1 ;
-(void)setPlatformDataSignature:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
