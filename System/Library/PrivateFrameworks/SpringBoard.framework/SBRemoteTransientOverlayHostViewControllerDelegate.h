/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBRemoteTransientOverlayHostViewControllerDelegate <NSObject>
@required
-(void)remoteTransientOverlayHostViewControllerDidChangeContentOpaque:(id)arg1;
-(void)remoteTransientOverlayHostViewControllerDidChangeGestureDismissalStyles:(id)arg1;
-(void)remoteTransientOverlayHostViewControllerDidChangeFeaturePolicy:(id)arg1;
-(void)remoteTransientOverlayHostViewControllerDidChangePreferredSceneDeactivationReasonValue:(id)arg1;
-(void)remoteTransientOverlayHostViewControllerDidChangeShouldDisableOrientationUpdates:(id)arg1;
-(void)remoteTransientOverlayHostViewControllerRequestsDeactivation:(id)arg1;
-(void)remoteTransientOverlayHostViewControllerRequestsInvalidation:(id)arg1;
-(void)remoteTransientOverlayHostViewController:(id)arg1 didTerminateWithError:(id)arg2;
-(void)remoteTransientOverlayHostViewController:(id)arg1 requestsWallpaperEffectUpdateWithAnimationSettings:(id)arg2;
-(long long)defaultPreferredInterfaceOrientationForPresentationForRemoteTransientOverlayHostViewController:(id)arg1;
-(id)remoteTransientOverlayHostViewController:(id)arg1 requestsActionForHandlingButtonEvents:(unsigned long long)arg2;

@end

