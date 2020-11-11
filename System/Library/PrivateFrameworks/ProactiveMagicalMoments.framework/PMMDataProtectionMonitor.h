/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PMMDataProtectionMonitorDelegate;
#import <ProactiveMagicalMoments/ProactiveMagicalMoments-Structs.h>
@interface PMMDataProtectionMonitor : NSObject {

	id<PMMDataProtectionMonitorDelegate> _delegate;
	long long _encryptedDataAvailability;
	BOOL _unlockedSinceBoot;
	long long _dataProtectionStatus;
	opaque_pthread_rwlock_t _rwlock;

}

@property (assign,nonatomic,__weak) id<PMMDataProtectionMonitorDelegate> delegate; 
@property (nonatomic,readonly) long long encryptedDataAvailability; 
@property (nonatomic,readonly) BOOL unlockedSinceBoot; 
@property (nonatomic,readonly) long long dataProtectionStatus;                                  //@synthesize dataProtectionStatus=_dataProtectionStatus - In the implementation block
+(id)PMMDataProtectionMonitorLockStateToString:(long long)arg1 ;
+(id)PMMDataProtectionMonitorEncryptedDataAvailabilityToString:(long long)arg1 ;
+(id)PMMDataProtectionMonitorDataProtectionStatus:(long long)arg1 ;
-(void)setEncryptedDataAvailability:(long long)arg1 ;
-(long long)encryptedDataAvailability;
-(BOOL)unlockedSinceBoot;
-(id)init;
-(id<PMMDataProtectionMonitorDelegate>)delegate;
-(void)handkeKeybagLockStatusChange:(long long)arg1 ;
-(void)setDelegate:(id<PMMDataProtectionMonitorDelegate>)arg1 ;
-(void)setUnlockedSinceBoot:(BOOL)arg1 ;
-(BOOL)dataProtectionEnabled;
-(void)setDataProtectionStatus:(long long)arg1 ;
-(long long)dataProtectionStatus;
-(void)handleUnlockedSinceBoot;
-(void)dealloc;
-(void)_registerForKeyBagNotifications;
@end
