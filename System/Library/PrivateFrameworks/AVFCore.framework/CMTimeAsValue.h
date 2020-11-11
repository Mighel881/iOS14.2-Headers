/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <Foundation/NSValue.h>

@interface CMTimeAsValue : NSValue {

	SCD_Struct_AV6 _time;

}
+(BOOL)supportsSecureCoding;
+(id)valueWithCMTime:(SCD_Struct_AV6)arg1 ;
-(void)getValue:(void*)arg1 ;
-(long long)longLongValue;
-(BOOL)boolValue;
-(unsigned long long)hash;
-(short)shortValue;
-(const char*)objCType;
-(long long)integerValue;
-(SCD_Struct_AV6)CMTimeValue;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)unsignedIntValue;
-(double)doubleValue;
-(unsigned short)unsignedShortValue;
-(unsigned char)unsignedCharValue;
-(float)floatValue;
-(unsigned long long)unsignedLongValue;
-(id)description;
-(long long)longValue;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToValue:(id)arg1 ;
-(unsigned long long)unsignedLongLongValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(char)charValue;
-(unsigned long long)unsignedIntegerValue;
-(int)intValue;
@end
