/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_HKXPCExportable.h>

@class HKHealthStore, HKTaskServerProxyProvider, NSUUID, NSString;

@interface HKSecondaryDevicePairingAgent : NSObject <_HKXPCExportable> {

	HKHealthStore* _healthStore;
	HKTaskServerProxyProvider* _proxyProvider;
	NSUUID* _identifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterface;
+(id)serverInterface;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg1 ;
-(void)requestTinkerSharingOptInWithGuardianDisplayName:(id)arg1 NRDeviceUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setupHealthSharingForSecondaryPairedDeviceWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performEndToEndCloudSyncWithNRDeviceUUID:(id)arg1 syncParticipantFirst:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)tearDownHealthSharingWithPairedGuardianWithCompletion:(/*^block*/id)arg1 ;
-(void)tearDownHealthSharingWithTinkerDeviceWithNRUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchSharingStatusWithPairedGuardianWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchSharingStatusForCurrentAppleIDWithOwnerEmailAddress:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
