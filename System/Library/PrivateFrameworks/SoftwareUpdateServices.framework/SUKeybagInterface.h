/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable;

@interface SUKeybagInterface : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _observerCalloutQueue;
	BOOL _queue_hasPasscodeSet;
	BOOL _queue_isPasscodeLocked;
	NSHashTable* _queue_observers;
	int _stateChangedNotifyToken;

}

@property (nonatomic,readonly) BOOL hasPasscodeSet; 
@property (nonatomic,readonly) BOOL isPasscodeLocked; 
+(id)sharedInstance;
-(void)lockDevice;
-(double)backOffTime;
-(BOOL)authenticate:(id)arg1 ;
-(BOOL)isPasscodeLocked;
-(void)removeObserver:(id)arg1 ;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(id)_init;
-(BOOL)hasPasscodeSet;
-(void)dealloc;
-(void)_queue_refreshState;
-(int)_queue_fetchKeybagState;
-(BOOL)_queue_hasPasscodeSetFromLockState:(int)arg1 ;
-(void)_queue_setHasPasscodeSet:(BOOL)arg1 ;
-(BOOL)_queue_isPasscodeLockedFromLockState:(int)arg1 ;
-(void)_queue_setIsPasscodeLocked:(BOOL)arg1 ;
-(BOOL)hadFirstUnlock;
-(int)installationKeybagStateForDescriptor:(id)arg1 ;
-(BOOL)createInstallationKeybagForDescriptor:(id)arg1 withSecret:(id)arg2 forUnattendedInstall:(BOOL)arg3 ;
-(BOOL)persistKeybagStash;
-(BOOL)disableKeybagStash;
-(id)createPreventLockAssertionWithDuration:(double)arg1 ;
@end

