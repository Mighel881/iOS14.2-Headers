/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class AVFlashlight, NSObject, NSHashTable;

@interface SBUIFlashlightController : NSObject {

	AVFlashlight* _flashlight;
	NSObject*<OS_dispatch_queue> _flashlightQueue;
	unsigned long long _level;
	NSHashTable* _observers;
	BOOL _overheated;
	BOOL _available;

}

@property (getter=isAvailable,nonatomic,readonly) BOOL available;                //@synthesize available=_available - In the implementation block
@property (getter=isOverheated,nonatomic,readonly) BOOL overheated;              //@synthesize overheated=_overheated - In the implementation block
@property (assign,nonatomic) unsigned long long level; 
+(id)sharedInstance;
-(void)warmUp;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_storeFlashlightLevel:(unsigned long long)arg1 ;
-(BOOL)isAvailable;
-(void)removeAllObservers;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isOverheated;
-(id)init;
-(unsigned long long)_loadFlashlightLevel;
-(void)_turnPowerOff;
-(void)_postLevelChangeNotification:(unsigned long long)arg1 ;
-(void)turnFlashlightOffForReason:(id)arg1 ;
-(void)_turnPowerOn;
-(void)addObserver:(id)arg1 ;
-(void)_postOverheatedChangeNotification:(BOOL)arg1 ;
-(unsigned long long)level;
-(void)_postAvailabilityChangeNotification:(BOOL)arg1 ;
-(void)_setFlashlightLevel:(float)arg1 ;
-(void)_updateStateWithAvailable:(BOOL)arg1 level:(unsigned long long)arg2 overheated:(BOOL)arg3 ;
-(void)coolDown;
-(void)turnFlashlightOnForReason:(id)arg1 ;
-(void)setLevel:(unsigned long long)arg1 ;
@end
