/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _UISelectorDictionary, NSMutableDictionary;

@interface _UICommandIdentifierDictionary : NSObject <NSCopying> {

	_UISelectorDictionary* _actionDictionary;
	NSMutableDictionary* _actionPropertyListDictionary;

}
-(void)addEntriesFromDictionary:(id)arg1 ;
-(id)init;
-(BOOL)intersectsEntriesFromDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(void)removeEntriesFromDictionary:(id)arg1 ;
-(id)objectForAction:(SEL)arg1 propertyList:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setObject:(id)arg1 forAction:(SEL)arg2 propertyList:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeObjectForAction:(SEL)arg1 propertyList:(id)arg2 ;
-(id)intersectingIdentifiersFromDictionary:(id)arg1 ;
@end
