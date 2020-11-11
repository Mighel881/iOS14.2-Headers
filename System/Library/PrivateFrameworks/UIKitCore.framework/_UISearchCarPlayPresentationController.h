/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISearchPresentationController.h>

@class UIVisualEffectView;

@interface _UISearchCarPlayPresentationController : _UISearchPresentationController {

	UIVisualEffectView* _blurView;

}

@property (nonatomic,retain) UIVisualEffectView * blurView;              //@synthesize blurView=_blurView - In the implementation block
-(void)showBackgroundObscuringView;
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)blurView;
-(BOOL)searchBarToBecomeTopAttached;
-(BOOL)shouldAccountForStatusBar;
-(void)containerViewWillLayoutSubviews;
-(BOOL)searchBarShouldClipToBounds;
-(unsigned long long)edgeForHidingNavigationBar;
-(id)adaptivePresentationController;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)animatorShouldLayoutPresentationViews;
-(id)_presentationControllerForTraitCollection:(id)arg1 ;
-(CGRect)finalFrameForContainerView;
-(id)_presentedViewControllerForSizeClassPair:(SCD_Struct_UI9)arg1 ;
-(BOOL)searchBarCanContainScopeBar;
-(void)hideBackgroundObscuringView;
-(double)resultsControllerContentOffset;
-(double)statusBarAdjustment;
-(BOOL)forceObeyNavigationBarInsets;
-(void)setContentVisible:(BOOL)arg1 ;
-(long long)adaptivePresentationStyle;
-(id)backgroundObscuringView;
-(BOOL)resultsUnderlapsSearchBar;
@end
