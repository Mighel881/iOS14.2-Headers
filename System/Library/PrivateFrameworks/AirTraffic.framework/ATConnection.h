/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ATConnectionDelegate.h>

@protocol ATConnectionDelegate;
@class NSXPCConnection, NSMutableArray, NSObject, NSString;

@interface ATConnection : NSObject <ATConnectionDelegate> {

	NSXPCConnection* _xpcConnection;
	BOOL _registerForStatus;
	NSMutableArray* _registeredDataclasses;
	int _atcRunningToken;
	BOOL _atcRunning;
	NSObject*<ATConnectionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) NSObject*<ATConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)connectionWasInterrupted:(id)arg1 ;
-(void)clearSyncData;
-(id)init;
-(NSObject*<ATConnectionDelegate>)delegate;
-(id)restoreDeviceWithIdentifier:(id)arg1 ;
-(void)_handleDisconnect;
-(void)unregisterForStatus;
-(void)prioritizeAsset:(id)arg1 forDataclass:(id)arg2 ;
-(BOOL)getDataRestoreIsComplete;
-(void)connection:(id)arg1 updatedAssets:(id)arg2 ;
-(void)openDeviceMessageLinkWithPriority:(int)arg1 ;
-(void)requestKeybagSyncToPairedDevice;
-(void)lowBatteryNotification;
-(void)purgePartialAsset:(id)arg1 forDataclass:(id)arg2 ;
-(void)setDelegate:(NSObject*<ATConnectionDelegate>)arg1 ;
-(void)_sendStatusRegistration;
-(BOOL)isSyncing:(BOOL*)arg1 automatically:(BOOL*)arg2 wirelessly:(BOOL*)arg3 ;
-(void)_sendStatusRegistrationWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelSync;
-(void)requestSyncForPairedDeviceWithPriority:(int)arg1 ;
-(void)openDeviceMessageLink;
-(void)initiateAssetDownloadSessionsWithCompletion:(/*^block*/id)arg1 ;
-(void)connection:(id)arg1 updatedProgress:(id)arg2 ;
-(void)registerForStatus;
-(id)getAssetMetrics;
-(void)requestSyncForLibrary:(id)arg1 ;
-(void)registerForAssetProgressForDataclass:(id)arg1 ;
-(void)dealloc;
-(void)keepATCAlive:(BOOL)arg1 ;
@end

