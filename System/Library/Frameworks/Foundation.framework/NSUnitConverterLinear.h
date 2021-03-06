/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSUnitConverter.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSUnitConverterLinear : NSUnitConverter <NSSecureCoding> {

	double _coefficient;
	double _constant;

}

@property (readonly) double coefficient;              //@synthesize coefficient=_coefficient - In the implementation block
@property (readonly) double constant;                 //@synthesize constant=_constant - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)coefficient;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoefficient:(double)arg1 constant:(double)arg2 ;
-(id)description;
-(id)initWithCoefficient:(double)arg1 ;
-(double)constant;
-(BOOL)isEqual:(id)arg1 ;
-(double)baseUnitValueFromValue:(double)arg1 ;
-(double)valueFromBaseUnitValue:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

