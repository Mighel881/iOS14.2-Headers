/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/Silex-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol SXFullscreenCanvasViewControllerDelegate;
@interface SXFullscreenCanvasViewController : UIViewController {

	BOOL _isTransitioning;
	long long _statusBarStyle;
	id<SXFullscreenCanvasViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) long long statusBarStyle;                                                  //@synthesize statusBarStyle=_statusBarStyle - In the implementation block
@property (assign,nonatomic) BOOL isTransitioning;                                                      //@synthesize isTransitioning=_isTransitioning - In the implementation block
@property (assign,nonatomic,__weak) id<SXFullscreenCanvasViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)isTransitioning;
-(BOOL)prefersStatusBarHidden;
-(id<SXFullscreenCanvasViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)keyCommands;
-(void)setStatusBarStyle:(long long)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)dismiss;
-(void)setDelegate:(id<SXFullscreenCanvasViewControllerDelegate>)arg1 ;
-(long long)statusBarStyle;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setIsTransitioning:(BOOL)arg1 ;
-(long long)preferredStatusBarStyle;
-(BOOL)canBecomeFirstResponder;
-(long long)preferredStatusBarUpdateAnimation;
@end
