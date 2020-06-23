//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/NSXPCListenerDelegate-Protocol.h>
#import <SpringBoard/SBAppStatusBarAssertionManagerObserver-Protocol.h>
#import <SpringBoard/SBStatusBarStyleOverridesAssertionServer-Protocol.h>

@class FBWorkspaceEventQueue, NSMapTable, NSMutableArray, NSString, NSXPCListener, SBAppStatusBarAssertionManager, SBStatusBarTapManager;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SBStatusBarStyleOverridesAssertionManager : NSObject <NSXPCListenerDelegate, SBAppStatusBarAssertionManagerObserver, SBStatusBarStyleOverridesAssertionServer, BSDescriptionProviding>
{
    NSMutableArray *_runningUpdateTransactions;
    int _statusBarStyleOverrides;
    int _exclusiveStatusBarStyleOverrides;
    SBAppStatusBarAssertionManager *_appStatusBarAssertionManager;
    NSXPCListener *_xpcListener;
    NSMapTable *_assertionsByIdentifierByClientConnection;
    NSMapTable *_assertionsByStyleOverride;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableArray *_coordinatorConnectionsByStyleOverride;
    NSObject<OS_dispatch_source> *_assertionTimerSource;
    FBWorkspaceEventQueue *_eventQueue;
    SBStatusBarTapManager *_statusBarTapManager;
}


// Remaining properties
@property(retain, nonatomic) SBAppStatusBarAssertionManager *appStatusBarAssertionManager; // @synthesize appStatusBarAssertionManager=_appStatusBarAssertionManager;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *assertionTimerSource; // @synthesize assertionTimerSource=_assertionTimerSource;
@property(retain, nonatomic) NSMapTable *assertionsByIdentifierByClientConnection; // @synthesize assertionsByIdentifierByClientConnection=_assertionsByIdentifierByClientConnection;
@property(retain, nonatomic) NSMapTable *assertionsByStyleOverride; // @synthesize assertionsByStyleOverride=_assertionsByStyleOverride;
@property(retain, nonatomic) NSMutableArray *coordinatorConnectionsByStyleOverride; // @synthesize coordinatorConnectionsByStyleOverride=_coordinatorConnectionsByStyleOverride;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) FBWorkspaceEventQueue *eventQueue; // @synthesize eventQueue=_eventQueue;
@property(nonatomic) int exclusiveStatusBarStyleOverrides; // @synthesize exclusiveStatusBarStyleOverrides=_exclusiveStatusBarStyleOverrides;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(nonatomic) int statusBarStyleOverrides; // @synthesize statusBarStyleOverrides=_statusBarStyleOverrides;
@property(readonly, nonatomic) SBStatusBarTapManager *statusBarTapManager; // @synthesize statusBarTapManager=_statusBarTapManager;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@end

