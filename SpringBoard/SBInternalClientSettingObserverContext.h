//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSSceneTransitionContext, FBScene, SBDeviceApplicationSceneHandle, UIApplicationSceneClientSettings;

@interface SBInternalClientSettingObserverContext : NSObject
{
    FBScene *_scene;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    UIApplicationSceneClientSettings *_oldClientSettings;
    UIApplicationSceneClientSettings *_updatedClientSettings;
    FBSSceneTransitionContext *_transition;
}


// Remaining properties
@property(retain, nonatomic) UIApplicationSceneClientSettings *oldClientSettings; // @synthesize oldClientSettings=_oldClientSettings;
@property(retain, nonatomic) FBScene *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle; // @synthesize sceneHandle=_sceneHandle;
@property(retain, nonatomic) FBSSceneTransitionContext *transition; // @synthesize transition=_transition;
@property(retain, nonatomic) UIApplicationSceneClientSettings *updatedClientSettings; // @synthesize updatedClientSettings=_updatedClientSettings;
@end
