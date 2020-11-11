/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CATransaction : NSObject
+(void)mt_addCompletionBlock:(/*^block*/id)arg1 ;
+(void)commit;
+(unsigned)currentState;
+(void)lock;
+(double)inputTime;
+(/*^block*/id)completionBlock;
+(double)beginTime;
+(void)flush;
+(double)animationDuration;
+(void)unlock;
+(BOOL)lowLatency;
+(/*^block*/id)animator;
+(void)synchronize;
+(void)setCommitTime:(double)arg1 ;
+(void)setEarliestAutomaticCommitTime:(double)arg1 ;
+(double)earliestAutomaticCommitTime;
+(void)setInputTime:(double)arg1 ;
+(void)setAnimationDuration:(double)arg1 ;
+(id)_implicitAnimationForLayer:(id)arg1 keyPath:(id)arg2 ;
+(void)activateBackground:(BOOL)arg1 ;
+(void)activate;
+(id)committingContexts;
+(void)setCommittingContexts:(id)arg1 ;
+(void)pushAnimator:(/*^block*/id)arg1 ;
+(void)setCommitHandler:(/*^block*/id)arg1 ;
+(void)setPresentationHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
+(BOOL)animatesFromModelValues;
+(BOOL)disableSignPosts;
+(void)setAnimatesFromModelValues:(BOOL)arg1 ;
+(void)setDisableSignPosts:(BOOL)arg1 ;
+(BOOL)disableRunLoopObserverCommits;
+(void)setDisableRunLoopObserverCommits:(BOOL)arg1 ;
+(BOOL)frameStallSkipRequest;
+(void)assertInactive;
+(void)setFrameStallSkipRequest:(BOOL)arg1 ;
+(unsigned)registerBoolKey;
+(void)setLowLatency:(BOOL)arg1 ;
+(void)setDisableActions:(BOOL)arg1 ;
+(int)currentPhase;
+(void)setBeginTime:(double)arg1 ;
+(void)setBoolValue:(BOOL)arg1 forKey:(unsigned)arg2 ;
+(unsigned)startFrameWithReason:(int)arg1 beginTime:(double)arg2 commitDeadline:(double)arg3 ;
+(void)setFrameInputTime:(double)arg1 withToken:(unsigned)arg2 ;
+(void)finishFrameWithToken:(unsigned)arg1 ;
+(unsigned)generateSeed;
+(BOOL)boolValueForKey:(unsigned)arg1 ;
+(void)setCompletionBlock:(/*^block*/id)arg1 ;
+(void)begin;
+(void)setValue:(id)arg1 forKey:(id)arg2 ;
+(void)setAnimationTimingFunction:(id)arg1 ;
+(id)valueForKey:(id)arg1 ;
+(double)commitTime;
+(BOOL)addCommitHandler:(/*^block*/id)arg1 forPhase:(int)arg2 ;
+(BOOL)disableActions;
+(id)animationTimingFunction;
+(void)popAnimator;
@end
