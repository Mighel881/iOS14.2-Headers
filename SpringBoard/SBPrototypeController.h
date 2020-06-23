//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/PTUIClient-Protocol.h>

@class NSString, NSXPCConnection, SBPrototypeDumpingGround, SBRestartManager, SBRootSettings, SBSStatusBarStyleOverridesAssertion;

@interface SBPrototypeController : NSObject <PTUIClient>
{
    NSXPCConnection *_prototypingUIServerConnection;
    _Bool _hasActiveKeyHIDEventRouters;
    SBPrototypeDumpingGround *_dumpingGround;
    SBRootSettings *_rootSettings;
    SBSStatusBarStyleOverridesAssertion *_remotePrototypingAssertion;
    SBRestartManager *_restartManager;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak SBRestartManager *restartManager; // @synthesize restartManager=_restartManager;
@property(readonly) Class superclass;
@end

