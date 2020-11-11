/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_semaphore;
@class NSXPCConnection, NSObject, NSError;

@interface DIBaseXPCHandler : NSObject {

	BOOL _isPrivileged;
	id _remoteProxy;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSError* _xpcError;

}

@property (nonatomic,retain) id remoteProxy;                                          //@synthesize remoteProxy=_remoteProxy - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                            //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
@property (nonatomic,retain) NSError * xpcError;                                      //@synthesize xpcError=_xpcError - In the implementation block
@property (assign,nonatomic) BOOL isPrivileged;                                       //@synthesize isPrivileged=_isPrivileged - In the implementation block
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(id)init;
-(void)createConnection;
-(void)closeConnection;
-(id)remoteObjectInterface;
-(void)setSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(BOOL)connectWithError:(id*)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)connection;
-(id)serviceName;
-(void)dealloc;
-(id)remoteProxy;
-(void)setRemoteProxy:(id)arg1 ;
-(BOOL)isPrivileged;
-(void)setXpcError:(NSError *)arg1 ;
-(NSError *)xpcError;
-(BOOL)dupStderrWithError:(id*)arg1 ;
-(void)setIsPrivileged:(BOOL)arg1 ;
-(void)signalCommandCompletedWithXpcError:(id)arg1 ;
-(BOOL)completeCommandWithError:(id*)arg1 ;
@end
