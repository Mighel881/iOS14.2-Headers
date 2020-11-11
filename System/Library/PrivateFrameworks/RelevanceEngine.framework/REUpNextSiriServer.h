/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/REUpNextSiriServerInterface.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSMutableSet, NSObject, NSXPCListener, NSString;

@interface REUpNextSiriServer : NSObject <NSXPCListenerDelegate, REUpNextSiriServerInterface> {

	NSHashTable* _observers;
	NSMutableSet* _connections;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _listener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeObserver:(id)arg1 ;
-(id)init;
-(void)_removeConnection:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)addObserver:(id)arg1 ;
-(void)dealloc;
-(void)completedRequestWithDomain:(id)arg1 ;
-(void)_onqueue_async:(/*^block*/id)arg1 ;
-(void)_accessObservers:(/*^block*/id)arg1 ;
-(void)_accessRemoteClients:(/*^block*/id)arg1 ;
@end
