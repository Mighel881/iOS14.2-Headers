/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSCache, NSMapTable, NSObject;

@interface WBSCache : NSObject {

	NSCache* _cache;
	NSMapTable* _weakObjectsTable;
	NSObject*<OS_dispatch_queue> _cacheQueue;

}
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(id)init;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)_recacheObjectForKey:(id)arg1 ;
@end

