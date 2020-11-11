/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WBSHistoryConnectionProxy.h>

@protocol WBSHistoryConnectionProxy <WBSHistoryConnectionProtocol>
@property (assign,nonatomic,__weak) id<WBSHistoryConnectionProxyDelegate> delegate; 
@required
-(id<WBSHistoryConnectionProxyDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id)queryMemoryFootprintWithError:(id*)arg1;

@end


@protocol WBSHistoryConnectionProxyDelegate, OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface WBSHistoryConnectionProxy : NSObject <WBSHistoryConnectionProxy> {

	NSXPCConnection* _connection;
	id<WBSHistoryConnectionProxyDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _connectionProxyQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> connectionProxyQueue;                //@synthesize connectionProxyQueue=_connectionProxyQueue - In the implementation block
@property (assign,nonatomic,__weak) id<WBSHistoryConnectionProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_setupConnection;
-(id)init;
-(id<WBSHistoryConnectionProxyDelegate>)delegate;
-(void)disconnectWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)initializeCloudHistoryWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<WBSHistoryConnectionProxyDelegate>)arg1 ;
-(void)debugGetDatabaseURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)_defaultProxyErrorHandlerWithSimpleReplyCompletionHandler:(/*^block*/id)arg1 ;
-(void)getServiceInfo:(/*^block*/id)arg1 ;
-(void)groupVisitsIntoSessionsBetweenStartDate:(id)arg1 endDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)beginHistoryAccessSession:(/*^block*/id)arg1 ;
-(void)connectWithOptions:(id)arg1 delegate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_createConnection;
-(void)beginURLCompletionSession:(/*^block*/id)arg1 ;
-(void)killService;
-(void)releaseCloudHistory:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)connectionProxyQueue;
-(void)ensureConnected:(/*^block*/id)arg1 ;
-(id)queryMemoryFootprintWithError:(id*)arg1 ;
-(void)getVisitedLinksWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)queryMemoryFootprint:(/*^block*/id)arg1 ;
-(void)finishClearingHistoryIfNecessaryWithCompletionHandler:(/*^block*/id)arg1 ;
@end
