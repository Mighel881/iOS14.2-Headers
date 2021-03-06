/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol PKAddPassesViewControllerDelegate;
@class NSArray, _UIAsyncInvocation, PKRemoteAddPassesViewController, PKAssertion;

@interface PKAddPassesViewController : UIViewController {

	BOOL _viewHasAppeared;
	BOOL _succeeded;
	unsigned long long _presentationSource;
	NSArray* _passDataArray;
	_UIAsyncInvocation* _viewServiceCancelRequest;
	PKRemoteAddPassesViewController* _remoteViewController;
	PKAssertion* _contactlessInterfaceAssertion;
	id<PKAddPassesViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKAddPassesViewControllerDelegate> delegate; 
+(BOOL)canAddPasses;
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(BOOL)prefersStatusBarHidden;
-(void)viewWillLayoutSubviews;
-(BOOL)succeeded;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(id<PKAddPassesViewControllerDelegate>)delegate;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithPass:(id)arg1 ;
-(long long)modalPresentationStyle;
-(long long)modalTransitionStyle;
-(void)setDelegate:(id<PKAddPassesViewControllerDelegate>)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)initWithPasses:(id)arg1 ;
-(void)_applyRemoteViewController:(id)arg1 ;
-(void)_ingestionDidFinishWithResult:(unsigned long long)arg1 ;
-(id)childViewControllerForStatusBarHidden;
-(BOOL)shouldAutorotate;
-(id)initWithPasses:(id)arg1 presentationSource:(unsigned long long)arg2 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(void)_requestRemoteViewController;
-(void)dealloc;
@end

