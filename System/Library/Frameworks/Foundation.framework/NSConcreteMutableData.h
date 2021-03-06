/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableData.h>

@interface NSConcreteMutableData : NSMutableData {

	unsigned _reserved : 1;
	unsigned _needToZero : 1;
	unsigned _hasVM : 1;
	unsigned _retainCount : 29;
	unsigned long long _length;
	unsigned long long _capacity;
	void* _bytes;

}
-(BOOL)_providesConcreteBacking;
-(void)setLength:(unsigned long long)arg1 ;
-(void*)mutableBytes;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 deallocator:(/*^block*/id)arg4 ;
-(void)replaceBytesInRange:(NSRange)arg1 withBytes:(const void*)arg2 ;
-(void)_freeBytes;
-(id)init;
-(void)resetBytesInRange:(NSRange)arg1 ;
-(const void*)bytes;
-(unsigned long long)length;
-(void)increaseLengthBy:(unsigned long long)arg1 ;
-(id)initWithLength:(unsigned long long)arg1 ;
-(BOOL)_canUseRealloc;
-(void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)appendData:(id)arg1 ;
-(void)dealloc;
@end

