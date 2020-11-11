/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSObservationBuffer.h>

@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue, NSMutableArray;

@interface NSConcreteObservationBuffer : NSObservationBuffer {

	NSObject*<OS_dispatch_queue> _inputQueue;
	NSOperationQueue* _outputQueue;
	long long _policy;
	int _state;
	opaque_pthread_mutex_t _lock;
	NSMutableArray* _dequeue;
	unsigned long long _maxCount;
	/*^block*/id _bufferFullHandler;
	BOOL _memoryPressureSensitive;
	BOOL _automaticallyEmitsObjects;

}
-(id)initWithMaximumObjectCount:(unsigned long long)arg1 fullPolicy:(long long)arg2 outputQueue:(id)arg3 ;
-(void)emitObject;
-(void)_mergeChanges;
-(void)_alreadyOnQueueEmitAllObjects;
-(void)setAutomaticallyEmitsObjects:(BOOL)arg1 ;
-(void)setMemoryPressureSensitive:(BOOL)arg1 ;
-(void)_alreadyOnQueueEmitObject;
-(BOOL)automaticallyEmitsObjects;
-(BOOL)isMemoryPressureSensitive;
-(/*^block*/id)bufferFullHandler;
-(void)emitAllObjects;
-(void)setBufferFullHandler:(/*^block*/id)arg1 ;
-(void)_receiveBox:(id)arg1 ;
-(void)dealloc;
@end
