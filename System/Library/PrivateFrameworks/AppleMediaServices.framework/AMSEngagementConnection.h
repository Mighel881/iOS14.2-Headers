/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AMSEngagementServiceProtocol, OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface AMSEngagementConnection : NSObject {

	id<AMSEngagementServiceProtocol> _proxy;
	/*^block*/id _errorHandler;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSXPCConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) id<AMSEngagementServiceProtocol> proxy;              //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,copy) id errorHandler;                                       //@synthesize errorHandler=_errorHandler - In the implementation block
-(id<AMSEngagementServiceProtocol>)proxy;
-(void)setProxy:(id<AMSEngagementServiceProtocol>)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(id)init;
-(id)_newRemoteConnection;
-(void)_removeRemoteConnection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)connection;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
@end

