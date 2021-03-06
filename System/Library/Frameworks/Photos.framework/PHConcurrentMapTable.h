/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable;

@interface PHConcurrentMapTable : NSObject {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSMapTable* _protectedTable;

}
+(id)mapTable;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(id)init;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(id)allKeys;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)_dispatchIsolatedWriteAsync:(/*^block*/id)arg1 ;
-(void)_dispatchIsolatedWriteSync:(/*^block*/id)arg1 ;
-(void)_dispatchIsolatedRead:(/*^block*/id)arg1 ;
-(BOOL)tryRemoveObjectForKey:(id)arg1 ;
@end

