/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface _DPDataProtectionMaster : NSObject {

	BOOL _deviceFormatedForContentProtection;
	BOOL _notifyEnabled;
	int _notifyToken;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSMutableDictionary* _handlers;
	NSMutableDictionary* _availableState;
	NSObject*<OS_dispatch_queue> _notifyQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> stateQueue;               //@synthesize stateQueue=_stateQueue - In the implementation block
@property (nonatomic,readonly) BOOL deviceFormatedForContentProtection;               //@synthesize deviceFormatedForContentProtection=_deviceFormatedForContentProtection - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * handlers;                        //@synthesize handlers=_handlers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * availableState;                  //@synthesize availableState=_availableState - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> notifyQueue;              //@synthesize notifyQueue=_notifyQueue - In the implementation block
@property (nonatomic,readonly) int notifyToken;                                       //@synthesize notifyToken=_notifyToken - In the implementation block
@property (nonatomic,readonly) BOOL notifyEnabled;                                    //@synthesize notifyEnabled=_notifyEnabled - In the implementation block
+(id)sharedInstance;
-(int)notifyToken;
-(NSMutableDictionary *)handlers;
-(id)init;
-(void)handleKeyBagLockNotification;
-(NSObject*<OS_dispatch_queue>)notifyQueue;
-(BOOL)deviceIsLocked;
-(BOOL)isDataAvailableForClassC;
-(BOOL)isDataAvailableFor:(id)arg1 ;
-(BOOL)deviceIsPasswordConfigured;
-(NSObject*<OS_dispatch_queue>)stateQueue;
-(BOOL)deviceHasBeenUnlockedSinceBoot;
-(void)dealloc;
-(NSMutableDictionary *)availableState;
-(BOOL)isDataAvailableForClassA;
-(id)registerStateChangeHandler:(/*^block*/id)arg1 ;
-(void)deregisterStateChangeHandler:(id)arg1 ;
-(BOOL)deviceFormatedForContentProtection;
-(BOOL)notifyEnabled;
@end
