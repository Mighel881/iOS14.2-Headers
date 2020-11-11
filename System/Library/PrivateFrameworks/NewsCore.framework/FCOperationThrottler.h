/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FCOperationThrottler.h>

@protocol FCOperationThrottler
@property (assign) BOOL suspended; 
@required
-(void)tickle;
-(void)setSuspended:(BOOL)arg1;
-(BOOL)suspended;
-(void)tickleWithCompletion:(/*^block*/id)arg1;

@end


@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;
@class NSObject;

@interface FCOperationThrottler : NSObject <FCOperationThrottler> {

	NSObject*<OS_dispatch_source> _dispatchSource;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_group> _handlerSynchronizationGroup;
	BOOL _suspended;

}

@property (assign) BOOL suspended;              //@synthesize suspended=_suspended - In the implementation block
-(void)tickle;
-(id)init;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)suspended;
-(id)initWithDelegate:(id)arg1 updateQueue:(id)arg2 ;
-(void)addCompletionForCurrentOperation:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)tickleWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end
