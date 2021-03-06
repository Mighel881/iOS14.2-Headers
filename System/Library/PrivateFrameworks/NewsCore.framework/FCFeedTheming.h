/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class FCTagBanner, NSString, FCTextInfo, FCColor, FCContentColorMap, FCAssetHandle, NSArray, FCHeadlineTemplate;


@protocol FCFeedTheming <NSObject,NFCopying>
@property (nonatomic,readonly) long long feedType; 
@property (nonatomic,readonly) BOOL isWhite; 
@property (nonatomic,readonly) BOOL isDark; 
@property (nonatomic,readonly) FCTagBanner * defaultBannerImage; 
@property (nonatomic,readonly) FCTagBanner * bannerImageForWhiteBackground; 
@property (nonatomic,readonly) FCTagBanner * bannerImageForThemeBackground; 
@property (nonatomic,readonly) FCTagBanner * bannerImageForMask; 
@property (nonatomic,readonly) FCTagBanner * compactBannerImage; 
@property (nonatomic,readonly) double bannerImageScale; 
@property (nonatomic,readonly) double bannerImageBaselineOffsetPercentage; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) FCTextInfo * headlineTitleTextInfo; 
@property (nonatomic,copy,readonly) FCTextInfo * headlineExcerptTextInfo; 
@property (nonatomic,copy,readonly) FCTextInfo * headlineBylineTextInfo; 
@property (nonatomic,readonly) FCColor * backgroundColor; 
@property (nonatomic,readonly) FCColor * darkStyleBackgroundColor; 
@property (nonatomic,readonly) FCColor * foregroundColor; 
@property (nonatomic,readonly) FCColor * darkStyleForegroundColor; 
@property (nonatomic,readonly) FCContentColorMap * contentColorMap; 
@property (nonatomic,readonly) FCAssetHandle * logoImageAssetHandle; 
@property (nonatomic,readonly) FCAssetHandle * nameImageAssetHandle; 
@property (nonatomic,readonly) FCAssetHandle * nameImageCompactAssetHandle; 
@property (nonatomic,readonly) CGSize nameImageSize; 
@property (nonatomic,readonly) FCEdgeInsets nameImageInsets; 
@property (nonatomic,readonly) FCAssetHandle * nameImageForDarkBackgroundAssetHandle; 
@property (nonatomic,readonly) CGSize nameImageForDarkBackgroundSize; 
@property (nonatomic,readonly) FCEdgeInsets nameImageForDarkBackgroundInsets; 
@property (nonatomic,readonly) FCAssetHandle * nameImageMaskAssetHandle; 
@property (nonatomic,readonly) CGSize nameImageMaskSize; 
@property (nonatomic,readonly) FCEdgeInsets nameImageMaskInsets; 
@property (nonatomic,readonly) NSArray * loadableFonts; 
@property (nonatomic,readonly) FCHeadlineTemplate * defaultHeadlineTemplate; 
@property (nonatomic,readonly) BOOL allowCustomBottomStyle; 
@required
-(FCTagBanner *)defaultBannerImage;
-(long long)feedType;
-(FCEdgeInsets)nameImageInsets;
-(FCTagBanner *)bannerImageForWhiteBackground;
-(BOOL)isDark;
-(FCColor *)darkStyleForegroundColor;
-(FCAssetHandle *)nameImageForDarkBackgroundAssetHandle;
-(FCAssetHandle *)nameImageAssetHandle;
-(CGSize)nameImageSize;
-(FCColor *)foregroundColor;
-(BOOL)isWhite;
-(CGSize)nameImageForDarkBackgroundSize;
-(FCTextInfo *)headlineExcerptTextInfo;
-(FCTextInfo *)headlineBylineTextInfo;
-(FCColor *)backgroundColor;
-(FCTagBanner *)compactBannerImage;
-(NSString *)name;
-(FCContentColorMap *)contentColorMap;
-(FCTextInfo *)headlineTitleTextInfo;
-(FCAssetHandle *)logoImageAssetHandle;
-(double)bannerImageBaselineOffsetPercentage;
-(FCTagBanner *)bannerImageForMask;
-(NSArray *)loadableFonts;
-(double)bannerImageScale;
-(FCEdgeInsets)nameImageMaskInsets;
-(BOOL)allowCustomBottomStyle;
-(FCTagBanner *)bannerImageForThemeBackground;
-(FCColor *)darkStyleBackgroundColor;
-(CGSize)nameImageMaskSize;
-(FCAssetHandle *)nameImageCompactAssetHandle;
-(FCAssetHandle *)nameImageMaskAssetHandle;
-(FCEdgeInsets)nameImageForDarkBackgroundInsets;
-(FCHeadlineTemplate *)defaultHeadlineTemplate;

@end

