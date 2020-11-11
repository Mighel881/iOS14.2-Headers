/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol EKEventViewDelegatePrivate <EKEventViewDelegate>
@optional
-(void)eventViewControllerDidRequestAddToCalendar:(id)arg1;
-(void)eventViewControllerWillBeginEditingEvent:(id)arg1;
-(BOOL)eventViewDelegateShouldCreateOwnEditViewController:(id)arg1;
-(BOOL)eventViewDelegateShouldHandlePresentationOfEditViewController:(id)arg1;
-(void)eventViewController:(id)arg1 requestsDisplayOfEditViewController:(id)arg2 animated:(BOOL)arg3;
-(void)eventViewController:(id)arg1 willDismissEditViewController:(id)arg2 deleted:(BOOL)arg3;
-(void)eventViewController:(id)arg1 didDismissEditViewController:(id)arg2 deleted:(BOOL)arg3;
-(void)eventViewControllerDidBeginEditingEventWithEditViewController:(id)arg1;
-(BOOL)eventViewControllerShouldHandleInlineEdit:(id)arg1;
-(void)eventViewControllerWillFinishEditingEvent:(id)arg1 deleted:(BOOL)arg2;
-(void)eventViewController:(id)arg1 requestsDismissalOfEditViewController:(id)arg2;
-(BOOL)eventViewControllerShouldHideInlineEditButton;
-(void)eventViewControllerInlineEditButtonWasTapped:(id)arg1;
-(BOOL)eventViewControllerShouldShowInlineEditButtonForInvitations:(id)arg1;
-(BOOL)eventViewControllerShouldHideDeleteButton;
-(BOOL)eventViewControllerPresentationWantsHiddenNavBarForSingleController;
-(long long)editorPresentationStyle;
-(BOOL)eventViewControllerShouldAlwaysShowNavBar:(id)arg1;
-(BOOL)eventViewControllerShouldDismissSelf:(id)arg1;
-(void)eventViewControllerWillDisappear:(id)arg1;
-(void)eventViewControllerDidReceiveEditUserInteraction:(id)arg1;
-(BOOL)eventViewControllerUseMinimalModeAfterTraitCollectionChange:(id)arg1;
-(BOOL)eventViewControllerEditButtonTemporarilyDisabled:(id)arg1;
-(BOOL)eventViewDelegateShouldHandlePresentationOfDeleteAlert:(id)arg1;
-(void)eventViewController:(id)arg1 requestsDisplayOfDeleteAlert:(id)arg2;

@end
