/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <WiFiKit/WiFiKit-Structs.h>
@class _WFIPMonitorObserver, NSString, NSObject;

@interface WFIPMonitor : NSObject {

	BOOL _isMonitoring;
	_WFIPMonitorObserver* _dynamicStoreInfo;
	NSString* _serviceID;
	NSString* _interfaceName;
	SCDynamicStoreRef _storeRef;
	SCPreferencesRef _prefsRef;
	SCDynamicStoreRef _networkServiceStore;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy) NSString * serviceID;                              //@synthesize serviceID=_serviceID - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;                          //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign) SCDynamicStoreRef storeRef;                                //@synthesize storeRef=_storeRef - In the implementation block
@property (assign) SCPreferencesRef prefsRef;                                 //@synthesize prefsRef=_prefsRef - In the implementation block
@property (assign) SCDynamicStoreRef networkServiceStore;                     //@synthesize networkServiceStore=_networkServiceStore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(SCDynamicStoreRef)networkServiceStore;
-(void)setInterfaceName:(NSString *)arg1 ;
-(NSString *)serviceID;
-(BOOL)personalHotspotHasClients;
-(id)ipv6Addresses;
-(long long)ipv6ConfigMethod;
-(id)__ipv6SetupConfig;
-(id)__ipv4InterfaceStateConfig;
-(id)init;
-(id)ipv6Router;
-(void)_postChangesNotification:(id)arg1 ;
-(id)__dnsStateConfig;
-(id)__ipv4StateConfig;
-(id)__proxiesSetupConfig;
-(id)httpProxyServer;
-(BOOL)httpProxyIsAuthenticated;
-(BOOL)hasValidIPAddress;
-(NSString *)bundleIdentifier;
-(BOOL)hasValidIPv4Address;
-(id)initWithInterfaceName:(id)arg1 ;
-(id)__ipv6StateConfig;
-(BOOL)isUsingCustomDNSSettings;
-(id)ipv4Addresses;
-(id)DHCPLeaseExpirationDate;
-(SCDynamicStoreRef)storeRef;
-(id)dnsServerAddresses;
-(SCPreferencesRef)prefsRef;
-(BOOL)monitorNetworkServiceID:(id)arg1 ;
-(void)setServiceID:(NSString *)arg1 ;
-(id)httpProxyUsername;
-(BOOL)httpProxyAutoConfigured;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setPrefsRef:(SCPreferencesRef)arg1 ;
-(void)setStoreRef:(SCDynamicStoreRef)arg1 ;
-(long long)ipv4ConfigMethod;
-(BOOL)globalProxyIsEnabled;
-(id)httpProxyAutoConfigURL;
-(id)ipv6PrefixLengths;
-(id)httpProxyPort;
-(NSString *)interfaceName;
-(id)ipv4Router;
-(BOOL)renewLease;
-(id)ipv4SubnetMasks;
-(id)__wifiServiceID;
-(id)__ipv4SetupConfig;
-(id)dnsDomainName;
-(id)dnsSearchDomains;
-(id)__dhcpInfo;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)__dnsSetupConfig;
-(id)ipv4DHCPClientID;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setNetworkServiceStore:(SCDynamicStoreRef)arg1 ;
-(BOOL)hasValidIPv6Address;
-(void)dealloc;
-(BOOL)isUsingCustomProxySetting;
@end

