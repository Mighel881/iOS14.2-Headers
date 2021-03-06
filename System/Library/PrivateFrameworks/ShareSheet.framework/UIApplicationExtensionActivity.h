/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShareSheet/UIActivity.h>
#import <UIKit/UIActivityExtensionItemDataSource.h>
#import <UIKit/UIActivityExtensionItemDataTarget.h>

@class NSExtension, NSExtensionItem, UIViewController, _UIActivityBundleHelper, NSDate, UISUIActivityExtensionItemDataRequest, NSString;

@interface UIApplicationExtensionActivity : UIActivity <UIActivityExtensionItemDataSource, UIActivityExtensionItemDataTarget> {

	NSExtension* _applicationExtension;
	NSExtensionItem* __injectedExtensionItem;
	UIViewController* _extensionViewController;
	id _extensionContextIdentifier;
	UIViewController* _presenterViewController;
	/*^block*/id _presenterCompletion;
	_UIActivityBundleHelper* _activityBundleHelper;
	/*^block*/id _extensionRequestCleanupCompletion;
	NSDate* _installationDate;
	UISUIActivityExtensionItemDataRequest* _extensionItemDataRequest;

}

@property (nonatomic,retain) UIViewController * extensionViewController;                                    //@synthesize extensionViewController=_extensionViewController - In the implementation block
@property (nonatomic,retain) NSExtension * applicationExtension;                                            //@synthesize applicationExtension=_applicationExtension - In the implementation block
@property (nonatomic,copy) id extensionContextIdentifier;                                                   //@synthesize extensionContextIdentifier=_extensionContextIdentifier - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presenterViewController;                             //@synthesize presenterViewController=_presenterViewController - In the implementation block
@property (nonatomic,copy) id presenterCompletion;                                                          //@synthesize presenterCompletion=_presenterCompletion - In the implementation block
@property (nonatomic,retain) _UIActivityBundleHelper * activityBundleHelper;                                //@synthesize activityBundleHelper=_activityBundleHelper - In the implementation block
@property (nonatomic,retain) NSExtensionItem * _injectedExtensionItem;                                      //@synthesize _injectedExtensionItem=__injectedExtensionItem - In the implementation block
@property (nonatomic,copy) id extensionRequestCleanupCompletion;                                            //@synthesize extensionRequestCleanupCompletion=_extensionRequestCleanupCompletion - In the implementation block
@property (nonatomic,readonly) NSDate * installationDate;                                                   //@synthesize installationDate=_installationDate - In the implementation block
@property (nonatomic,readonly) NSString * containingAppBundleIdentifier; 
@property (nonatomic,retain) UISUIActivityExtensionItemDataRequest * extensionItemDataRequest;              //@synthesize extensionItemDataRequest=_extensionItemDataRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_applicationExtensionActivitiesForItems:(id)arg1 ;
+(long long)activityCategory;
+(id)_activityExtensionItemsForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2 ;
+(id)preparedActivityExtensionItemDataForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2 ;
-(void)_cleanup;
-(id)activityType;
-(NSString *)containingAppBundleIdentifier;
-(void)setExtensionViewController:(UIViewController *)arg1 ;
-(id)activityTitle;
-(id)_activitySettingsImage;
-(void)setApplicationExtension:(NSExtension *)arg1 ;
-(void)set_injectedExtensionItem:(NSExtensionItem *)arg1 ;
-(_UIActivityBundleHelper *)activityBundleHelper;
-(NSExtensionItem *)_injectedExtensionItem;
-(UISUIActivityExtensionItemDataRequest *)extensionItemDataRequest;
-(NSDate *)installationDate;
-(BOOL)_isServiceExtension;
-(void)setExtensionRequestCleanupCompletion:(id)arg1 ;
-(void)_instantiateExtensionViewControllerWithInputItems:(id)arg1 ;
-(void)setPresenterViewController:(UIViewController *)arg1 ;
-(void)setPresenterCompletion:(id)arg1 ;
-(UIViewController *)presenterViewController;
-(void)_presentExtensionViewControllerIfPossible;
-(id)extensionRequestCleanupCompletion;
-(id)presenterCompletion;
-(void)_injectedJavaScriptResult:(id)arg1 ;
-(void)setActivityBundleHelper:(_UIActivityBundleHelper *)arg1 ;
-(NSString *)debugDescription;
-(UIViewController *)extensionViewController;
-(id)initWithApplicationExtension:(id)arg1 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityExtensionItemData:(id)arg1 ;
-(BOOL)_canBeExcludeWhenMatchingWithContext:(id)arg1 ;
-(id)_actionImage;
-(void)prepareWithActivityItems:(id)arg1 ;
-(NSExtension *)applicationExtension;
-(BOOL)_presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_dismissActivityFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_managesOwnPresentation;
-(id)_activityImage;
-(void)setExtensionContextIdentifier:(id)arg1 ;
-(id)extensionContextIdentifier;
-(void)setExtensionItemDataRequest:(UISUIActivityExtensionItemDataRequest *)arg1 ;
-(long long)_defaultSortGroup;
-(void)dealloc;
@end

