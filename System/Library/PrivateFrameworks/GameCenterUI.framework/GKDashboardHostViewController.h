/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GKExtensionRemoteViewController.h>
#import <libobjc.A.dylib/GKGameCenterDashboardServiceProtocol.h>

@class GKGameCenterViewController, NSObject, GKGame, NSString;

@interface GKDashboardHostViewController : GKExtensionRemoteViewController <GKGameCenterDashboardServiceProtocol> {

	GKGameCenterViewController* _delegateWeak;
	NSObject* _dashboardAssetController;

}

@property (nonatomic,retain) NSObject * dashboardAssetController;                       //@synthesize dashboardAssetController=_dashboardAssetController - In the implementation block
@property (assign,nonatomic,__weak) GKGameCenterViewController * delegate;              //@synthesize delegateWeak=_delegateWeak - In the implementation block
@property (nonatomic,retain) GKGame * game; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dashboardExtension;
+(BOOL)dismissAutomaticallyAfterExtensionCompletion;
-(GKGameCenterViewController *)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)playPressedForChallenge:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)hostSupportsShowingPlayForChallenge:(BOOL)arg1 ;
-(void)hostSupportsShowingPlayForTurnBasedMatch:(BOOL)arg1 ;
-(void)hostSupportsShowingQuitForTurnBasedMatch:(BOOL)arg1 ;
-(NSObject *)dashboardAssetController;
-(void)setDashboardAssetController:(NSObject *)arg1 ;
-(void)setDelegate:(GKGameCenterViewController *)arg1 ;
-(void)messageFromExtension:(id)arg1 ;
-(void)extensionIsFinishing;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)extensionIsCanceling;
-(id)extensionObjectProxy;
-(void)finishWithMatch:(id)arg1 ;
-(void)playerQuitMatch:(id)arg1 ;
-(void)hostDidChangeViewState:(id)arg1 ;
-(void)hostDidChangeLeaderboardIdentifier:(id)arg1 ;
-(void)hostDidChangeLeaderboardTimeScope:(id)arg1 ;
-(void)hostDidChangeLeaderboardPlayerScope:(id)arg1 ;
@end
