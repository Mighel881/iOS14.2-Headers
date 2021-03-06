/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSData.h>

@class NSData;

@interface _PFEncodedData : NSData {

	NSData* _aData;
	unsigned _byteCount;
	unsigned _reserved;

}
+(Class)classForKeyedUnarchiver;
-(oneway void)release;
-(id)init;
-(BOOL)isEqualToData:(id)arg1 ;
-(id)mutableCopy;
-(id)retain;
-(const void*)bytes;
-(unsigned long long)length;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)description;
-(unsigned long long)retainCount;
-(BOOL)_tryRetain;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_isDeallocating;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)subdataWithRange:(NSRange)arg1 ;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 ;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSRange)rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(Class)classForCoder;
@end

