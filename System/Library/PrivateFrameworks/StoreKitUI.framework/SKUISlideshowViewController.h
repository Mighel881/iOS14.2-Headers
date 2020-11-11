/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPageViewControllerDataSource.h>
#import <UIKit/UIPageViewControllerDelegate.h>
#import <libobjc.A.dylib/SKUISlideshowItemViewControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate;
@class SKUIClientContext, UIPageViewController, NSOperationQueue, NSMutableDictionary, NSString;

@interface SKUISlideshowViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, SKUISlideshowItemViewControllerDelegate, UIViewControllerTransitioningDelegate> {

	SKUIClientContext* _clientContext;
	UIPageViewController* _pageViewController;
	NSOperationQueue* _remoteLoadQueue;
	NSMutableDictionary* _itemViewControllersCache;
	BOOL _overlayVisible;
	BOOL _shouldCancelDelayedOverlayVisibilityChange;
	BOOL _overlayVisibilityWillChangeWithDelay;
	BOOL _lockOverlayControlsVisible;
	SCD_Struct_SK29 _savedStatusBarState;
	id<SKUISlideshowViewControllerDataSource> _dataSource;
	id<SKUISlideshowViewControllerDelegate> _delegate;
	long long _currentIndex;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                                        //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUISlideshowViewControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SKUISlideshowViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long currentIndex;                                                   //@synthesize currentIndex=_currentIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)currentIndex;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4 ;
-(id)animatorForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id<SKUISlideshowViewControllerDelegate>)delegate;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setCurrentIndex:(long long)arg1 ;
-(void)setDataSource:(id<SKUISlideshowViewControllerDataSource>)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setDelegate:(id<SKUISlideshowViewControllerDelegate>)arg1 ;
-(id<SKUISlideshowViewControllerDataSource>)dataSource;
-(SKUIClientContext *)clientContext;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_doneButtonTapped:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)reloadData;
-(void)loadView;
-(id)animatorForDismissedController:(id)arg1 ;
-(void)dealloc;
-(void)slideshowItemViewControllerDidBeginPinchGesture:(id)arg1 ;
-(void)slideshowItemViewControllerDidDismissWithPinchGesture:(id)arg1 ratio:(double)arg2 ;
-(id)currentItemViewController;
-(id)_itemViewControllerForIndex:(long long)arg1 ;
-(void)_updateCurrentIndex;
-(void)_contentViewTapped:(id)arg1 ;
-(void)_saveStatusBarAppearanceState;
-(void)_restoreStatusBarAppearanceState;
-(void)_setOverlayVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_fadeOutOverlayAfterDelay:(unsigned long long)arg1 ;
-(void)_updateTitleWithIndex:(long long)arg1 ;
-(void)_toggleFadeOverlay;
@end
