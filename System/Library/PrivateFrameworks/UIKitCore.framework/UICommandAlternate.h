/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIMenuLeafAlternate.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface UICommandAlternate : NSObject <_UIMenuLeafAlternate, NSCopying, NSSecureCoding> {

	NSString* _title;
	SEL _action;
	long long _modifierFlags;

}

@property (nonatomic,readonly) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) SEL action;                           //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) long long modifierFlags;              //@synthesize modifierFlags=_modifierFlags - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)alternateWithTitle:(id)arg1 action:(SEL)arg2 modifierFlags:(long long)arg3 ;
-(long long)_leafKeyModifierFlags;
-(long long)modifierFlags;
-(unsigned long long)hash;
-(id)_resolvedTargetFromFirstTarget:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)_performWithTarget:(id)arg1 ;
-(NSString *)title;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithTitle:(id)arg1 action:(SEL)arg2 modifierFlags:(long long)arg3 ;
-(id)initWithModifierFlags:(long long)arg1 ;
-(SEL)action;
@end

