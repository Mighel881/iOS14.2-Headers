/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShareSheet/ShareSheet-Structs.h>
#import <UIKit/UIActivityExtensionItemDataProviding.h>
#import <UIKit/UIActivityExtensionItemDataReceiving.h>

@class _UIActivityResourceLoader, NSString, NSArray, NSUUID, NSExtension, UIImage, UIViewController;

@interface UIActivity : NSObject <UIActivityExtensionItemDataProviding, UIActivityExtensionItemDataReceiving> {

	long long _defaultPriority;
	_UIActivityResourceLoader* _activityImageLoader;
	_UIActivityResourceLoader* _activitySettingsImageLoader;
	/*^block*/id _activityCompletionWithItemsHandler;
	/*^block*/id _didFinishPerformingActivityHandler;
	long long _maxPreviews;
	NSString* _contentSizeCategory;
	NSArray* _preferredLocalizations;
	unsigned long long _indexInApplicationDefinedActivities;
	NSUUID* _activityUUID;

}

@property (nonatomic,readonly) NSExtension * applicationExtension; 
@property (nonatomic,copy) id activityCompletionWithItemsHandler;                                     //@synthesize activityCompletionWithItemsHandler=_activityCompletionWithItemsHandler - In the implementation block
@property (nonatomic,copy) id didFinishPerformingActivityHandler;                                     //@synthesize didFinishPerformingActivityHandler=_didFinishPerformingActivityHandler - In the implementation block
@property (assign,nonatomic) long long maxPreviews;                                                   //@synthesize maxPreviews=_maxPreviews - In the implementation block
@property (nonatomic,retain) NSString * contentSizeCategory;                                          //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (nonatomic,retain) NSArray * preferredLocalizations;                                        //@synthesize preferredLocalizations=_preferredLocalizations - In the implementation block
@property (assign,nonatomic) unsigned long long indexInApplicationDefinedActivities;                  //@synthesize indexInApplicationDefinedActivities=_indexInApplicationDefinedActivities - In the implementation block
@property (nonatomic,readonly) _UIActivityResourceLoader * _activityImageLoader; 
@property (nonatomic,readonly) _UIActivityResourceLoader * _activitySettingsImageLoader; 
@property (nonatomic,readonly) id _backgroundPreheatBlock; 
@property (nonatomic,readonly) NSUUID * activityUUID;                                                 //@synthesize activityUUID=_activityUUID - In the implementation block
@property (nonatomic,readonly) NSString * activityType; 
@property (nonatomic,readonly) NSString * activityTitle; 
@property (nonatomic,readonly) UIImage * activityImage; 
@property (nonatomic,readonly) UIViewController * activityViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)_xpcAttributes;
+(unsigned long long)_xpcAttributes;
+(long long)activityCategory;
+(void)_loadItemProvidersFromActivityItems:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)_defaultFallbackActivityType;
+(id)_actionImageForBundleImageConfiguration:(id)arg1 ;
+(double)imageWidthForContentSizeCategory:(id)arg1 ;
+(id)_actionImageForActionRepresentationImage:(id)arg1 contentSizeCategory:(id)arg2 ;
+(id)_activityExtensionItemsForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2 ;
+(BOOL)_isCapabilityBasedActivity;
+(void)_performAfterActivityImageLoadingCompletes:(/*^block*/id)arg1 ;
+(id)_stringFromActivityCategory:(long long)arg1 ;
+(id)preparedActivityExtensionItemDataForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2 ;
+(Class)classForPreparingExtensionItemData;
+(id)_imageByApplyingDefaultEffectsToImage:(id)arg1 activityCategory:(long long)arg2 iconFormat:(int)arg3 ;
+(id)_activityImageForActionRepresentationImage:(id)arg1 ;
+(id)_activityImageForApplicationBundleIdentifier:(id)arg1 ;
+(id)_activitySettingsImageForApplicationBundleIdentifier:(id)arg1 ;
+(id)_activityImageForBundleImageConfiguration:(id)arg1 ;
+(id)_activitySettingsImageForBundleImageConfiguration:(id)arg1 ;
+(long long)_activityStyle;
-(void)_cleanup;
-(NSString *)activityType;
-(id)init;
-(NSString *)contentSizeCategory;
-(NSString *)activityTitle;
-(BOOL)ss_shouldExecuteInShareSheet;
-(id)_activitySettingsImage;
-(id)ss_activityTypeToReportToHost;
-(id)ss_activitySpecificExtensionItemDataRequestInfo;
-(void)_injectedJavaScriptResult:(id)arg1 ;
-(BOOL)_isExecutedInProcess;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(id)applicationProxy;
-(NSArray *)preferredLocalizations;
-(id)_subjectForActivityItem:(id)arg1 ;
-(id)_attachmentNameForActivityItem:(id)arg1 ;
-(id)_dataTypeIdentifierForActivityItem:(id)arg1 ;
-(void)activityDidFinish:(BOOL)arg1 ;
-(id)_bundleIdentifierForActivityImageCreation;
-(id)_backgroundPreheatBlock;
-(long long)maxPreviews;
-(void)_prepareWithActivityItems:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)activityDidFinish:(BOOL)arg1 items:(id)arg2 error:(id)arg3 ;
-(unsigned long long)indexInApplicationDefinedActivities;
-(void)setDidFinishPerformingActivityHandler:(id)arg1 ;
-(id)_activityBundleImageConfiguration;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityExtensionItemData:(id)arg1 ;
-(void)_willBePerformedOrPresented;
-(id)_activityTypeUsingFallbackActivityTypeIfNecessary;
-(BOOL)_appIsDocumentTypeOwner;
-(BOOL)_supportsOpenInPlace;
-(id)_thumbnailImageForActivityItem:(id)arg1 ;
-(void)_setActivityCompletionWithItemsHandler:(/*^block*/id)arg1 ;
-(BOOL)_canBeExcludeWhenMatchingWithContext:(id)arg1 ;
-(void)_willPresentAsFormSheet;
-(BOOL)_wantsThumbnailItemData;
-(BOOL)_wantsAttachmentURLItemData;
-(BOOL)_wantsInitialSocialText;
-(_UIActivityResourceLoader *)_activityImageLoader;
-(_UIActivityResourceLoader *)_activitySettingsImageLoader;
-(id)_actionImage;
-(id)_actionBundleImageConfiguration;
-(id)activityCompletionWithItemsHandler;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)setActivityCompletionWithItemsHandler:(id)arg1 ;
-(id)didFinishPerformingActivityHandler;
-(void)setMaxPreviews:(long long)arg1 ;
-(void)setPreferredLocalizations:(NSArray *)arg1 ;
-(void)setIndexInApplicationDefinedActivities:(unsigned long long)arg1 ;
-(NSExtension *)applicationExtension;
-(id)_beforeActivity;
-(id)_embeddedActivityViewController;
-(id)_activitySettingsBundleImageConfiguration;
-(BOOL)_presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_dismissActivityFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_managesOwnPresentation;
-(BOOL)_needsResolvedActivityItems;
-(BOOL)ss_shouldDismissHostsPresentationBeforePerforming;
-(id)_activityImage;
-(NSUUID *)activityUUID;
-(UIImage *)activityImage;
-(BOOL)_activitySupportsPromiseURLs;
-(UIViewController *)activityViewController;
-(long long)_defaultSortGroup;
-(void)performActivity;
-(CGSize)_thumbnailSize;
-(id)_systemImageName;
@end
