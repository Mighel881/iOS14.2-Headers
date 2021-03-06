/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/GKDaemonProxyDataUpdateDelegate.h>
#import <libobjc.A.dylib/GKExtensionProtocol.h>
#import <libobjc.A.dylib/GKExtensionHostProtocol.h>
#import <libobjc.A.dylib/GKDashboardServiceInterface.h>

@class UIViewController, GKGame, UIVisualEffectView, NSLayoutConstraint, NSString;

@interface GKExtensionViewController : UINavigationController <GKDaemonProxyDataUpdateDelegate, GKExtensionProtocol, GKExtensionHostProtocol, GKDashboardServiceInterface> {

	BOOL _alwaysShowDoneButton;
	BOOL _adjustTopConstraint;
	BOOL _hasInitialData;
	int _hostPID;
	double _statusBarHeight;
	UIViewController* _contentViewController;
	GKGame* _game;
	UIVisualEffectView* _effectView;
	NSLayoutConstraint* _effectBottomConstraint;
	NSLayoutConstraint* _effectTopConstraint;

}

@property (assign,nonatomic) BOOL hasInitialData;                                      //@synthesize hasInitialData=_hasInitialData - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * effectView;                          //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * effectBottomConstraint;              //@synthesize effectBottomConstraint=_effectBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * effectTopConstraint;                 //@synthesize effectTopConstraint=_effectTopConstraint - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowDoneButton;                                //@synthesize alwaysShowDoneButton=_alwaysShowDoneButton - In the implementation block
@property (assign,nonatomic) double statusBarHeight;                                   //@synthesize statusBarHeight=_statusBarHeight - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController;                 //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) GKGame * game;                                            //@synthesize game=_game - In the implementation block
@property (assign,nonatomic) int hostPID;                                              //@synthesize hostPID=_hostPID - In the implementation block
@property (assign,nonatomic) BOOL adjustTopConstraint;                                 //@synthesize adjustTopConstraint=_adjustTopConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIVisualEffectView *)effectView;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(void)finish;
-(GKGame *)game;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setStatusBarHeight:(double)arg1 ;
-(double)statusBarHeight;
-(void)setHostPID:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(void)willResignActive:(id)arg1 ;
-(double)_statusBarHeightForCurrentInterfaceOrientation;
-(void)setupVisualEffects;
-(void)setInitialState:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setEffectBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setEffectTopConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)hasInitialData;
-(void)constructContentViewController;
-(BOOL)adjustTopConstraint;
-(NSLayoutConstraint *)effectTopConstraint;
-(void)setHasInitialData:(BOOL)arg1 ;
-(void)configureContentViewController;
-(void)addDoneButtonToViewController:(id)arg1 ;
-(id)hostObjectProxy;
-(void)didBecomeActive:(id)arg1 ;
-(void)sendMessageToClient:(id)arg1 ;
-(void)clientDidFinish;
-(void)clientDidCancel;
-(void)clientWillTerminate;
-(void)setAdjustTopConstraint:(BOOL)arg1 ;
-(NSLayoutConstraint *)effectBottomConstraint;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)messageFromExtension:(id)arg1 ;
-(void)donePressed:(id)arg1 ;
-(void)messageFromClient:(id)arg1 ;
-(void)extensionIsFinishing;
-(void)viewDidLoad;
-(id)blurEffectForTraitCollection:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)extensionIsCanceling;
-(id)initWithCoder:(id)arg1 ;
-(void)setGame:(GKGame *)arg1 ;
-(void)setAlwaysShowDoneButton:(BOOL)arg1 ;
-(void)setToDarkBackground;
-(BOOL)alwaysShowDoneButton;
-(void)setToLightBackground;
-(int)hostPID;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_useBackdropViewForWindowBackground;
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 ;
-(UIViewController *)contentViewController;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
@end

