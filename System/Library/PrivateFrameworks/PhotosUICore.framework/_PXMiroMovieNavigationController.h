/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UINavigationController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class UIViewController, NSString;

@interface _PXMiroMovieNavigationController : UINavigationController <UIViewControllerTransitioningDelegate> {

	UIViewController* _miroMoviePresentingViewController;

}

@property (nonatomic,retain) UIViewController * miroMoviePresentingViewController;              //@synthesize miroMoviePresentingViewController=_miroMoviePresentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)dismiss:(id)arg1 ;
-(UIViewController *)miroMoviePresentingViewController;
-(void)setMiroMoviePresentingViewController:(UIViewController *)arg1 ;
-(id)_transitionForPresentedOrDismissedViewController:(id)arg1 ;
-(id)initWithRootViewController:(id)arg1 ;
@end

