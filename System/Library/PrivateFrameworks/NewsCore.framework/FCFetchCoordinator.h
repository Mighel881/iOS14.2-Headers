/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FCBoostableOperationThrottlerDelegate.h>

@protocol FCFetchCoordinatorDelegate;
@class NSHashTable, NSCountedSet, NSMapTable, NFMutexLock, FCBoostableOperationThrottler, NSString;

@interface FCFetchCoordinator : NSObject <FCBoostableOperationThrottlerDelegate> {

	id<FCFetchCoordinatorDelegate> _delegate;
	unsigned long long _maxConcurrentFetchCount;
	NSHashTable* _fetchGroups;
	NSCountedSet* _allKeys;
	NSMapTable* _fetchOperationsByGroup;
	NFMutexLock* _accessLock;
	FCBoostableOperationThrottler* _fetchThrottler;

}

@property (nonatomic,retain) NSHashTable * fetchGroups;                                   //@synthesize fetchGroups=_fetchGroups - In the implementation block
@property (nonatomic,retain) NSCountedSet * allKeys;                                      //@synthesize allKeys=_allKeys - In the implementation block
@property (nonatomic,retain) NSMapTable * fetchOperationsByGroup;                         //@synthesize fetchOperationsByGroup=_fetchOperationsByGroup - In the implementation block
@property (nonatomic,retain) NFMutexLock * accessLock;                                    //@synthesize accessLock=_accessLock - In the implementation block
@property (nonatomic,retain) FCBoostableOperationThrottler * fetchThrottler;              //@synthesize fetchThrottler=_fetchThrottler - In the implementation block
@property (assign,nonatomic,__weak) id<FCFetchCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) unsigned long long maxConcurrentFetchCount;                            //@synthesize maxConcurrentFetchCount=_maxConcurrentFetchCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<FCFetchCoordinatorDelegate>)delegate;
-(void)setFetchOperationsByGroup:(NSMapTable *)arg1 ;
-(id)fetchKey:(id)arg1 qualityOfService:(long long)arg2 completionQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setAccessLock:(NFMutexLock *)arg1 ;
-(void)setMaxConcurrentFetchCount:(unsigned long long)arg1 ;
-(NSCountedSet *)allKeys;
-(void)setDelegate:(id<FCFetchCoordinatorDelegate>)arg1 ;
-(NFMutexLock *)accessLock;
-(void)setFetchGroups:(NSHashTable *)arg1 ;
-(NSHashTable *)fetchGroups;
-(void)setFetchThrottler:(FCBoostableOperationThrottler *)arg1 ;
-(void)addFetchGroup:(id)arg1 ;
-(void)removeFetchGroup:(id)arg1 ;
-(void)beginFetchesIfNeededWithLock;
-(void)cancelFetchesIfNeededWithLock;
-(unsigned long long)maxConcurrentFetchCount;
-(id)fetchKeysUnconditionally:(id)arg1 context:(id)arg2 qualityOfService:(long long)arg3 relativePriority:(long long)arg4 completionQueue:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)fetchKeys:(id)arg1 context:(id)arg2 qualityOfService:(long long)arg3 relativePriority:(long long)arg4 completionQueue:(id)arg5 completion:(/*^block*/id)arg6 ;
-(FCBoostableOperationThrottler *)fetchThrottler;
-(void)setAllKeys:(NSCountedSet *)arg1 ;
-(void)operationThrottlerPerformOperation:(id)arg1 ;
-(NSMapTable *)fetchOperationsByGroup;
@end
