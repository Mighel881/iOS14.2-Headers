//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSServiceConnectionListenerDelegate-Protocol.h>
#import <SpringBoard/SBSSwitcherDemoCommandsClientToServerInterface-Protocol.h>

@class BSServiceConnectionListener, FBServiceClientAuthenticator, NSMutableArray, NSString, SBAppSwitcherSettings, SBRecentAppLayouts, SBSwitcherDemoFilteringController;
@protocol OS_dispatch_queue;

@interface SBSwitcherDemoCommandsServer : NSObject <BSServiceConnectionListenerDelegate, SBSSwitcherDemoCommandsClientToServerInterface>
{
    SBAppSwitcherSettings *_switcherSettings;
    FBServiceClientAuthenticator *_clientAuthenticator;
    BSServiceConnectionListener *_connectionListener;
    SBSwitcherDemoFilteringController *_demoFilteringController;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_connections;
    SBRecentAppLayouts *_recents;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

