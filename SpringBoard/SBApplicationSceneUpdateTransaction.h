//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBApplicationUpdateScenesTransaction.h>

@class FBSMutableSceneParameters, NSString, SBApplicationSceneEntity, SBWorkspaceApplicationSceneTransitionContext, SBWorkspaceTransitionRequest, UIApplicationSceneSettings, UIApplicationSceneTransitionContext;

@interface SBApplicationSceneUpdateTransaction : FBApplicationUpdateScenesTransaction
{
    SBApplicationSceneEntity *_applicationSceneEntity;
    SBWorkspaceTransitionRequest *_request;
    SBWorkspaceApplicationSceneTransitionContext *_transitionContext;
    NSString *_sceneIdentifier;
    FBSMutableSceneParameters *_sceneParameters;
    UIApplicationSceneTransitionContext *_sceneTransitionContext;
    _Bool _suspendedActivation;
    _Bool _shouldSendActivationResult;
}


// Remaining properties
@property(readonly, nonatomic) SBApplicationSceneEntity *applicationSceneEntity; // @synthesize applicationSceneEntity=_applicationSceneEntity;
@property(readonly, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
@property(readonly, nonatomic) UIApplicationSceneSettings *sceneSettings;
@property(nonatomic) _Bool shouldSendActivationResult; // @synthesize shouldSendActivationResult=_shouldSendActivationResult;
@end

