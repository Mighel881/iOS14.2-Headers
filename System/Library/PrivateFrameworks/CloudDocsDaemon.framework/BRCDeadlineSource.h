/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_workloop;
@class BRCDeadlineScheduler, NSString, NSObject;

@interface BRCDeadlineSource : NSObject {

	long long _deadline;
	BRCDeadlineScheduler* _scheduler;
	int _suspendCount;
	BOOL _cancelled;
	BOOL _signaled;
	NSString* _name;
	/*^block*/id _eventHandler;
	NSObject*<OS_dispatch_workloop> _workloop;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_workloop> workloop;              //@synthesize workloop=_workloop - In the implementation block
@property (nonatomic,copy) id eventHandler;                                         //@synthesize eventHandler=_eventHandler - In the implementation block
-(void)setEventHandler:(id)arg1 ;
-(void)setWorkloop:(NSObject*<OS_dispatch_workloop>)arg1 ;
-(void)suspend;
-(id)eventHandler;
-(id)description;
-(void)resume;
-(void)signal;
-(NSObject*<OS_dispatch_workloop>)workloop;
-(void)cancel;
-(id)initWithScheduler:(id)arg1 name:(id)arg2 ;
-(void)signalWithDeadline:(long long)arg1 ;
-(BOOL)willRunEvenHandler;
-(void)runEventHandler;
@end

