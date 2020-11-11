/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSObject, NSMutableDictionary, NSCountedSet, NSDate, WBSHistoryDatabaseAccessBroker, WBSHistoryURLCompletionDataStore, NSURL, NSString;

@interface WBSHistoryService : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	NSObject*<OS_dispatch_queue> _historyServiceQueue;
	NSMutableDictionary* _openedDatabases;
	NSCountedSet* _openedDatabasesRefCounts;
	NSDate* _initDate;
	WBSHistoryDatabaseAccessBroker* _databaseAccessBroker;
	WBSHistoryURLCompletionDataStore* _urlCompletionDataStore;

}

@property (nonatomic,readonly) WBSHistoryDatabaseAccessBroker * databaseAccessBroker;                  //@synthesize databaseAccessBroker=_databaseAccessBroker - In the implementation block
@property (nonatomic,readonly) WBSHistoryURLCompletionDataStore * urlCompletionDataStore;              //@synthesize urlCompletionDataStore=_urlCompletionDataStore - In the implementation block
@property (nonatomic,readonly) NSURL * databaseURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)shutdown;
-(id)init;
-(void)disconnectDatabase:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSURL *)databaseURL;
-(void)connectWithOptions:(id)arg1 connection:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(WBSHistoryDatabaseAccessBroker *)databaseAccessBroker;
-(BOOL)_connectionIsEntitledToUseUserDatabase:(id)arg1 ;
-(id)_openOrReuseExistingDatabaseWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)resume;
-(WBSHistoryURLCompletionDataStore *)urlCompletionDataStore;
-(id)_createListener;
-(void)dealloc;
@end
