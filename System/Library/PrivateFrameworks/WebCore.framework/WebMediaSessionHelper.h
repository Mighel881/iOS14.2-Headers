/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WebCore/WebCore-Structs.h>
@interface WebMediaSessionHelper : NSObject {

	MediaSessionHelperiOS* _callback;
	RetainPtr<AVRouteDetector>* _routeDetector;
	BOOL _monitoringAirPlayRoutes;
	BOOL _startMonitoringAirPlayRoutesPending;

}
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)clearCallback;
-(void)wirelessRoutesAvailableDidChange:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)startMonitoringAirPlayRoutes;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)stopMonitoringAirPlayRoutes;
-(void)mediaServerConnectionDied:(id)arg1 ;
-(void)carPlayIsConnectedDidChange:(id)arg1 ;
-(id)initWithCallback:(MediaSessionHelperiOS*)arg1 ;
-(BOOL)hasWirelessTargetsAvailable;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)dealloc;
-(void)activeOutputDeviceDidChange:(id)arg1 ;
@end

