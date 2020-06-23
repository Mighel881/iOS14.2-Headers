//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/FBSDisplayObserving-Protocol.h>

@class FBSDisplayLayoutPublisher, FBSDisplayMonitor, NSMutableDictionary, NSMutableSet, NSString, SBMainDisplaySceneManager, SBMainWorkspace;
@protocol SBFAuthenticationStatusProvider;

@interface SBExternalDisplayManager : NSObject <FBSDisplayObserving>
{
    FBSDisplayMonitor *_displayMonitor;
    SBMainWorkspace *_mainWorkspace;
    id <SBFAuthenticationStatusProvider> _userAuthenticationProvider;
    SBMainDisplaySceneManager *_mainDisplaySceneManager;
    FBSDisplayLayoutPublisher *_layoutPublisher;
    NSMutableDictionary *_displayToControllerMap;
    NSMutableSet *_disconnectingDisplays;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

