/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMFoundation/IMFoundation-Structs.h>
#import <IMFoundation/IMSystemMonitorListener.h>
#import <IMFoundation/IMConnectionMonitorDelegate.h>

@class NSString, NSArray, IMConnectionMonitor;

@interface NetworkChangeNotifier : NSObject <IMSystemMonitorListener, IMConnectionMonitorDelegate> {

	BOOL _lastPostedNetworkUp;
	SCDynamicStoreRef _store;
	NSString* _myIP;
	NSArray* _myIPs;
	IMConnectionMonitor* _connectionMonitor;

}

@property (assign,nonatomic) SCDynamicStoreRef store;                              //@synthesize store=_store - In the implementation block
@property (assign,nonatomic) BOOL lastPostedNetworkUp;                             //@synthesize lastPostedNetworkUp=_lastPostedNetworkUp - In the implementation block
@property (nonatomic,retain) IMConnectionMonitor * connectionMonitor;              //@synthesize connectionMonitor=_connectionMonitor - In the implementation block
@property (nonatomic,retain) NSString * myIP;                                      //@synthesize myIP=_myIP - In the implementation block
@property (nonatomic,retain) NSArray * myIPs;                                      //@synthesize myIPs=_myIPs - In the implementation block
@property (nonatomic,readonly) BOOL isNetworkUp; 
@property (nonatomic,readonly) NSString * myGatewayAddress; 
@property (nonatomic,readonly) NSString * myIPAddress; 
@property (nonatomic,readonly) NSArray * myIPAddresses; 
@property (nonatomic,readonly) SCDynamicStoreRef getDynamicStore; 
+(id)sharedInstance;
+(BOOL)enableNotifications;
+(void)disableNotifications;
-(BOOL)isNetworkUp;
-(void)connectionMonitorDidUpdate:(id)arg1 ;
-(id)init;
-(unsigned long long)linkQualityForInterfaceType:(unsigned long long)arg1 ;
-(NSArray *)myIPs;
-(NSString *)myIPAddress;
-(BOOL)lastPostedNetworkUp;
-(BOOL)_listenForChanges;
-(NSString *)myGatewayAddress;
-(void)setLastPostedNetworkUp:(BOOL)arg1 ;
-(SCDynamicStoreRef)store;
-(NSArray *)myIPAddresses;
-(int)linkQualityValueForInterface:(id)arg1 ;
-(BOOL)isPrimaryCellular;
-(void)setStore:(SCDynamicStoreRef)arg1 ;
-(void)systemWillSleep;
-(void)_clearIPCache;
-(void)setMyIPs:(NSArray *)arg1 ;
-(id)primaryInterfaceName;
-(IMConnectionMonitor *)connectionMonitor;
-(int)linkQualityValueForInterfaceType:(unsigned long long)arg1 ;
-(NSString *)myIP;
-(void)systemDidWake;
-(void)setConnectionMonitor:(IMConnectionMonitor *)arg1 ;
-(SCDynamicStoreRef)getDynamicStore;
-(void)dealloc;
-(void)setMyIP:(NSString *)arg1 ;
@end
