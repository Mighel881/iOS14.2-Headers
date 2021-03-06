/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomePubSub/BiomePubSub-Structs.h>
#import <BiomePubSub/BPSSubscription.h>

@protocol BPSSubscriber;
@class NSMutableArray, NSMutableSet;

@interface _BPSAbstractOrderedMerge : BPSSubscription {

	os_unfair_lock_s _lock;
	os_unfair_lock_s _downstreamLock;
	BOOL _recursion;
	BOOL _finished;
	BOOL _errored;
	BOOL _cancelled;
	unsigned long long _upstreamCount;
	id<BPSSubscriber> _downstream;
	NSMutableArray* _subscriptions;
	NSMutableArray* _activeSubscriptions;
	NSMutableArray* _buffers;
	NSMutableArray* _requestsPerSubscription;
	NSMutableSet* _completedUpstreamIndexes;
	long long _demand;
	unsigned long long _finishCount;

}

@property (assign,nonatomic) unsigned long long upstreamCount;                      //@synthesize upstreamCount=_upstreamCount - In the implementation block
@property (nonatomic,retain) id<BPSSubscriber> downstream;                          //@synthesize downstream=_downstream - In the implementation block
@property (nonatomic,retain) NSMutableArray * subscriptions;                        //@synthesize subscriptions=_subscriptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * activeSubscriptions;                  //@synthesize activeSubscriptions=_activeSubscriptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * buffers;                              //@synthesize buffers=_buffers - In the implementation block
@property (nonatomic,retain) NSMutableArray * requestsPerSubscription;              //@synthesize requestsPerSubscription=_requestsPerSubscription - In the implementation block
@property (nonatomic,retain) NSMutableSet * completedUpstreamIndexes;               //@synthesize completedUpstreamIndexes=_completedUpstreamIndexes - In the implementation block
@property (assign,nonatomic) BOOL recursion;                                        //@synthesize recursion=_recursion - In the implementation block
@property (assign,nonatomic) BOOL finished;                                         //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic) BOOL errored;                                          //@synthesize errored=_errored - In the implementation block
@property (assign,nonatomic) BOOL cancelled;                                        //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) long long demand;                                      //@synthesize demand=_demand - In the implementation block
@property (assign,nonatomic) unsigned long long finishCount;                        //@synthesize finishCount=_finishCount - In the implementation block
-(NSMutableArray *)subscriptions;
-(void)setDownstream:(id<BPSSubscriber>)arg1 ;
-(id)upstreamSubscriptions;
-(BOOL)cancelled;
-(NSMutableArray *)activeSubscriptions;
-(void)setActiveSubscriptions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)buffers;
-(void)setFinished:(BOOL)arg1 ;
-(id<BPSSubscriber>)downstream;
-(long long)demand;
-(BOOL)finished;
-(void)setSubscriptions:(NSMutableArray *)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(void)requestDemand:(long long)arg1 ;
-(long long)compareFirst:(id)arg1 withSecond:(id)arg2 ;
-(BOOL)errored;
-(void)setBuffers:(NSMutableArray *)arg1 ;
-(void)cancel;
-(BOOL)recursion;
-(void)setRecursion:(BOOL)arg1 ;
-(void)setDemand:(long long)arg1 ;
-(void)receiveCompletion:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(long long)receiveInput:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)receiveSubscription:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(NSMutableArray *)requestsPerSubscription;
-(void)flushBufferAndRequestMoreWhileLocked;
-(NSMutableSet *)completedUpstreamIndexes;
-(unsigned long long)upstreamCount;
-(BOOL)isWaitingForMoreValues;
-(unsigned long long)finishCount;
-(void)setFinishCount:(unsigned long long)arg1 ;
-(void)setErrored:(BOOL)arg1 ;
-(id)nextValueIndex:(id*)arg1 ;
-(id)initWithDownstream:(id)arg1 upstreamCount:(unsigned long long)arg2 ;
-(void)setUpstreamCount:(unsigned long long)arg1 ;
-(void)setRequestsPerSubscription:(NSMutableArray *)arg1 ;
-(void)setCompletedUpstreamIndexes:(NSMutableSet *)arg1 ;
@end

