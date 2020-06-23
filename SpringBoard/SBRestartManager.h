//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSTransaction, FBSystemService, NSMutableSet, SBInitialRestartState, SBRestartTransitionRequest, SBStartupTransitionController;
@protocol SBRestartManagerDelegate, SBRestartManagerWorkspaceDataSource, SBStartupTransition;

@interface SBRestartManager : NSObject
{
    id <SBRestartManagerDelegate> _delegate;
    SBInitialRestartState *_initialRestartState;
    SBStartupTransitionController *_startupController;
    SBRestartTransitionRequest *_pendingRestartTransitionRequest;
    id <SBRestartManagerWorkspaceDataSource> _workspaceDataSource;
    _Bool _isShuttingDown;
    _Bool _isRestartImminent;
    NSMutableSet *_pendingExternallyControlledRestartReasons;
    FBSystemService *_systemService;
}


// Remaining properties
@property(nonatomic) __weak id <SBRestartManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isPendingExit) _Bool pendingExit; // @dynamic pendingExit;
@property(readonly, nonatomic) SBRestartTransitionRequest *pendingRestartTransitionRequest; // @synthesize pendingRestartTransitionRequest=_pendingRestartTransitionRequest;
@property(readonly, nonatomic) BSTransaction<SBStartupTransition> *startupTransition; // @dynamic startupTransition;
@end

