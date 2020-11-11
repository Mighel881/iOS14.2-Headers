/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source, AWSchedulerObserver;
#import <AttentionAwareness/AttentionAwareness-Structs.h>
@class NSObject, NSMutableArray, AWAttentionSampler;

@interface AWScheduler : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;
	NSMutableArray* _clients;
	AWAttentionSampler* _attentionSampler;
	id<AWSchedulerObserver> _observer;

}

@property (assign,nonatomic,__weak) id<AWSchedulerObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) AWAttentionSampler * attentionSampler;              //@synthesize attentionSampler=_attentionSampler - In the implementation block
+(id)sharedScheduler;
+(id)sharedUnitTestScheduler;
-(void)processHIDEvent:(IOHIDEventRef)arg1 mask:(unsigned long long)arg2 timestamp:(unsigned long long)arg3 ;
-(void)setObserver:(id<AWSchedulerObserver>)arg1 ;
-(void)armEvents;
-(AWAttentionSampler *)attentionSampler;
-(id)description;
-(id)initForUnitTest:(BOOL)arg1 ;
-(void)setSmartCoverClosed:(BOOL)arg1 ;
-(void)removeInvalidClients;
-(void)reevaluate;
-(id<AWSchedulerObserver>)observer;
-(void)removeInvalidClientsWithConnection:(id)arg1 ;
-(void)addClient:(id)arg1 ;
@end
