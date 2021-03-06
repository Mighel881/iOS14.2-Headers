/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MobileSafariSettings/SafariAutoFillListController.h>
#import <libobjc.A.dylib/_SFSettingsAuthenticationRequiring.h>

@class NSArray, UIBarButtonItem, NSString;

@interface SafariSavedCreditCardsController : SafariAutoFillListController <_SFSettingsAuthenticationRequiring> {

	NSArray* _specifiersForAddItem;
	UIBarButtonItem* _deleteBarButtonItem;
	UIBarButtonItem* _editBarButtonItem;
	UIBarButtonItem* _cancelBarButtonItem;
	NSArray* _virtualCards;
	NSArray* _specifiersForVirtualCardSection;
	BOOL _hasBeenAuthenticated;

}

@property (nonatomic,copy,readonly) NSString * authenticationPrompt; 
@property (nonatomic,readonly) BOOL showsAuthenticationPromptAsTitle; 
@property (assign,nonatomic) BOOL hasBeenAuthenticated;                            //@synthesize hasBeenAuthenticated=_hasBeenAuthenticated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_updateDeleteButton;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(void)_addItem:(id)arg1 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHasBeenAuthenticated:(BOOL)arg1 ;
-(BOOL)hasBeenAuthenticated;
-(BOOL)showsAuthenticationPromptAsTitle;
-(NSString *)authenticationPrompt;
-(void)_updateEditButton;
-(id)_deleteBarButtonItem;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(void)_cancelEditing;
-(void)_deleteButtonTapped;
-(id)_cancelBarButtonItem;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)_editBarButtonItem;
-(void)_showEditBarButtonItemAnimated:(BOOL)arg1 ;
-(id)_specifiersForVirtualCardSection;
-(id)titleForAddItem;
-(Class)controllerClassForAddItem;
-(id)_specifiersForAddItem;
-(void)_createVirtualCardSectionSpecifiers;
-(id)_specifiersToAddOrRemoveWhenTogglingEditButton;
-(void)_toggleEditing;
-(unsigned long long)_autoFillItemCount;
-(id)deleteConfirmationTitle;
-(id)deleteConfirmationMessage;
-(void)_deleteSelectedItems;
-(void)deleteItemsForSpecifiers:(id)arg1 ;
-(BOOL)isSpecifierForAutoFillItem:(id)arg1 ;
-(void)_viewVirtualCardInWallet:(id)arg1 ;
@end

