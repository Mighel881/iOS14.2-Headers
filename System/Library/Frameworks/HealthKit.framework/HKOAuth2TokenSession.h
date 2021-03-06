/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface HKOAuth2TokenSession : NSObject <NSCopying, NSSecureCoding> {

	NSString* _code;
	NSString* _query;
	NSString* _requestedScope;
	NSUUID* _state;

}

@property (nonatomic,copy,readonly) NSString * code;                        //@synthesize code=_code - In the implementation block
@property (nonatomic,copy,readonly) NSString * query;                       //@synthesize query=_query - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestedScope;              //@synthesize requestedScope=_requestedScope - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * state;                         //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)query;
-(id)init;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)requestedScope;
-(NSString *)code;
-(id)initWithCode:(id)arg1 query:(id)arg2 requestedScope:(id)arg3 state:(id)arg4 ;
-(NSUUID *)state;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

