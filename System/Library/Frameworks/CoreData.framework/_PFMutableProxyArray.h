/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@class _PFArray, NSMutableArray;

@interface _PFMutableProxyArray : NSMutableArray {

	int _cd_rc;
	unsigned _editCount;
	unsigned _offset;
	unsigned _limit;
	_PFArray* _originalArray;
	NSMutableArray* _updatedObjectsArray;
	CFArrayRef _indicesVeneer;

}
+(Class)classForKeyedUnarchiver;
-(void)removeLastObject;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(oneway void)release;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 ;
-(id)initWithPFArray:(id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(id)arrayFromObjectIDs;
-(id)initWithPFArray:(id)arg1 inRange:(NSRange)arg2 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(id)mutableCopy;
-(id)retain;
-(id)newArrayFromObjectIDs;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)finalize;
-(id)managedObjectIDAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(void)addObject:(id)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(unsigned long long)indexOfManagedObjectForObjectID:(id)arg1 ;
-(unsigned long long)retainCount;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)copy;
-(void)dealloc;
@end

