/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UIBarAppearanceData : NSObject <NSCopying> {

	BOOL _immutable;

}
+(id)decodeFromCoder:(id)arg1 prefix:(id)arg2 ;
-(long long)hashInto:(long long)arg1 ;
-(id)writableInstance;
-(void)markReadOnly;
-(id)replicate;
-(void)assertMutable:(SEL)arg1 ;
-(void)describeInto:(id)arg1 ;
-(void)encodeToCoder:(id)arg1 prefix:(id)arg2 ;
-(BOOL)checkEqualTo:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
