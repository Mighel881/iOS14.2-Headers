/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface VSAccountProviderResponse : NSObject <NSCopying, NSSecureCoding> {

	NSString* _authenticationScheme;
	NSString* _status;
	NSString* _body;

}

@property (nonatomic,copy) NSString * authenticationScheme;              //@synthesize authenticationScheme=_authenticationScheme - In the implementation block
@property (nonatomic,copy) NSString * status;                            //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSString * body;                              //@synthesize body=_body - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setBody:(NSString *)arg1 ;
-(id)init;
-(unsigned long long)hash;
-(NSString *)status;
-(NSString *)body;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setStatus:(NSString *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)authenticationScheme;
-(void)setAuthenticationScheme:(NSString *)arg1 ;
@end

