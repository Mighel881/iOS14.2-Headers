/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiKit/WiFiKit-Structs.h>
#import <libobjc.A.dylib/WFNetworkListRecord.h>

@class NSString;

@interface WFUserSuppliedNetwork : NSObject <WFNetworkListRecord> {

	NSString* _ssid;
	long long _security;
	NSString* _username;
	NSString* _password;
	SecIdentityRef _TLSIdentity;

}

@property (nonatomic,copy) NSString * ssid;                           //@synthesize ssid=_ssid - In the implementation block
@property (assign,nonatomic) long long security;                      //@synthesize security=_security - In the implementation block
@property (nonatomic,copy) NSString * username;                       //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                       //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) SecIdentityRef TLSIdentity;              //@synthesize TLSIdentity=_TLSIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)signalBars;
-(BOOL)isSecure;
-(void)setSsid:(NSString *)arg1 ;
-(NSString *)password;
-(NSString *)username;
-(long long)security;
-(BOOL)canBeDisplayedAsCurrent;
-(float)scaledRSSI;
-(id)hotspotCellularProtocol;
-(id)subtitle;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)ssid;
-(id)hotspotBatteryLife;
-(void)setSecurity:(long long)arg1 ;
-(BOOL)isAdhoc;
-(long long)rssi;
-(void)setUsername:(NSString *)arg1 ;
-(id)hotspotSignalStrength;
-(id)title;
-(BOOL)isInstantHotspot;
-(BOOL)isEnterprise;
-(BOOL)isUnconfiguredAccessory;
-(BOOL)iOSHotspot;
-(void)setTLSIdentity:(SecIdentityRef)arg1 ;
-(SecIdentityRef)TLSIdentity;
@end

