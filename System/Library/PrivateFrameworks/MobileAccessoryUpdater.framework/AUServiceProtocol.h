/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AUServiceProtocol
@required
-(void)deviceClassAttached:(id)arg1 options:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)bootstrapWithOptions:(id)arg1;
-(void)findFirmwareWithOptions:(id)arg1 remote:(BOOL)arg2;
-(void)downloadFirmwareWithOptions:(id)arg1;
-(void)prepareFirmwareWithOptions:(id)arg1;
-(void)applyFirmwareWithOptions:(id)arg1;
-(void)finishWithOptions:(id)arg1;
-(void)queryDeviceList:(/*^block*/id)arg1;
-(void)personalizationResponse:(id)arg1 response:(id)arg2 status:(id)arg3;

@end

