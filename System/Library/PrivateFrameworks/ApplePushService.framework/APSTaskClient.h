/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSMutableArray, NSObject, NSString;

@interface APSTaskClient : NSObject {

	NSXPCConnection* _connection;
	NSMutableArray* _outstandingDNSRequests;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSString* _environment;

}
-(void)_clearOutstandingTasks:(long long)arg1 ;
-(void)_timeoutOutstandingRequests;
-(void)dealloc;
-(id)initWithEnvironment:(id)arg1 queue:(id)arg2 ;
-(id)_findDNSRequestForHostname:(id)arg1 ;
-(id)resolveDNS:(id)arg1 ;
@end
