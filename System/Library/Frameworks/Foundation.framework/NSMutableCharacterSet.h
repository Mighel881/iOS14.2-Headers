/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCharacterSet.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSMutableCharacterSet : NSCharacterSet <NSCopying, NSMutableCopying, NSSecureCoding>
+(id)letterCharacterSet;
+(id)characterSetWithBitmapRepresentation:(id)arg1 ;
+(id)lowercaseLetterCharacterSet;
+(id)controlCharacterSet;
+(id)alphanumericCharacterSet;
+(id)whitespaceAndNewlineCharacterSet;
+(BOOL)supportsSecureCoding;
+(id)nonBaseCharacterSet;
+(id)decomposableCharacterSet;
+(id)decimalDigitCharacterSet;
+(id)symbolCharacterSet;
+(id)characterSetWithCharactersInString:(id)arg1 ;
+(id)characterSetWithContentsOfFile:(id)arg1 ;
+(id)whitespaceCharacterSet;
+(id)uppercaseLetterCharacterSet;
+(id)newlineCharacterSet;
+(id)capitalizedLetterCharacterSet;
+(id)illegalCharacterSet;
+(id)punctuationCharacterSet;
+(id)characterSetWithRange:(NSRange)arg1 ;
-(void)removeCharactersInString:(id)arg1 ;
-(void)removeCharactersInRange:(NSRange)arg1 ;
-(void)addCharactersInRange:(NSRange)arg1 ;
-(id)init;
-(void)invert;
-(void)addCharactersInString:(id)arg1 ;
-(void)formUnionWithCharacterSet:(id)arg1 ;
-(BOOL)isMutable;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)formIntersectionWithCharacterSet:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

