/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TRIXPCActivityManagementProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, TRIServerContext, TRITaskQueue;

@interface TRIXPCActivityManager : NSObject <TRIXPCActivityManagementProtocol> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	TRIServerContext* _context;
	TRITaskQueue* _taskQueue;

}

@property (nonatomic,retain) TRIServerContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) TRITaskQueue * taskQueue;                //@synthesize taskQueue=_taskQueue - In the implementation block
-(void)setTaskQueue:(TRITaskQueue *)arg1 ;
-(TRITaskQueue *)taskQueue;
-(TRIServerContext *)context;
-(void)setContext:(TRIServerContext *)arg1 ;
-(id)initWithDispatchQueue:(id)arg1 ;
-(void)registerActivities;
-(void)_registerRetryFailuresActivity;
-(void)_registerFetchExperimentsActivity;
-(void)_registerCellularActivityWithDelay:(double)arg1 ;
-(void)_registerPostUpgradeActivity;
-(void)_registerPlaceholderTaskQueueActivity;
-(void)_registerClientTriggeredActivities;
-(void)_setJitterForXPCActivity:(id)arg1 withLabel:(id)arg2 ;
-(void)_setDelay:(double)arg1 forXPCActivity:(id)arg2 withLabel:(id)arg3 ;
-(void)_scheduleMaintenanceAndFetchTasksWithActivityDescriptor:(id)arg1 label:(id)arg2 ;
-(void)postponeCellularActivity;
@end
