/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIPresentationController.h>
#import <libobjc.A.dylib/WFCompactPlatterContentContainer.h>

@protocol UIViewControllerTransitionCoordinator;
@class NSString;

@interface WFCompactPlatterPresentationController : UIPresentationController <WFCompactPlatterContentContainer> {

	long long _transitionState;
	id<UIViewControllerTransitionCoordinator> _activeTransitionCoordinator;

}

@property (assign,nonatomic) long long transitionState;                                                                 //@synthesize transitionState=_transitionState - In the implementation block
@property (assign,nonatomic,__weak) id<UIViewControllerTransitionCoordinator> activeTransitionCoordinator;              //@synthesize activeTransitionCoordinator=_activeTransitionCoordinator - In the implementation block
@property (nonatomic,readonly) UIViewController*<WFCompactPlatterPresentation> presentedViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGRect)usableFrameForPresentingInContainerViewOfSize:(CGSize)arg1 ;
-(void)setTransitionState:(long long)arg1 ;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CGRect)frameOfPresentedViewInContainerView;
-(long long)transitionState;
-(BOOL)_shouldDisableInteractionDuringTransitions;
-(void)dismissalTransitionWillBegin;
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)_containerIgnoresDirectTouchEvents;
-(void)platterPresentationDidInvalidateSize:(id)arg1 ;
-(double)maximumExpectedHeightForPlatterPresentation:(id)arg1 ;
-(CGRect)frameOfDismissedViewInContainerView;
-(void)updatePresentedViewFrameAnimatedAlongsideKeyboard:(BOOL)arg1 ;
-(void)keyboardWillChange;
-(CGRect)presentedViewFrameInContainerViewOfSize:(CGSize)arg1 withSizeCalculation:(BOOL)arg2 ;
-(id<UIViewControllerTransitionCoordinator>)activeTransitionCoordinator;
-(void)setActiveTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)arg1 ;
@end

