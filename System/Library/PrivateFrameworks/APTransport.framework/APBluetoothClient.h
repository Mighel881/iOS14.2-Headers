/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/APTransport.framework/APTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WPAirPlaySoloDelegate.h>

@protocol APBluetoothClientDelegate, OS_dispatch_queue, OS_dispatch_source;
@class NSMutableDictionary, NSObject, NSDictionary, WPAirPlaySolo, NSString;

@interface APBluetoothClient : NSObject <WPAirPlaySoloDelegate> {

	id<APBluetoothClientDelegate> _delegate;
	BOOL _isFirstCycle;
	BOOL _isSourcePresenceAdvertising;
	BOOL _isStartAdvertisingPending;
	BOOL _isStopAdvertisingPending;
	NSMutableDictionary* _nearbyDevices;
	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _sourcePresenceAdvertisingData;
	NSObject*<OS_dispatch_source> _sourcePresenceAdvertisingTimer;
	NSObject*<OS_dispatch_source> _sourcePresenceWaitingTimer;
	WPAirPlaySolo* _wpAirPlaySolo;

}

@property (assign,nonatomic) BOOL isFirstCycle;                                                         //@synthesize isFirstCycle=_isFirstCycle - In the implementation block
@property (assign,nonatomic) BOOL isSourcePresenceAdvertising;                                          //@synthesize isSourcePresenceAdvertising=_isSourcePresenceAdvertising - In the implementation block
@property (assign,nonatomic) BOOL isStartAdvertisingPending;                                            //@synthesize isStartAdvertisingPending=_isStartAdvertisingPending - In the implementation block
@property (assign,nonatomic) BOOL isStopAdvertisingPending;                                             //@synthesize isStopAdvertisingPending=_isStopAdvertisingPending - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * nearbyDevices;                                       //@synthesize nearbyDevices=_nearbyDevices - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> queue;                                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSDictionary * sourcePresenceAdvertisingData;                                //@synthesize sourcePresenceAdvertisingData=_sourcePresenceAdvertisingData - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_source> sourcePresenceAdvertisingTimer;              //@synthesize sourcePresenceAdvertisingTimer=_sourcePresenceAdvertisingTimer - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_source> sourcePresenceWaitingTimer;                  //@synthesize sourcePresenceWaitingTimer=_sourcePresenceWaitingTimer - In the implementation block
@property (nonatomic,retain) WPAirPlaySolo * wpAirPlaySolo;                                             //@synthesize wpAirPlaySolo=_wpAirPlaySolo - In the implementation block
@property (readonly) long long state; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSourcePresenceWaitingTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)airPlaySoloStartedScanning:(id)arg1 ;
-(id)init;
-(void)airPlaySoloStartedAdvertising:(id)arg1 ;
-(WPAirPlaySolo *)wpAirPlaySolo;
-(id)delegate;
-(void)airPlaySolo:(id)arg1 didStopTrackingPeer:(id)arg2 withData:(id)arg3 ;
-(void)setIsSourcePresenceAdvertising:(BOOL)arg1 ;
-(void)setWpAirPlaySolo:(WPAirPlaySolo *)arg1 ;
-(BOOL)isStartAdvertisingPending;
-(void)setSourcePresenceAdvertisingData:(NSDictionary *)arg1 ;
-(NSObject*<OS_dispatch_source>)sourcePresenceAdvertisingTimer;
-(BOOL)isStopAdvertisingPending;
-(long long)state;
-(NSObject*<OS_dispatch_source>)sourcePresenceWaitingTimer;
-(void)airPlaySoloStoppedScanning:(id)arg1 ;
-(NSMutableDictionary *)nearbyDevices;
-(void)setDelegate:(id)arg1 ;
-(void)stopTrackingPeer:(id)arg1 withData:(id)arg2 ;
-(void)airPlaySolo:(id)arg1 failedToStartScanningWithError:(id)arg2 ;
-(void)startConnectionlessAdvertisingWithData:(id)arg1 ;
-(void)airPlaySolo:(id)arg1 didStartTrackingPeer:(id)arg2 withData:(id)arg3 error:(id)arg4 ;
-(void)stopSourcePresenceAdvertisingCycle;
-(void)setIsStartAdvertisingPending:(BOOL)arg1 ;
-(void)startConnectionlessScanningWithData:(id)arg1 ;
-(void)setIsStopAdvertisingPending:(BOOL)arg1 ;
-(void)setNearbyDevices:(NSMutableDictionary *)arg1 ;
-(BOOL)isFirstCycle;
-(NSDictionary *)sourcePresenceAdvertisingData;
-(void)setSourcePresenceAdvertisingTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)stopConnectionlessScanningWithData:(id)arg1 ;
-(void)airPlaySoloStoppedAdvertising:(id)arg1 ;
-(void)airPlaySoloDidUpdateState:(id)arg1 ;
-(void)startSourcePresenceWaitingCycle;
-(void)stopConnectionlessAdvertising;
-(void)stopSourcePresenceWaitingCycle;
-(void)airPlaySoloAdvertisingPending:(id)arg1 ;
-(void)airPlaySolo:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 ;
-(void)airPlaySolo:(id)arg1 failedToStartAdvertisingWithError:(id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)startSourcePresenceConnectionlessAdvertising;
-(void)stopSourcePresenceConnectionlessAdvertising;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)startSourcePresenceAdvertisingCycle;
-(void)airPlaySolo:(id)arg1 didLosePeer:(id)arg2 withData:(id)arg3 ;
-(void)setIsFirstCycle:(BOOL)arg1 ;
-(BOOL)isSourcePresenceAdvertising;
-(void)dealloc;
-(void)startTrackingPeer:(id)arg1 withData:(id)arg2 ;
@end
