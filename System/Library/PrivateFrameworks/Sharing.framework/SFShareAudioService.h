/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SFProxCardXPCClientInterface.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSString, SFBluetoothPairingSession, SFProxCardSessionClient, SFService, SFSession, CUBluetoothClient, NSObject, SDStatusMonitor;

@interface SFShareAudioService : NSObject <SFProxCardXPCClientInterface> {

	NSString* _guestDeviceAddress;
	NSString* _headphonesAddress;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	SFBluetoothPairingSession* _pairingSession;
	SFProxCardSessionClient* _proxCardSessionClient;
	/*^block*/id _responseHandler;
	SFService* _sfService;
	SFSession* _sfSession;
	CUBluetoothClient* _searchBTClient;
	NSObject*<OS_dispatch_source> _searchTimer;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SDStatusMonitor* _statusMonitor;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) SDStatusMonitor * statusMonitor;                         //@synthesize statusMonitor=_statusMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_handleShareAudioFoundDevice:(id)arg1 ;
-(void)_handleShareAudioRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleShareAudioSearchTimeout;
-(void)activate;
-(void)_handleSessionStarted:(id)arg1 ;
-(void)_handleShareAudioPairingCompleted:(id)arg1 error:(id)arg2 ;
-(void)setStatusMonitor:(SDStatusMonitor *)arg1 ;
-(void)_handleShareAudioRequest2:(id)arg1 contact:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)xpcPerformAction:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleSessionEnded:(id)arg1 error:(id)arg2 ;
-(void)_invalidate;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_sfServiceStart;
-(void)invalidate;
-(void)_handleShareAudioResponse:(int)arg1 error:(id)arg2 ;
-(SDStatusMonitor *)statusMonitor;
@end
