/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUTriggerEditorDelegate.h>
#import <libobjc.A.dylib/HUSwitchCellDelegate.h>
#import <libobjc.A.dylib/HUTriggerSummaryActionGridViewControllerDelegate.h>
#import <libobjc.A.dylib/HUTriggerDurationPickerDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/WFHomeComposeViewControllerDelegate.h>
#import <libobjc.A.dylib/HUMediaSelectionViewControllerDelegate.h>

@protocol HUTriggerEditorDelegate;
@class HUTriggerSummaryActionGridViewController, HFTriggerBuilder, HUForwardingTriggerActionBuilderDelegate, HUTriggerActionFlow, HUTriggerSummaryItemManager, NSSet, NSString;

@interface HUTriggerSummaryViewController : HUItemTableViewController <HUTriggerEditorDelegate, HUSwitchCellDelegate, HUTriggerSummaryActionGridViewControllerDelegate, HUTriggerDurationPickerDelegate, UITextViewDelegate, WFHomeComposeViewControllerDelegate, HUMediaSelectionViewControllerDelegate> {

	BOOL _viewHasAppeared;
	BOOL _isEditingExistingTrigger;
	HUTriggerSummaryActionGridViewController* _actionSetsGridViewController;
	HUTriggerSummaryActionGridViewController* _serviceActionsGridViewController;
	HUTriggerSummaryActionGridViewController* _prioritizedServiceActionsGridViewController;
	HFTriggerBuilder* _triggerBuilder;
	id<HUTriggerEditorDelegate> _delegate;
	HUForwardingTriggerActionBuilderDelegate* _forwardingTriggerActionBuilderDelegate;
	HUTriggerActionFlow* _flow;

}

@property (nonatomic,retain) HFTriggerBuilder * triggerBuilder;                                                                     //@synthesize triggerBuilder=_triggerBuilder - In the implementation block
@property (assign,nonatomic) BOOL viewHasAppeared;                                                                                  //@synthesize viewHasAppeared=_viewHasAppeared - In the implementation block
@property (nonatomic,readonly) HUTriggerSummaryActionGridViewController * actionSetsGridViewController;                             //@synthesize actionSetsGridViewController=_actionSetsGridViewController - In the implementation block
@property (nonatomic,readonly) HUTriggerSummaryActionGridViewController * serviceActionsGridViewController;                         //@synthesize serviceActionsGridViewController=_serviceActionsGridViewController - In the implementation block
@property (nonatomic,readonly) HUTriggerSummaryActionGridViewController * prioritizedServiceActionsGridViewController;              //@synthesize prioritizedServiceActionsGridViewController=_prioritizedServiceActionsGridViewController - In the implementation block
@property (nonatomic,readonly) HUTriggerSummaryItemManager * itemManager; 
@property (nonatomic,retain) HUForwardingTriggerActionBuilderDelegate * forwardingTriggerActionBuilderDelegate;                     //@synthesize forwardingTriggerActionBuilderDelegate=_forwardingTriggerActionBuilderDelegate - In the implementation block
@property (assign,nonatomic) BOOL isEditingExistingTrigger;                                                                         //@synthesize isEditingExistingTrigger=_isEditingExistingTrigger - In the implementation block
@property (nonatomic,retain) HUTriggerActionFlow * flow;                                                                            //@synthesize flow=_flow - In the implementation block
@property (assign,nonatomic,__weak) id<HUTriggerEditorDelegate> delegate;                                                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSSet * prioritizedHomeObjects; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)adoptsDefaultGridLayoutMargins;
+(id)createTriggerSummaryViewControllerForHome:(id)arg1 withTriggerActionSetBuilder:(id)arg2 andTriggerActionBuilderEditorDelegate:(id)arg3 ;
-(HUTriggerActionFlow *)flow;
-(void)_done:(id)arg1 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id<HUTriggerEditorDelegate>)delegate;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_cancel:(id)arg1 ;
-(void)setDelegate:(id<HUTriggerEditorDelegate>)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(HFTriggerBuilder *)triggerBuilder;
-(void)setFlow:(HUTriggerActionFlow *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)childViewControllersToPreload;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(void)_addAction:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(id)initWithTriggerBuilder:(id)arg1 flow:(id)arg2 delegate:(id)arg3 ;
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(void)serviceGridViewController:(id)arg1 didTapItem:(id)arg2 ;
-(void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(id)mediaSelectionViewControllerMessageForMediaActionPlayUnavailable:(id)arg1 ;
-(id)mediaSelectionViewController:(id)arg1 messageForMediaPickerUnavailableReason:(long long)arg2 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(unsigned long long)automaticDisablingReasonsForItem:(id)arg1 ;
-(BOOL)shouldHideHeaderAboveSection:(long long)arg1 ;
-(BOOL)shouldHideFooterBelowSection:(long long)arg1 ;
-(BOOL)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2 ;
-(void)setForwardingTriggerActionBuilderDelegate:(HUForwardingTriggerActionBuilderDelegate *)arg1 ;
-(HUForwardingTriggerActionBuilderDelegate *)forwardingTriggerActionBuilderDelegate;
-(void)setTriggerBuilder:(HFTriggerBuilder *)arg1 ;
-(void)setIsEditingExistingTrigger:(BOOL)arg1 ;
-(NSSet *)prioritizedHomeObjects;
-(void)setPrioritizedHomeObjects:(NSSet *)arg1 ;
-(void)setViewHasAppeared:(BOOL)arg1 ;
-(BOOL)_canCommitTriggerBuilder;
-(void)_commitTriggerBuilder;
-(void)_cancelShortcutEditor:(id)arg1 ;
-(HUTriggerSummaryActionGridViewController *)actionSetsGridViewController;
-(HUTriggerSummaryActionGridViewController *)serviceActionsGridViewController;
-(HUTriggerSummaryActionGridViewController *)prioritizedServiceActionsGridViewController;
-(BOOL)isEditingExistingTrigger;
-(id)_durationEventBuilder;
-(void)_updateTableHeaderConfiguration;
-(void)_showEditorForTriggerBuilderItem:(id)arg1 ;
-(void)_showShortcutEditorForTriggerBuilderItem:(id)arg1 ;
-(void)_testTrigger;
-(void)_deleteTrigger:(id)arg1 indexPath:(id)arg2 ;
-(void)_presentMediaSelection;
-(void)_setTriggerEnabled:(BOOL)arg1 ;
-(void)triggerSummaryActionGridViewController:(id)arg1 didUpdateTriggerBuilder:(id)arg2 ;
-(BOOL)triggerSummaryActionGridViewController:(id)arg1 shouldShowAction:(id)arg2 ;
-(void)durationPicker:(id)arg1 didSelectDuration:(id)arg2 ;
-(void)homeComposeViewController:(id)arg1 didFinishWithHomeWorkflow:(id)arg2 ;
-(id)initWithTriggerBuilder:(id)arg1 mode:(unsigned long long)arg2 isPresentedModally:(BOOL)arg3 delegate:(id)arg4 ;
-(void)_removeActionsInServiceActionItem:(id)arg1 ;
-(id)itemTableHeaderMessage;
-(BOOL)viewHasAppeared;
@end
