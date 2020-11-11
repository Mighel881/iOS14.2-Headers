/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPresentationController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UIPreviewPresentationControllerDelegate;
@class UITapGestureRecognizer, UIVisualEffectView, UIView, NSArray, NSHashTable, UIResponder, UIWindow, NSString;

@interface UIPreviewPresentationController : UIPresentationController <UIGestureRecognizerDelegate> {

	BOOL _appliesVisualEffectsToPresentingView;
	id<UIPreviewPresentationControllerDelegate> _previewPresentationDelegate;
	UITapGestureRecognizer* _dismissGestureRecognizer;
	UIVisualEffectView* _presentationContainerEffectView;
	UIView* _localStatusBar;
	NSArray* _keyboardSnapshotters;
	NSHashTable* _keyboardWindows;
	UIResponder* _currentPinnedResponder;
	UIWindow* _presentationWindow;
	/*^block*/id _containerViewConfigurationBlock;
	/*^block*/id _dismissalTransitionDidEndBlock;

}

@property (assign,nonatomic,__weak) id<UIPreviewPresentationControllerDelegate> previewPresentationDelegate;              //@synthesize previewPresentationDelegate=_previewPresentationDelegate - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * dismissGestureRecognizer;                                           //@synthesize dismissGestureRecognizer=_dismissGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL appliesVisualEffectsToPresentingView;                                                   //@synthesize appliesVisualEffectsToPresentingView=_appliesVisualEffectsToPresentingView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * presentationContainerEffectView;                                        //@synthesize presentationContainerEffectView=_presentationContainerEffectView - In the implementation block
@property (nonatomic,retain) UIView * localStatusBar;                                                                     //@synthesize localStatusBar=_localStatusBar - In the implementation block
@property (nonatomic,copy) NSArray * keyboardSnapshotters;                                                                //@synthesize keyboardSnapshotters=_keyboardSnapshotters - In the implementation block
@property (nonatomic,copy) NSHashTable * keyboardWindows;                                                                 //@synthesize keyboardWindows=_keyboardWindows - In the implementation block
@property (assign,nonatomic,__weak) UIResponder * currentPinnedResponder;                                                 //@synthesize currentPinnedResponder=_currentPinnedResponder - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * presentationWindow;                                                        //@synthesize presentationWindow=_presentationWindow - In the implementation block
@property (nonatomic,copy) id containerViewConfigurationBlock;                                                            //@synthesize containerViewConfigurationBlock=_containerViewConfigurationBlock - In the implementation block
@property (nonatomic,copy) id dismissalTransitionDidEndBlock;                                                             //@synthesize dismissalTransitionDidEndBlock=_dismissalTransitionDidEndBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_backgroundEffectForTraitCollection:(id)arg1 interactive:(BOOL)arg2 ;
+(BOOL)_shouldApplyVisualEffectsToPresentingView;
+(BOOL)_shouldInterdictServiceViewTouches;
-(UITapGestureRecognizer *)dismissGestureRecognizer;
-(void)_preparePresentationAnimationsForTransitionCoordinator:(id)arg1 ;
-(BOOL)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
-(CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1 ;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(BOOL)_shouldSavePresentedViewControllerForStateRestoration;
-(long long)presentationStyle;
-(void)setPreviewPresentationDelegate:(id<UIPreviewPresentationControllerDelegate>)arg1 ;
-(void)setAppliesVisualEffectsToPresentingView:(BOOL)arg1 ;
-(void)setDismissalTransitionDidEndBlock:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)_presentationPotentiallyUnderlapsStatusBar;
-(BOOL)_allowsAutorotation;
-(void)setDismissGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setPresentationWindow:(UIWindow *)arg1 ;
-(BOOL)_shouldDisableInteractionDuringTransitions;
-(id)_presentationContainerView;
-(UIWindow *)presentationWindow;
-(UIView *)localStatusBar;
-(void)setKeyboardWindows:(NSHashTable *)arg1 ;
-(void)dismissalTransitionWillBegin;
-(void)presentationTransitionWillBegin;
-(BOOL)_shouldKeepCurrentFirstResponder;
-(NSHashTable *)keyboardWindows;
-(NSArray *)keyboardSnapshotters;
-(void)setLocalStatusBar:(UIView *)arg1 ;
-(void)_layoutForPreview;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(id)containerViewConfigurationBlock;
-(void)_prepareContainerViewForPresentationTransition;
-(void)_prepareDismissGestureRecognizersIfNeeded;
-(UIResponder *)currentPinnedResponder;
-(void)_finalizeAfterDismissalTransition;
-(void)_layoutForInteractiveHighlight;
-(void)_prepareDismissAnimationsForTransitionCoordinator:(id)arg1 ;
-(void)_layoutForCancel;
-(BOOL)appliesVisualEffectsToPresentingView;
-(void)setCurrentPinnedResponder:(UIResponder *)arg1 ;
-(void)_prepareStatusBarForPresentationTransition;
-(void)setKeyboardSnapshotters:(NSArray *)arg1 ;
-(void)_prepareKeyboardForPresentationTransition;
-(void)_previewTransitionDidEnd:(BOOL)arg1 ;
-(void)_animatePreviewTransitionIfNeeded:(id)arg1 ;
-(id<UIPreviewPresentationControllerDelegate>)previewPresentationDelegate;
-(void)_handleDismissGestureRecognizer:(id)arg1 ;
-(void)_applyVisualEffectsForPresentationPhase:(unsigned long long)arg1 ;
-(void)_cancelTransitionDidEnd:(BOOL)arg1 ;
-(void)_interactiveHighlightTransitionDidEnd:(BOOL)arg1 ;
-(void)setPresentationContainerEffectView:(UIVisualEffectView *)arg1 ;
-(id)dismissalTransitionDidEndBlock;
-(void)setContainerViewConfigurationBlock:(id)arg1 ;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)_presentationTransitionWillBeginForContainerEffectView:(id)arg1 ;
-(UIVisualEffectView *)presentationContainerEffectView;
@end
