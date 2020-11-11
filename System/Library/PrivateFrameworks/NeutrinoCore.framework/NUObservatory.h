/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface NUObservatory : NSObject {

	NSObject*<OS_dispatch_queue> _serializer;
	NSMutableArray* _observations;

}
-(void)removeObserver:(id)arg1 ;
-(void)_removeObserver:(id)arg1 ;
-(id)init;
-(void)removeObserver:(id)arg1 forKey:(long long)arg2 ;
-(id)addObserverForKey:(long long)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)addObserver:(id)arg1 forKey:(long long)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)_addObservation:(id)arg1 ;
-(void)_removeObserver:(id)arg1 forKey:(long long)arg2 ;
-(void)notifyAllObserversForKey:(long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_notifyAllObserversForKey:(long long)arg1 withBlock:(/*^block*/id)arg2 ;
@end
