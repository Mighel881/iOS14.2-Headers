/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object, OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSObject, NSMutableArray, NSMutableDictionary;

@interface AVConferenceXPCServer : NSObject {

	NSObject*<OS_xpc_object> listener;
	NSMutableArray* clientConnections;
	NSMutableDictionary* registeredBlocks;
	NSObject*<OS_dispatch_queue> incomingMessageQueue;
	NSObject*<OS_dispatch_queue> outgoingMessageQueue;
	NSObject*<OS_dispatch_queue> clientConnectionsQueue;

}

@property (readonly) NSObject*<OS_xpc_object> listener; 
@property (readonly) NSMutableDictionary * registeredBlocks; 
+(id)AVConferenceXPCServerSingleton;
-(oneway void)release;
-(void)sendMessageAsync:(char*)arg1 arguments:(id)arg2 xpcArguments:(id)arg3 context:(id)arg4 ;
-(id)init;
-(NSObject*<OS_xpc_object>)listener;
-(id)allocWithZone:(NSZone*)arg1 ;
-(void)registerBlockForService:(char*)arg1 block:(/*^block*/id)arg2 queue:(id)arg3 ;
-(void)sendMessageAsync:(char*)arg1 arguments:(id)arg2 ;
-(void)_xpc_handle_incoming_request:(id)arg1 ;
-(id)newXPCDictionaryFromNSDictionary:(id)arg1 forEvent:(id)arg2 ;
-(void)sendMessageAsync:(char*)arg1 arguments:(id)arg2 toAllClientsWithContext:(id)arg3 ;
-(id)retain;
-(id)newNSDictionaryFromXPCDictionary:(id)arg1 ;
-(NSMutableDictionary *)registeredBlocks;
-(id)newNSErrorFromNSDictionary:(id)arg1 ;
-(void)_xpc_remove_connection_from_list:(id)arg1 ;
-(void)sendMessageAsync:(char*)arg1 arguments:(id)arg2 context:(id)arg3 ;
-(id)_xpc_get_connection_from_list_for_context:(id)arg1 ;
-(void)registerBlockForService:(char*)arg1 block:(/*^block*/id)arg2 queue:(id)arg3 eventLogLevel:(int)arg4 ;
-(void)_xpc_add_connection_to_list:(id)arg1 ;
-(id)newNSDictionaryFromNSError:(id)arg1 ;
-(id)autorelease;
-(void)_xpc_start_listening_for_connections;
-(id)_xpc_get_connection_from_list_for_connection:(id)arg1 ;
-(id)authorizedTokenData;
-(void)appendContextToDictionary:(id)arg1 forConnection:(id)arg2 ;
-(unsigned long long)retainCount;
-(void)appendPIDToDictionary:(id)arg1 pid:(int)arg2 ;
-(void)registerBlockForService:(char*)arg1 block:(/*^block*/id)arg2 ;
-(id)_xpc_get_connections_from_list_for_context:(id)arg1 ;
-(void)_xpc_remove_connections_from_list;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newClientDiedDictionary;
-(void)deregisterFromService:(char*)arg1 ;
-(void)dealloc;
@end

