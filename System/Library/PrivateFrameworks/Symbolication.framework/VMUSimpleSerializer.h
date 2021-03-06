/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Symbolication/VMUAbstractSerializer.h>

@interface VMUSimpleSerializer : VMUAbstractSerializer {

	void* _map;
	unsigned _internCursor;

}
-(id)init;
-(void)serialize32:(unsigned)arg1 ;
-(void)serialize64:(unsigned long long)arg1 ;
-(id)copyContiguousData;
-(unsigned)serializeNullTerminatedBytes:(const char*)arg1 ;
-(void)_serializeValues:(unsigned*)arg1 count:(unsigned)arg2 ;
-(unsigned)serializeString:(id)arg1 ;
-(void)dealloc;
@end

