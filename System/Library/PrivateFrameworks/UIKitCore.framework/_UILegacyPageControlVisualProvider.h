/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIPageControlVisualProvider.h>

@class UIImage, NSMutableArray, UIVisualEffectView, _UILegibilitySettings;

@interface _UILegacyPageControlVisualProvider : _UIPageControlVisualProvider {

	UIImage* _currentPageImage;
	UIImage* _pageImage;
	NSMutableArray* _currentPageImages;
	NSMutableArray* _pageImages;
	UIVisualEffectView* _backgroundVisualEffectView;
	NSMutableArray* _indicators;
	_UILegibilitySettings* __legibilitySettings;

}

@property (setter=_setLegibilitySettings:,getter=_legibilitySettings,nonatomic,retain) _UILegibilitySettings * _legibilitySettings;              //@synthesize _legibilitySettings=__legibilitySettings - In the implementation block
@property (assign,setter=_setLegibilityStyle:,getter=_legibilityStyle,nonatomic) long long _legibilityStyle; 
-(void)didUpdateCurrentPageIndicatorTintColor;
-(_UILegibilitySettings *)_legibilitySettings;
-(void)didEndTrackingWithTouch:(id)arg1 ;
-(void)didUpdateNumberOfPages;
-(id)preferredIndicatorImage;
-(void)invalidateIndicators;
-(void)updateDisplayedPageToCurrentPage;
-(CGRect)_modernBounds;
-(void)didUpdatePageIndicatorTintColor;
-(CGSize)sizeForNumberOfPages:(long long)arg1 ;
-(void)pruneArchivedSubviews:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)_pageIndicatorImageForPage:(long long)arg1 ;
-(void)_cachePageIndicatorImages;
-(id)defaultActivePageIndicatorImage;
-(id)effectiveContentView;
-(void)_setLegibilityStyle:(long long)arg1 ;
-(void)_drawModernIndicatorInView:(id)arg1 enabled:(BOOL)arg2 ;
-(BOOL)_hasCustomImageForPage:(long long)arg1 enabled:(BOOL)arg2 ;
-(id)_cachedPageIndicatorImageForPage:(long long)arg1 ;
-(void)_setLegibilitySettings:(id)arg1 ;
-(id)_indicatorViewEnabled:(BOOL)arg1 index:(long long)arg2 ;
-(long long)_legibilityStyle;
-(double)_modernCornerRadius;
-(id)_modernColorEnabled:(BOOL)arg1 ;
-(void)layoutSubviews;
-(id)_modernIndicatorImageEnabled:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_createModernIndicatorImageFromView:(id)arg1 ;
-(CGRect)_indicatorFrameAtIndex:(long long)arg1 ;
-(id)_pageIndicatorCurrentImageForPage:(long long)arg1 ;
-(void)_setDisplayedPage:(long long)arg1 ;
-(void)_transitionIndicator:(id)arg1 toEnabled:(BOOL)arg2 index:(long long)arg3 ;
-(void)_transitionIndicator:(id)arg1 toEnabled:(BOOL)arg2 index:(long long)arg3 legible:(BOOL)arg4 ;
-(BOOL)_shouldDrawLegibly;
-(double)_indicatorSpacing;
-(void)prepare;
-(id)_indicatorViewEnabled:(BOOL)arg1 index:(long long)arg2 legible:(BOOL)arg3 ;
-(void)_modernTransitionIndicator:(id)arg1 toEnabled:(BOOL)arg2 index:(long long)arg3 legible:(BOOL)arg4 ;
-(id)_cachedPageIndicatorCurrentImageForPage:(long long)arg1 ;
@end

