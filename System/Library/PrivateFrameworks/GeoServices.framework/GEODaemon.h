/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source, OS_xpc_object;
@class NSMutableDictionary, NSMutableSet, NSObject, NSSet;

@interface GEODaemon : NSObject {

	NSMutableDictionary* _servers;
	NSMutableSet* _peers;
	NSObject*<OS_dispatch_source> _sigInfoSrc;
	NSObject*<OS_dispatch_source> _sigTermSrc;
	NSObject*<OS_xpc_object> _listener;

}

@property (nonatomic,readonly) NSSet * peers;              //@synthesize peers=_peers - In the implementation block
-(void)_localeChanged:(id)arg1 ;
-(id)initWithPort:(const char*)arg1 ;
-(void)start;
-(id)_createPeerForConnection:(id)arg1 ;
-(id)init;
-(void)startServerClassIfNecessary:(Class)arg1 ;
-(id)description;
-(id)_createListenerWithQueue:(id)arg1 onPort:(const char*)arg2 ;
-(void)addServerClass:(Class)arg1 ;
-(void)peerDidDisconnect:(id)arg1 ;
-(void)peerDidConnect:(id)arg1 ;
-(NSSet *)peers;
-(void)_handleNewConnection:(id)arg1 ;
-(void)handleIncomingMessage:(id)arg1 fromPeer:(id)arg2 ;
-(void)addServerInstance:(id)arg1 ;
-(void)dealloc;
@end
