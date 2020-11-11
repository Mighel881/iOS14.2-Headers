/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableSet, NSUUID, NSObject;

@interface _SYDeviceMonitor : NSObject {

	NSMutableSet* _devices;
	NSUUID* _currentTargetDeviceUUID;
	NSObject*<OS_dispatch_queue> _syncQ;

}
+(id)sharedInstance;
-(id)deviceForPairingID:(id)arg1 ;
-(id)allDevices;
-(id)init;
-(id)deviceForNRDevice:(id)arg1 ;
-(void)removeNRDevice:(id)arg1 ;
-(void)deviceBecameTargetable:(id)arg1 ;
-(void)addNRDevice:(id)arg1 ;
-(void)_deviceDidBecomeInactive:(id)arg1 ;
-(id)currentTargetableDevice;
-(void)_deviceDidBecomeActive:(id)arg1 ;
-(void)_clearDeviceList;
-(void)_rebuildDeviceList;
@end
