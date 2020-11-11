/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXUIViewControllerZoomTransition.h>

@protocol UIViewControllerContextTransitioning;
@class UIView, PXSwipeDownTracker, UIPanGestureRecognizer;

@interface PXUIViewControllerSwipeDownTransition : PXUIViewControllerZoomTransition {

	BOOL _didAnimate;
	BOOL _shouldHandleGestureEnd;
	BOOL _didHandleGestureEnd;
	id<UIViewControllerContextTransitioning> _transitionContext;
	UIView* _swipedView;
	UIView* _dimmingView;
	PXSwipeDownTracker* _swipeDownTracker;
	UIPanGestureRecognizer* _panGestureRecognizer;
	CGPoint _swipeViewInitialCenter;

}

@property (nonatomic,retain) id<UIViewControllerContextTransitioning> transitionContext;              //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,retain) UIView * swipedView;                                                     //@synthesize swipedView=_swipedView - In the implementation block
@property (assign,nonatomic) CGPoint swipeViewInitialCenter;                                          //@synthesize swipeViewInitialCenter=_swipeViewInitialCenter - In the implementation block
@property (nonatomic,retain) UIView * dimmingView;                                                    //@synthesize dimmingView=_dimmingView - In the implementation block
@property (nonatomic,retain) PXSwipeDownTracker * swipeDownTracker;                                   //@synthesize swipeDownTracker=_swipeDownTracker - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                           //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
+(BOOL)isTransitionSupportedWithMasterViewController:(id)arg1 detailViewController:(id)arg2 ;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)setTransitionContext:(id<UIViewControllerContextTransitioning>)arg1 ;
-(PXSwipeDownTracker *)swipeDownTracker;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(BOOL)isInteractive;
-(void)setSwipedView:(UIView *)arg1 ;
-(void)panGestureRecognizerDidChange;
-(void)_handleGestureEndIfNeeded;
-(void)_updateDimmingViewOrder;
-(CGPoint)swipeViewInitialCenter;
-(void)setSwipeViewInitialCenter:(CGPoint)arg1 ;
-(void)setSwipeDownTracker:(PXSwipeDownTracker *)arg1 ;
-(void)setDimmingView:(UIView *)arg1 ;
-(id<UIViewControllerContextTransitioning>)transitionContext;
-(void)animateTransition:(id)arg1 ;
-(UIView *)swipedView;
-(UIView *)dimmingView;
@end
