/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNContactInlineActionsViewControllerDelegate_Internal <CNContactInlineActionsViewControllerDelegate>
@optional
-(BOOL)contactInlineActionsViewController:(id)arg1 shouldPerformActionOfType:(id)arg2 withContactProperty:(id)arg3;
-(BOOL)contactInlineActionsViewController:(id)arg1 shouldPresentDisambiguationUIForActionOfType:(id)arg2;
-(void)contactInlineActionsViewControllerWillPresentDisambiguationUI:(id)arg1;
-(void)contactInlineActionsViewControllerDidDismissDisambiguationUI:(id)arg1;
-(void)contactInlineActionsViewController:(id)arg1 didSelectActionOfType:(id)arg2;
-(BOOL)contactInlineActionsViewController:(id)arg1 canPerformGroupActionOfType:(id)arg2;
-(id)contactInlineActionsViewController:(id)arg1 overrideImageForActionOfType:(id)arg2;
-(id)contactInlineActionsViewController:(id)arg1 overrideTitleForActionOfType:(id)arg2;
-(BOOL)contactInlineActionsViewController:(id)arg1 shouldOverrideEnabledStateForActionOfType:(id)arg2;
-(BOOL)contactInlineActionsViewController:(id)arg1 overrideEnabledStateForActionOfType:(id)arg2;

@end
