/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableSet.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface NSSetChanges : NSMutableSet <NSCopying, NSFastEnumeration>

@property (readonly) unsigned long long changeCount; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(unsigned long long)changeCount;
-(BOOL)_isToManyChangeInformation;
-(void)enumerateChangesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateChanges:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)addObject:(id)arg1 ;
-(void)applyChangesToSet:(id)arg1 ;
-(long long)_toManyPropertyType;
-(void)removeObject:(id)arg1 ;
-(void)addChange:(id)arg1 ;
@end
