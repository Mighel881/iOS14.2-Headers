/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface CUPowerSourceMonitor : NSObject {

	BOOL _activateCalled;
	NSMutableDictionary* _aggregateSources;
	NSMutableDictionary* _pendingAggregates;
	NSMutableDictionary* _powerSources;
	int _psNotifyTokenAccessoryAttach;
	int _psNotifyTokenAccessoryPowerSource;
	int _psNotifyTokenAccessoryTimeRemaining;
	int _psNotifyTokenAnyPowerSource;
	unsigned _changeFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	/*^block*/id _powerSourceFoundHandler;
	/*^block*/id _powerSourceLostHandler;
	/*^block*/id _powerSourceChangedHandler;

}

@property (assign,nonatomic) unsigned changeFlags;                                    //@synthesize changeFlags=_changeFlags - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id powerSourceFoundHandler;                                //@synthesize powerSourceFoundHandler=_powerSourceFoundHandler - In the implementation block
@property (nonatomic,copy) id powerSourceLostHandler;                                 //@synthesize powerSourceLostHandler=_powerSourceLostHandler - In the implementation block
@property (nonatomic,copy) id powerSourceChangedHandler;                              //@synthesize powerSourceChangedHandler=_powerSourceChangedHandler - In the implementation block
-(unsigned)changeFlags;
-(void)setChangeFlags:(unsigned)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_cleanup;
-(id)init;
-(void)_aggregatePowerSourceUpdate:(id)arg1 changes:(unsigned)arg2 ;
-(void)_updatePowerSources;
-(id)powerSourceFoundHandler;
-(id)invalidationHandler;
-(void)_handlePowerSourceFound:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3 ;
-(void)setPowerSourceLostHandler:(id)arg1 ;
-(void)_aggregatePowerSourceFound:(id)arg1 ;
-(id)powerSourceLostHandler;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_aggregatePowerSourceLost:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_handlePowerSourceUpdate:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setPowerSourceChangedHandler:(id)arg1 ;
-(void)setPowerSourceFoundHandler:(id)arg1 ;
-(void)_update;
-(void)_handlePowerSourceLost:(id)arg1 sourceID:(id)arg2 ;
-(void)invalidate;
-(id)powerSourceChangedHandler;
-(void)dealloc;
@end
