/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CRKWiProxTrackerScannerDelegate <NSObject>
@required
-(void)trackerScanner:(id)arg1 didUpdateZoneTrackerState:(id)arg2;
-(void)trackerScanner:(id)arg1 zoneTracker:(id)arg2 enteredZone:(id)arg3;
-(void)trackerScanner:(id)arg1 zoneTracker:(id)arg2 exitedZone:(id)arg3;
-(void)trackerScanner:(id)arg1 zoneTracker:(id)arg2 didFailToRegisterZones:(id)arg3 withError:(id)arg4;
-(void)trackerScanner:(id)arg1 didUpdateDeviceScannerState:(id)arg2;
-(void)trackerScanner:(id)arg1 scanner:(id)arg2 foundRequestedDevices:(id)arg3;
-(void)trackerScanner:(id)arg1 scanner:(id)arg2 foundDevice:(id)arg3 withData:(id)arg4;
-(void)trackerScanner:(id)arg1 scanner:(id)arg2 didFailToRegisterDevices:(id)arg3 withError:(id)arg4;

@end
