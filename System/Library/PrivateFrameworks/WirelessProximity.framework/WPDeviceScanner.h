/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WirelessProximity/WPClient.h>

@protocol WPDeviceScannerDelegate;
@class NSMutableArray, NSMutableDictionary;

@interface WPDeviceScanner : WPClient {

	BOOL _anyScanResultsRequested;
	id<WPDeviceScannerDelegate> _delegate;
	NSMutableArray* _liveDevices;
	NSMutableDictionary* _activeScans;

}

@property (assign,nonatomic,__weak) id<WPDeviceScannerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * liveDevices;                             //@synthesize liveDevices=_liveDevices - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activeScans;                        //@synthesize activeScans=_activeScans - In the implementation block
@property (assign,nonatomic) BOOL anyScanResultsRequested;                             //@synthesize anyScanResultsRequested=_anyScanResultsRequested - In the implementation block
-(void)stateDidChange:(long long)arg1 ;
-(void)deviceDiscovered:(id)arg1 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)setActiveScans:(NSMutableDictionary *)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(id)clientAsString;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)postDevice:(id)arg1 ;
-(void)registerForDevicesMatching:(id)arg1 options:(id)arg2 ;
-(void)unregisterAllDeviceChanges;
-(id<WPDeviceScannerDelegate>)delegate;
-(void)parseCompanyData:(char*)arg1 forSize:(int)arg2 intoDictionary:(id)arg3 ;
-(BOOL)parseType:(unsigned char)arg1 atOffset:(char*)arg2 withSize:(int)arg3 intoDictionary:(id)arg4 ;
-(NSMutableArray *)liveDevices;
-(void)timerFinished:(id)arg1 ;
-(BOOL)anyScanResultsRequested;
-(void)setDelegate:(id<WPDeviceScannerDelegate>)arg1 ;
-(id)description;
-(void)setAnyScanResultsRequested:(BOOL)arg1 ;
-(NSMutableDictionary *)activeScans;
-(void)setLiveDevices:(NSMutableArray *)arg1 ;
-(void)addPuckType:(id)arg1 toDictionary:(id)arg2 ;
-(void)postDevices:(id)arg1 ;
-(void)parseAirPrint:(char*)arg1 forSize:(int)arg2 intoDictionary:(id)arg3 ;
-(void)registerForAnyScanResults:(BOOL)arg1 ;
-(void)unregisterForDevices:(id)arg1 ;
-(void)invalidate;
-(id)initWithDelegate:(id)arg1 ;
-(void)anyDiscoveredDevice:(id)arg1 ;
@end

