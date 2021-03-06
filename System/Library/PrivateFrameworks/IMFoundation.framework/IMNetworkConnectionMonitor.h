/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMFoundation/IMConnectionMonitor.h>
#import <IMFoundation/IMSystemMonitorListener.h>
#import <IMFoundation/IMReachabilityDelegate.h>

@class IMReachability;

@interface IMNetworkConnectionMonitor : IMConnectionMonitor <IMSystemMonitorListener, IMReachabilityDelegate> {

	BOOL _isConnected;
	BOOL _isSleeping;
	IMReachability* _hostReachability;
	IMReachability* _ipReachability;
	unsigned long long _hostFlags;
	unsigned long long _ipFlags;

}

@property (nonatomic,retain) IMReachability * _hostReachability;              //@synthesize hostReachability=_hostReachability - In the implementation block
@property (nonatomic,retain) IMReachability * _ipReachability;                //@synthesize ipReachability=_ipReachability - In the implementation block
@property (assign,nonatomic) unsigned long long _hostFlags;                   //@synthesize hostFlags=_hostFlags - In the implementation block
@property (assign,nonatomic) unsigned long long _ipFlags;                     //@synthesize ipFlags=_ipFlags - In the implementation block
@property (assign,nonatomic) BOOL _isConnected;                               //@synthesize isConnected=_isConnected - In the implementation block
@property (assign,nonatomic) BOOL _isSleeping;                                //@synthesize isSleeping=_isSleeping - In the implementation block
-(void)clear;
-(void)_setup;
-(void)set_ipFlags:(unsigned long long)arg1 ;
-(void)_doCallbackLater;
-(void)_setupReachability;
-(unsigned long long)_hostFlags;
-(void)_clearReachability:(id*)arg1 flags:(unsigned long long*)arg2 ;
-(void)_doCallbackNow;
-(void)_networkManagedUpdated:(id)arg1 ;
-(void)set_ipReachability:(IMReachability *)arg1 ;
-(unsigned long long)_ipFlags;
-(IMReachability *)_ipReachability;
-(BOOL)isImmediatelyReachable;
-(void)set_hostReachability:(IMReachability *)arg1 ;
-(BOOL)_isSleeping;
-(void)goDisconnected;
-(IMReachability *)_hostReachability;
-(BOOL)_isConnected;
-(void)set_hostFlags:(unsigned long long)arg1 ;
-(void)reachabilityDidChange:(id)arg1 ;
-(void)systemWillSleep;
-(void)set_isConnected:(BOOL)arg1 ;
-(void)set_isSleeping:(BOOL)arg1 ;
-(void)goConnectedWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2 ;
-(void)systemDidWake;
-(void)dealloc;
@end

