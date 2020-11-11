/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SSEventMonitorDelegate, OS_dispatch_queue;
@class NSObject, SSXPCConnection;

@interface SSEventMonitor : NSObject {

	id<SSEventMonitorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SSXPCConnection* _eventConnection;

}

@property (assign) id<SSEventMonitorDelegate> delegate; 
-(void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2 ;
-(id)init;
-(id<SSEventMonitorDelegate>)delegate;
-(void)_connectEventConnection;
-(void)setDelegate:(id<SSEventMonitorDelegate>)arg1 ;
-(void)dealloc;
@end
