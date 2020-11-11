/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSMapTable;

@interface QLPXObservable : NSObject {

	long long _nestedChanges;
	NSMutableArray* _pendingChangeBlocks;
	long long _numAppliedPendingChanges;
	unsigned long long _currentChange;
	BOOL _isEnumeratingObservers;
	NSObject*<OS_dispatch_queue> _observersQueue;
	BOOL _observersQueue_shouldCopyChangeObserversOnWrite;
	NSMapTable* _observersQueue_changeObserversWithContexts;

}

@property (nonatomic,readonly) unsigned long long currentChanges; 
-(void)didPublishChanges;
-(void)_applyPendingChanges;
-(id)init;
-(unsigned long long)currentChanges;
-(void)willPerformChanges;
-(void)enumerateObserversUsingBlock:(/*^block*/id)arg1 ;
-(void)_publishChanges;
-(void)_didChange;
-(id)mutableChangeObject;
-(void)_observersQueue_copyChangeObserversForWriteIfNeeded;
-(void)didPerformChanges;
-(void)signalChange:(unsigned long long)arg1 ;
-(void)unregisterChangeObserver:(id)arg1 context:(void*)arg2 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)_willChange;
-(void)registerChangeObserver:(id)arg1 context:(void*)arg2 ;
@end
