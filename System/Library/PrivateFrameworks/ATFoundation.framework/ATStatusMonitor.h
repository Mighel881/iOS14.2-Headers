/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, NSMapTable, NSMutableSet, NSMutableDictionary;

@interface ATStatusMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _statusQueue;
	NSHashTable* _statusObservers;
	NSMapTable* _observerDataClasses;
	NSMutableSet* _statuses;
	NSMutableDictionary* _statusDictionary;

}
+(id)sharedMonitor;
-(void)removeObserver:(id)arg1 ;
-(id)init;
-(void)updateStatus:(id)arg1 ;
-(id)allStatus;
-(void)addObserver:(id)arg1 ;
-(void)setDataClasses:(id)arg1 forObserver:(id)arg2 ;
-(void)updateStatusWithValue:(id)arg1 forKey:(id)arg2 ;
-(void)updateStatusValuesWithDictionary:(id)arg1 ;
-(void)updateAssets:(id)arg1 ;
@end
