/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Social.framework/Social
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Social/Social-Structs.h>
#import <CoreFoundation/NSInputStream.h>

@protocol NSStreamDelegate;
@class NSArray, SLRequestMultiPartInputStream;

@interface SLRequestBodyInputStream : NSInputStream {

	NSArray* _inputStreams;
	SLRequestMultiPartInputStream* _currentStream;
	unsigned long long _dataLength;
	unsigned long long _dataOffset;
	unsigned long long _currentIndex;
	unsigned long long _currentOffset;
	unsigned long long _currentLength;
	BOOL _openEventSent;
	unsigned long long _streamStatus;
	CFRunLoopSourceRef _rls;
	/*function pointer*/void* _clientCallback;
	SCD_Struct_SL10* _clientContext;
	SLRequestBodyInputStream* _selfReferenceDuringStreamEventTrigger;
	id<NSStreamDelegate> _delegate;

}

@property (__weak) id<NSStreamDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long totalBytes; 
-(void)open;
-(void)close;
-(BOOL)hasBytesAvailable;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id<NSStreamDelegate>)delegate;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setDelegate:(id<NSStreamDelegate>)arg1 ;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(unsigned long long)streamStatus;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(unsigned long long)totalBytes;
-(id)streamError;
-(unsigned long long)bytesRead;
-(BOOL)_setCFClientFlags:(unsigned long long)arg1 callback:(/*function pointer*/void*)arg2 context:(SCD_Struct_SL10*)arg3 ;
-(void)dealloc;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(id)initWithMultiParts:(id)arg1 multiPartBoundary:(id)arg2 ;
-(void)_scheduleCallback;
-(id)nextStream;
-(void)_streamEventTrigger;
@end

