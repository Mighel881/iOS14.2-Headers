/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class NSObject, NSString;

@interface NTKPromise : NSObject {

	unsigned _bgPriority;
	unsigned _fgPriority;
	NSObject*<OS_dispatch_queue> _loaderQueue;
	id _loaderQueue_loadedObject;
	os_unfair_lock_s _lock;
	id _lock_loadedObject;
	unsigned long long _lock_promiseState;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) id object; 
+(id)promiseNamed:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)promiseNamed:(id)arg1 withBackgroundPriority:(unsigned)arg2 foregroundPriority:(unsigned)arg3 block:(/*^block*/id)arg4 ;
-(id)initWithName:(id)arg1 block:(/*^block*/id)arg2 ;
-(NSString *)name;
-(id)object;
-(id)initWithName:(id)arg1 backgroundPriority:(unsigned)arg2 foregroundPriority:(unsigned)arg3 block:(/*^block*/id)arg4 ;
-(void)_beginLoadingBlock:(/*^block*/id)arg1 ;
@end

