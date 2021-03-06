/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIKeyboardLayout.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TIHardwareKeyboardLayout : TIKeyboardLayout <NSSecureCoding> {

	long long _keyboardType;

}

@property (nonatomic,readonly) long long keyboardType;              //@synthesize keyboardType=_keyboardType - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)flushLayoutCaches;
-(long long)keyboardType;
-(CGRect)_frameForKeyCode:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)addString:(id)arg1 forKeyCode:(unsigned long long)arg2 ;
-(id)_ANSIFrames;
-(id)_ISOFrames;
-(BOOL)isEqual:(id)arg1 ;
-(id)_JISFrames;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithKeyboardType:(long long)arg1 ;
@end

