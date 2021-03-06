/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface IDSEndpointTransparencyState : NSObject <NSSecureCoding, NSCopying> {

	NSData* _pushToken;
	long long _verificationState;

}

@property (nonatomic,readonly) NSData * pushToken;                       //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,readonly) long long verificationState;              //@synthesize verificationState=_verificationState - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)pushToken;
-(id)initWithCoder:(id)arg1 ;
-(long long)verificationState;
-(BOOL)isEqualToEndpointTransparencyState:(id)arg1 ;
-(id)initWithPushToken:(id)arg1 verificationState:(long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

