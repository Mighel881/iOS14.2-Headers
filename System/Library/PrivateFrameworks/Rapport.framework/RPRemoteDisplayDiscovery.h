/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/RPRemoteDisplayXPCClientInterface.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSXPCConnection, NSObject, NSArray;

@interface RPRemoteDisplayDiscovery : NSObject <NSSecureCoding, RPRemoteDisplayXPCClientInterface> {

	BOOL _activateCalled;
	NSMutableDictionary* _discoveredDevices;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSXPCConnection* _xpcCnx;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	unsigned long long _controlFlags;
	/*^block*/id _deviceFoundHandler;
	/*^block*/id _deviceLostHandler;
	/*^block*/id _deviceChangedHandler;
	unsigned long long _errorFlags;
	/*^block*/id _errorFlagsChangedHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) unsigned long long controlFlags;                         //@synthesize controlFlags=_controlFlags - In the implementation block
@property (nonatomic,copy,readonly) NSArray * discoveredDevices; 
@property (nonatomic,copy) id deviceFoundHandler;                                     //@synthesize deviceFoundHandler=_deviceFoundHandler - In the implementation block
@property (nonatomic,copy) id deviceLostHandler;                                      //@synthesize deviceLostHandler=_deviceLostHandler - In the implementation block
@property (nonatomic,copy) id deviceChangedHandler;                                   //@synthesize deviceChangedHandler=_deviceChangedHandler - In the implementation block
@property (assign,nonatomic) unsigned long long errorFlags;                           //@synthesize errorFlags=_errorFlags - In the implementation block
@property (nonatomic,copy) id errorFlagsChangedHandler;                               //@synthesize errorFlagsChangedHandler=_errorFlagsChangedHandler - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)deviceFoundHandler;
-(void)setDeviceFoundHandler:(id)arg1 ;
-(void)setControlFlags:(unsigned long long)arg1 ;
-(unsigned long long)controlFlags;
-(id)deviceLostHandler;
-(void)setDeviceLostHandler:(id)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(id)interruptionHandler;
-(void)encodeWithCoder:(id)arg1 ;
-(id)invalidationHandler;
-(NSArray *)discoveredDevices;
-(id)description;
-(BOOL)shouldReportDevice:(id)arg1 ;
-(void)_interrupted;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)_ensureXPCStarted;
-(id)initWithCoder:(id)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setDeviceChangedHandler:(id)arg1 ;
-(void)_lostAllDevices;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_invalidated;
-(void)invalidate;
-(void)_activateWithCompletion:(/*^block*/id)arg1 reactivate:(BOOL)arg2 ;
-(id)deviceChangedHandler;
-(void)remoteDisplayFoundDevice:(id)arg1 ;
-(void)remoteDisplayLostDevice:(id)arg1 ;
-(void)remoteDisplayChangedDevice:(id)arg1 changes:(unsigned)arg2 ;
-(void)remoteDisplayUpdateErrorFlags:(unsigned long long)arg1 ;
-(unsigned long long)errorFlags;
-(void)setErrorFlags:(unsigned long long)arg1 ;
-(id)errorFlagsChangedHandler;
-(void)setErrorFlagsChangedHandler:(id)arg1 ;
@end
