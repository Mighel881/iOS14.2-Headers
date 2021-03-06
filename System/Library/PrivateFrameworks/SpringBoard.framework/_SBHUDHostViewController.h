/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardFoundation/SBFTouchPassThroughViewController.h>
#import <libobjc.A.dylib/SBViewControllerTransitionContextDelegate.h>

@protocol _SBHUDHostViewControllerDelegate;
@class NSMutableArray, NSMutableSet, SBHUDController, NSString;

@interface _SBHUDHostViewController : SBFTouchPassThroughViewController <SBViewControllerTransitionContextDelegate> {

	NSMutableArray* _activeTransitionContexts;
	NSMutableSet* _presentedHUDs;
	NSMutableSet* _presentingHUDs;
	NSMutableSet* _presentingHUDsTransitionContexts;
	NSMutableSet* _dismissingHUDsTransitionContexts;
	SBHUDController* _HUDController;
	id<_SBHUDHostViewControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(NSString *)description;
-(BOOL)_canShowWhileLocked;
-(void)transitionDidFinish:(id)arg1 ;
-(id)_transitionContextMatchingHUD:(id)arg1 withinContainer:(id)arg2 ;
-(void)_executePresentNewHUD:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_executeDismissHUD:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_buildTransitionContextToPresentHUD:(id)arg1 dismissHUD:(id)arg2 animated:(BOOL)arg3 delegate:(id)arg4 containerView:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)_executeViewControllerTransitionContext:(id)arg1 ;
@end

