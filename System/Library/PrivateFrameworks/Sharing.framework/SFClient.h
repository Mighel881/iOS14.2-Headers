/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSXPCConnection;

@interface SFClient : NSObject {

	NSMutableSet* _assertions;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSXPCConnection* _xpcCnx;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(void)repairDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)activityStateWithCompletion:(/*^block*/id)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(void)appleIDInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)broadwayPresentCardWithCode:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)displayNameForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)findContact:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getDeviceAssets:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getPeopleSuggestions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)openSetupURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)preventExitForLocaleReason:(id)arg1 ;
-(void)displayStringForContactIdentifier:(id)arg1 deviceIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)repairDevice:(id)arg1 flags:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
-(void)_interrupted;
-(void)retriggerProximityPairing:(/*^block*/id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)retriggerProximitySetup:(/*^block*/id)arg1 ;
-(void)showDevicePickerWithInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setupDevice:(id)arg1 home:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_invalidate;
-(void)_ensureXPCStarted;
-(void)contactIDForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startProxCardTransactionWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)subCredentialPresentCardWithParams:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)reenableProxCardType:(unsigned char)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAudioRoutingScore:(int)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)testContinuityKeyboardBegin:(BOOL)arg1 ;
-(void)triggerHomeKitDeviceDetectedWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_invalidated;
-(void)invalidate;
-(void)triggerProximityAutoFillDetectedWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)wifiPasswordSharingAvailabilityWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)activateAssertionWithIdentifier:(id)arg1 ;
@end

