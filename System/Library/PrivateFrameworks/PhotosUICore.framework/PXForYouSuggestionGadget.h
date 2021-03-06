/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXDiagnosticsEnvironment.h>
#import <libobjc.A.dylib/PXGadget.h>

@protocol PXForYouSuggestionGadgetDelegate, PXDisplaySuggestion, PXDisplayAsset;
@class PXGadgetSpec, PXUIMediaProvider, PXForYouSuggestionGadgetContentView, NSString, UIImage, PXRegionOfInterest;

@interface PXForYouSuggestionGadget : NSObject <PXDiagnosticsEnvironment, PXGadget> {

	BOOL _contentHidden;
	BOOL _blursDegradedContent;
	BOOL _shouldSuppressSelectionAnimation;
	BOOL _contentViewVisible;
	unsigned short _suggestionType;
	PXGadgetSpec* _gadgetSpec;
	long long _priority;
	id<PXForYouSuggestionGadgetDelegate> _delegate;
	id<PXDisplaySuggestion> _suggestion;
	PXUIMediaProvider* _mediaProvider;
	id<PXDisplayAsset> _keyAsset;
	PXForYouSuggestionGadgetContentView* _contentView;
	NSString* _title;
	NSString* _subtitle;
	CGSize _cachedHeightForWidth;
	CGRect _visibleContentRect;

}

@property (nonatomic,retain) PXUIMediaProvider * mediaProvider;                                      //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,retain) id<PXDisplayAsset> keyAsset;                                            //@synthesize keyAsset=_keyAsset - In the implementation block
@property (assign,nonatomic) CGSize cachedHeightForWidth;                                            //@synthesize cachedHeightForWidth=_cachedHeightForWidth - In the implementation block
@property (nonatomic,retain) PXForYouSuggestionGadgetContentView * contentView;                      //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) BOOL contentViewVisible;                                                //@synthesize contentViewVisible=_contentViewVisible - In the implementation block
@property (nonatomic,copy) NSString * title;                                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                                      //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) unsigned short suggestionType;                                          //@synthesize suggestionType=_suggestionType - In the implementation block
@property (nonatomic,retain) id<PXDisplaySuggestion> suggestion;                                     //@synthesize suggestion=_suggestion - In the implementation block
@property (assign,nonatomic,__weak) id<PXForYouSuggestionGadgetDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isContentHidden,nonatomic) BOOL contentHidden;                              //@synthesize contentHidden=_contentHidden - In the implementation block
@property (nonatomic,readonly) UIImage * currentImage; 
@property (assign,nonatomic) BOOL blursDegradedContent;                                              //@synthesize blursDegradedContent=_blursDegradedContent - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressSelectionAnimation;                                  //@synthesize shouldSuppressSelectionAnimation=_shouldSuppressSelectionAnimation - In the implementation block
@property (nonatomic,readonly) PXRegionOfInterest * regionOfInterestForOneUpTransition; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                                              //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority;                                                     //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect;                                              //@synthesize visibleContentRect=_visibleContentRect - In the implementation block
+(id)fetchQueue;
+(void)preloadResources;
-(void)setContentViewVisible:(BOOL)arg1 ;
-(void)setContentHidden:(BOOL)arg1 ;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(void)setMediaProvider:(PXUIMediaProvider *)arg1 ;
-(void)contentViewWillAppear;
-(unsigned long long)gadgetType;
-(unsigned long long)gadgetCapabilities;
-(PXGadgetSpec *)gadgetSpec;
-(void)contentViewDidDisappear;
-(PXUIMediaProvider *)mediaProvider;
-(void)commitPreviewViewController:(id)arg1 ;
-(id)init;
-(id)initWithSuggestion:(id)arg1 ;
-(id<PXForYouSuggestionGadgetDelegate>)delegate;
-(void)_updateTitleAndSubtitle;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setSuggestionType:(unsigned short)arg1 ;
-(void)setDelegate:(id<PXForYouSuggestionGadgetDelegate>)arg1 ;
-(id)px_diagnosticsItemProvidersForPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(id<PXDisplayAsset>)keyAsset;
-(CGRect)visibleContentRect;
-(void)setSuggestion:(id<PXDisplaySuggestion>)arg1 ;
-(void)setKeyAsset:(id<PXDisplayAsset>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setBlursDegradedContent:(BOOL)arg1 ;
-(BOOL)blursDegradedContent;
-(NSString *)title;
-(void)setVisibleContentRect:(CGRect)arg1 ;
-(long long)priority;
-(UIImage *)currentImage;
-(void)_handleDismiss;
-(void)userDidSelectGadget;
-(id)debugURLsForDiagnostics;
-(id)uniqueGadgetIdentifier;
-(void)contentHasBeenSeen;
-(void)gadgetControllerHasAppeared;
-(id)targetPreviewViewForLocation:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(id)previewViewControllerAtLocation:(CGPoint)arg1 fromSourceView:(id)arg2 ;
-(void)_updateContentViewMode;
-(id)_contentViewIfLoaded;
-(void)_markSuggestionAsActive;
-(void)_markSuggestionAsDeclined;
-(void)_updateKeyAsset;
-(BOOL)shouldSuppressSelectionAnimation;
-(CGSize)cachedHeightForWidth;
-(void)setShouldSuppressSelectionAnimation:(BOOL)arg1 ;
-(void)setCachedHeightForWidth:(CGSize)arg1 ;
-(BOOL)contentViewVisible;
-(id<PXDisplaySuggestion>)suggestion;
-(void)setPriority:(long long)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(PXForYouSuggestionGadgetContentView *)contentView;
-(void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2 ;
-(unsigned short)suggestionType;
-(id)debugDictionary;
-(PXRegionOfInterest *)regionOfInterestForOneUpTransition;
-(void)setContentView:(PXForYouSuggestionGadgetContentView *)arg1 ;
-(BOOL)isContentHidden;
-(void)dealloc;
@end

