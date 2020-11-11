/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, _NACAVRoutingDiscoverySession;

@interface NACEndpointObserver : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	_NACAVRoutingDiscoverySession* _nacDiscoverySession;

}
+(id)sharedObserver;
-(id)init;
-(void)fetchRouteForOriginIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invalidateDiscoverySession;
@end
