/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface RKCurrencyAmount : NSObject <NSSecureCoding> {

	NSString* _string;
	NSString* _currency;
	double _value;

}

@property (readonly) NSString * string;                //@synthesize string=_string - In the implementation block
@property (readonly) NSString * currency;              //@synthesize currency=_currency - In the implementation block
@property (readonly) double value;                     //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)currency;
-(double)value;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)string;
-(id)initWithString:(id)arg1 currency:(id)arg2 value:(double)arg3 ;
@end

