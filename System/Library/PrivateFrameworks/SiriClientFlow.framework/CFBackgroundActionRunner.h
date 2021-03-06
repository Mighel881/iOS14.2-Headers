/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface CFBackgroundActionRunner : NSObject {

	BOOL _runningLocally;
	BOOL _backgroundActionRunnerSuccess;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign) BOOL backgroundActionRunnerSuccess;              //@synthesize backgroundActionRunnerSuccess=_backgroundActionRunnerSuccess - In the implementation block
@property (assign) BOOL runningLocally;                             //@synthesize runningLocally=_runningLocally - In the implementation block
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)runBackgroundActions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setBackgroundActionRunnerSuccess:(BOOL)arg1 ;
-(void)_handleBackgroundAction:(id)arg1 onDispatchGroup:(id)arg2 ;
-(BOOL)backgroundActionRunnerSuccess;
-(void)_handleBackgroundActionRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)runningLocally;
-(void)setRunningLocally:(BOOL)arg1 ;
@end

