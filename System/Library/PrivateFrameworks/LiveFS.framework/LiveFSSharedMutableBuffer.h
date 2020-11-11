/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface LiveFSSharedMutableBuffer : NSObject <NSSecureCoding> {

	unsigned long long _vma;
	unsigned long long _capacity;
	unsigned long long _length;
	unsigned _mp;

}

@property (assign) unsigned long long length; 
+(id)dataWithCapacity:(unsigned long long)arg1 ;
+(id)dataWithLength:(unsigned long long)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)bufferWithLength:(unsigned long long)arg1 ;
+(id)bufferWithCapacity:(unsigned long long)arg1 ;
-(void)setLength:(unsigned long long)arg1 ;
-(void*)mutableBytes;
-(const void*)bytes;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)length;
-(id)initWithLength:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(Class)classForCoder;
-(void)dealloc;
-(id)initWithCapacity:(unsigned long long)arg1 andLength:(unsigned long long)arg2 ;
-(BOOL)ensureMapped;
-(id)initWithMachPort:(unsigned)arg1 capacity:(unsigned long long)arg2 andLength:(unsigned long long)arg3 ;
-(void)detachBytes;
-(id)createDispatchData;
@end
