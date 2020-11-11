/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUNameAndIconEditorCellDelegate.h>
#import <libobjc.A.dylib/HUMediaSystemEditorGridViewControllerDelegate.h>
#import <libobjc.A.dylib/HUPresentationDelegateHost.h>

@protocol HUPresentationDelegate, HUMediaSystemEditorViewControllerDelegate;
@class HUMediaSystemEditorGridViewController, NAFuture, HUMediaSystemEditorItemManager, HFMediaSystemBuilder, NSString;

@interface HUMediaSystemEditorViewController : HUItemTableViewController <HUNameAndIconEditorCellDelegate, HUMediaSystemEditorGridViewControllerDelegate, HUPresentationDelegateHost> {

	BOOL _hasViewEverAppeared;
	id<HUPresentationDelegate> _presentationDelegate;
	HUMediaSystemEditorGridViewController* _serviceGridViewController;
	id<HUMediaSystemEditorViewControllerDelegate> _mediaSystemEditorDelegate;
	NAFuture* _createNewMediaSystemFuture;
	NAFuture* _accountArbitrationFuture;

}

@property (nonatomic,retain) HUMediaSystemEditorItemManager * itemManager; 
@property (nonatomic,readonly) HUMediaSystemEditorGridViewController * serviceGridViewController;                         //@synthesize serviceGridViewController=_serviceGridViewController - In the implementation block
@property (assign,nonatomic) BOOL hasViewEverAppeared;                                                                    //@synthesize hasViewEverAppeared=_hasViewEverAppeared - In the implementation block
@property (nonatomic,retain) NAFuture * createNewMediaSystemFuture;                                                       //@synthesize createNewMediaSystemFuture=_createNewMediaSystemFuture - In the implementation block
@property (nonatomic,retain) NAFuture * accountArbitrationFuture;                                                         //@synthesize accountArbitrationFuture=_accountArbitrationFuture - In the implementation block
@property (nonatomic,readonly) HFMediaSystemBuilder * mediaSystemBuilder; 
@property (assign,nonatomic,__weak) id<HUMediaSystemEditorViewControllerDelegate> mediaSystemEditorDelegate;              //@synthesize mediaSystemEditorDelegate=_mediaSystemEditorDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HUPresentationDelegate> presentationDelegate;                                      //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
+(BOOL)adoptsDefaultGridLayoutMargins;
+(BOOL)wouldPairingAccessoriesNecessitateConfiguration:(id)arg1 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)_cancel:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)childViewControllersToPreload;
-(id<HUPresentationDelegate>)presentationDelegate;
-(BOOL)shouldManageTextFieldForItem:(id)arg1 ;
-(void)setPresentationDelegate:(id<HUPresentationDelegate>)arg1 ;
-(id)finishPresentation:(id)arg1 animated:(BOOL)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(BOOL)shouldHideHeaderAboveSection:(long long)arg1 ;
-(BOOL)shouldHideFooterBelowSection:(long long)arg1 ;
-(BOOL)hasViewEverAppeared;
-(void)setHasViewEverAppeared:(BOOL)arg1 ;
-(HUMediaSystemEditorGridViewController *)serviceGridViewController;
-(BOOL)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2 ;
-(id)savedName;
-(HFMediaSystemBuilder *)mediaSystemBuilder;
-(id)mediaSystemEditorGrid:(id)arg1 didUpdateMediaSystemBuilder:(id)arg2 ;
-(id)initForCreatingNewMediaSystemFromMediaAccessories:(id)arg1 home:(id)arg2 ;
-(void)setMediaSystemEditorDelegate:(id<HUMediaSystemEditorViewControllerDelegate>)arg1 ;
-(void)createMediaSystemWithAccessory:(id)arg1 ;
-(void)setAccountArbitrationFuture:(NAFuture *)arg1 ;
-(NAFuture *)accountArbitrationFuture;
-(id)initForEditingExistingMediaSystemBuilder:(id)arg1 ;
-(NAFuture *)createNewMediaSystemFuture;
-(id)createMediaSystem;
-(id)_checkIfAccessoriesNeedSoftwareUpdateToSupportPairing;
-(id)_promptForRoomChange;
-(id)_executeAppleMusicAccountReconcilationForMediaSystemBuilder:(id)arg1 ;
-(id<HUMediaSystemEditorViewControllerDelegate>)mediaSystemEditorDelegate;
-(void)setCreateNewMediaSystemFuture:(NAFuture *)arg1 ;
-(void)_configureMediaSystemBuilderToMoveHomePodsToRoom:(id)arg1 ;
-(/*^block*/id)_authKitContextGenerator;
@end
