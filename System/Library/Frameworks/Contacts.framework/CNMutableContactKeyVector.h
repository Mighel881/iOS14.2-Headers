/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNContactKeyVector.h>

@interface CNMutableContactKeyVector : CNContactKeyVector
+(id)freezeIfClassIsImmutable:(id)arg1 ;
+(id)new;
-(id)freeze;
-(void)addKey:(id)arg1 ;
-(id)init;
-(void)subtractKey:(id)arg1 ;
-(void)minusKeyVector:(id)arg1 ;
-(void)subtractKeys:(id)arg1 ;
-(void)addKeys:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)intersectKeyVector:(id)arg1 ;
-(id)initWithKeyVector:(id)arg1 ;
-(void)unionKeyVector:(id)arg1 ;
@end
