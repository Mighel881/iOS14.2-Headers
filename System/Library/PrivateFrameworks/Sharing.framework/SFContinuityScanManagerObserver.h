/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SFContinuityScanManagerObserver <NSObject>
@required
-(void)scanManager:(id)arg1 receivedAdvertisement:(id)arg2;
-(void)scanManager:(id)arg1 pairedDevicesChanged:(id)arg2;
-(void)scanManager:(id)arg1 foundDeviceWithDevice:(id)arg2;
-(void)scanManager:(id)arg1 lostDeviceWithDevice:(id)arg2;

@end

