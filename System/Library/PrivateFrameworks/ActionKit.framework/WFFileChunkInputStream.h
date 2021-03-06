/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/ActionKit-Structs.h>
#import <CoreFoundation/NSInputStream.h>

@class NSInputStream;

@interface WFFileChunkInputStream : NSInputStream {

	unsigned long long _offset;
	unsigned long long _length;
	NSInputStream* _inputStream;

}

@property (nonatomic,readonly) NSInputStream * inputStream;              //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;                //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) unsigned long long length;                //@synthesize length=_length - In the implementation block
-(void)open;
-(void)close;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(BOOL)hasBytesAvailable;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)propertyForKey:(id)arg1 ;
-(NSInputStream *)inputStream;
-(unsigned long long)offset;
-(unsigned long long)length;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)arg1 forMode:(const CFStringRef)arg2 ;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(unsigned long long)streamStatus;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)arg1 forMode:(const CFStringRef)arg2 ;
-(id)streamError;
-(BOOL)_setCFClientFlags:(unsigned long long)arg1 callback:(/*function pointer*/void*)arg2 context:(SCD_Struct_PK6*)arg3 ;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(id)initWithURL:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 ;
@end

