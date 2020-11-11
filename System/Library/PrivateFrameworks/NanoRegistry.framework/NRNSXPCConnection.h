/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NRNSXPCConnectionProtocol.h>

@class NSXPCInterface, NSString, NSXPCConnection;

@interface NRNSXPCConnection : NSObject <NRNSXPCConnectionProtocol> {

	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCInterface * exportedInterface; 
@property (nonatomic,retain) id exportedObject; 
@property (nonatomic,retain) NSXPCInterface * remoteObjectInterface; 
@property (nonatomic,retain,readonly) id remoteObjectProxy; 
@property (nonatomic,copy) id interruptionHandler; 
@property (nonatomic,copy) id invalidationHandler; 
@property (nonatomic,readonly) int processIdentifier; 
@property (nonatomic,retain,readonly) NSString * processName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(id)exportedObject;
-(id)remoteObjectProxy;
-(void)setRemoteObjectInterface:(NSXPCInterface *)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)interruptionHandler;
-(void)setExportedObject:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(NSString *)processName;
-(void)suspend;
-(id)valueForEntitlement:(id)arg1 ;
-(id)invalidationHandler;
-(NSXPCInterface *)exportedInterface;
-(NSXPCInterface *)remoteObjectInterface;
-(void)_setQueue:(id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)resume;
-(int)processIdentifier;
-(void)runCompletionBlock:(/*^block*/id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)invalidate;
@end
