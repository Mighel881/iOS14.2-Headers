/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PowerUI/PowerUISmartChargeClientManaging.h>

@protocol OS_os_log;
@class NSString, NSXPCConnection, NSObject;

@interface PowerUISmartChargeClient : NSObject <PowerUISmartChargeClientManaging> {

	NSString* _clientName;
	NSXPCConnection* _connection;
	NSObject*<OS_os_log> _log;

}

@property (nonatomic,retain) NSString * clientName;                     //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                  //@synthesize log=_log - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)remoteInterface;
-(void)setClientName:(NSString *)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(id)simulateCurrentOutputAsOfDate:(id)arg1 overrideAllSignals:(BOOL)arg2 withError:(id*)arg3 ;
-(NSString *)clientName;
-(void)engageFrom:(id)arg1 until:(id)arg2 repeatUntil:(id)arg3 overrideAllSignals:(BOOL)arg4 ;
-(void)temporarilyDisableSmartChargingWithHandler:(/*^block*/id)arg1 ;
-(id)status;
-(id)powerLogStatus;
-(void)isSmartChargingCurrentlyEnabledWithHandler:(/*^block*/id)arg1 ;
-(void)enableSmartChargingWithHandler:(/*^block*/id)arg1 ;
-(void)temporarilyEnableChargingWithHandler:(/*^block*/id)arg1 ;
-(void)resetDevelopmentMode;
-(NSObject*<OS_os_log>)log;
-(BOOL)isOBCEngaged:(id*)arg1 ;
-(BOOL)temporarilyEnableCharging:(id*)arg1 ;
-(BOOL)isOBCEngaged:(BOOL*)arg1 asDesktopDevice:(BOOL*)arg2 chargingOverrideAllowed:(BOOL*)arg3 withError:(id*)arg4 ;
-(void)disableSmartChargingWithHandler:(/*^block*/id)arg1 ;
-(BOOL)setState:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)isOBCSupported;
-(void)resetEngagementOverride;
-(BOOL)setChargingStatus:(BOOL)arg1 ;
-(void)fullChargeDeadlineWithHandler:(/*^block*/id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(BOOL)enableSmartCharging:(id*)arg1 ;
-(id)initWithClientName:(id)arg1 ;
-(void)isOBCEngagedWithHandler:(/*^block*/id)arg1 ;
-(unsigned long long)isSmartChargingCurrentlyEnabled:(id*)arg1 ;
-(void)isOBCEngagedAsDesktopDeviceWithHandler:(/*^block*/id)arg1 ;
-(void)enterDevelopmentMode;
-(NSXPCConnection *)connection;
-(BOOL)temporarilyDisableSmartCharging:(id*)arg1 ;
-(void)isOBCSupportedWithHandler:(/*^block*/id)arg1 ;
-(BOOL)isOBCEngagedAsDesktopDevice:(BOOL*)arg1 chargingOverrideAllowed:(BOOL*)arg2 withError:(id*)arg3 ;
-(id)fullChargeDeadline:(id*)arg1 ;
-(BOOL)disableSmartCharging:(id*)arg1 ;
@end
