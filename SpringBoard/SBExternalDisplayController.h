//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBSceneLayoutSlaveTransactionProviding-Protocol.h>

@class FBSDisplayConfiguration, FBSDisplayIdentity, NSMutableArray, NSString, SBExternalDisplayPresenter, SBMainDisplaySceneManager, SBMainWorkspace;
@protocol SBFAuthenticationStatusProvider;

@interface SBExternalDisplayController : NSObject <SBSceneLayoutSlaveTransactionProviding>
{
    SBMainWorkspace *_mainWorkspace;
    id <SBFAuthenticationStatusProvider> _userAuthenticationProvider;
    SBMainDisplaySceneManager *_mainDisplaySceneManager;
    FBSDisplayIdentity *_identity;
    SBExternalDisplayPresenter *_presenter;
    FBSDisplayConfiguration *_currentConfiguration;
    _Bool _observingAppState;
    _Bool _hasConnectTransactionRun;
    _Bool _disconnected;
    _Bool _tornDown;
    NSMutableArray *_pendingWork;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) FBSDisplayIdentity *displayIdentity; // @synthesize displayIdentity=_identity;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

