/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PUDisplayAsset.h>
#import <libobjc.A.dylib/PXPhotoKitAdjustedDisplayAsset.h>

@protocol PXDisplaySuggestion, PXDisplayAsset;
@class NSString, PHAsset, CLLocation, NSDate, NSNumber;

@interface PXForYouSuggestionDisplayAsset : NSObject <PUDisplayAsset, PXPhotoKitAdjustedDisplayAsset> {

	BOOL _shouldInvert;
	PHAsset* _photoKitAsset;
	NSString* _adjustedContentIdentifier;
	id<PXDisplaySuggestion> _suggestion;
	id<PXDisplayAsset> _keyAsset;

}

@property (nonatomic,readonly) unsigned long long mediaType; 
@property (nonatomic,readonly) unsigned long long mediaSubtypes; 
@property (nonatomic,readonly) long long playbackStyle; 
@property (nonatomic,readonly) long long playbackVariation; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) unsigned long long pixelWidth; 
@property (nonatomic,readonly) unsigned long long pixelHeight; 
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) double duration; 
@property (getter=isFavorite,nonatomic,readonly) BOOL favorite; 
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * localCreationDate; 
@property (nonatomic,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,readonly) NSString * localizedGeoDescription; 
@property (nonatomic,readonly) BOOL isTemporaryPlaceholder; 
@property (nonatomic,readonly) NSString * uniformTypeIdentifier; 
@property (nonatomic,readonly) unsigned long long originalFilesize; 
@property (nonatomic,readonly) BOOL isAnimatedImage; 
@property (getter=isLivePhoto,nonatomic,readonly) BOOL livePhoto; 
@property (nonatomic,readonly) BOOL canPlayPhotoIris; 
@property (nonatomic,readonly) BOOL canPlayLoopingVideo; 
@property (nonatomic,readonly) BOOL isPhotoIrisPlaceholder; 
@property (nonatomic,readonly) SCD_Struct_PX8 photoIrisStillDisplayTime; 
@property (nonatomic,readonly) SCD_Struct_PX8 photoIrisVideoDuration; 
@property (nonatomic,readonly) BOOL hasPhotoColorAdjustments; 
@property (nonatomic,readonly) unsigned long long deferredLogInfo; 
@property (nonatomic,readonly) SCD_Struct_PX8 videoKeyFrameSourceTime; 
@property (nonatomic,readonly) BOOL needsDeferredProcessing; 
@property (nonatomic,readonly) unsigned short deferredProcessingNeeded; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL shouldInvert;                                     //@synthesize shouldInvert=_shouldInvert - In the implementation block
@property (nonatomic,readonly) id<PXDisplaySuggestion> suggestion;                    //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> keyAsset;                           //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,readonly) BOOL isApplied; 
@property (nonatomic,readonly) BOOL wantsAdjustments; 
@property (nonatomic,readonly) NSString * adjustedContentIdentifier;                  //@synthesize adjustedContentIdentifier=_adjustedContentIdentifier - In the implementation block
@property (nonatomic,readonly) PHAsset * photoKitAsset;                               //@synthesize photoKitAsset=_photoKitAsset - In the implementation block
@property (nonatomic,readonly) long long mediaType; 
@property (nonatomic,readonly) BOOL representsBurst; 
@property (nonatomic,readonly) BOOL isInCloud; 
@property (nonatomic,readonly) BOOL isEligibleForAutoPlayback; 
@property (nonatomic,readonly) Class defaultImageProviderClass; 
@property (nonatomic,readonly) unsigned long long thumbnailVersion; 
@property (nonatomic,readonly) NSNumber * hdrGain; 
@property (nonatomic,readonly) unsigned long long burstSelectionTypes; 
@property (nonatomic,readonly) NSDate * importDate; 
@property (nonatomic,readonly) BOOL isAutoPlaybackEligibilityEstimated; 
@property (nonatomic,readonly) unsigned long long thumbnailIndex; 
-(BOOL)isHidden;
-(SCD_Struct_PX8)photoIrisStillDisplayTime;
-(SCD_Struct_PX8)photoIrisVideoDuration;
-(BOOL)isPhotoIrisPlaceholder;
-(BOOL)hasPhotoColorAdjustments;
-(CLLocation *)location;
-(unsigned long long)originalFilesize;
-(NSString *)uuid;
-(NSDate *)modificationDate;
-(unsigned long long)pixelHeight;
-(double)duration;
-(SCD_Struct_PX8)videoKeyFrameSourceTime;
-(NSString *)localizedGeoDescription;
-(BOOL)isTemporaryPlaceholder;
-(unsigned long long)deferredLogInfo;
-(BOOL)isLivePhoto;
-(unsigned long long)pixelWidth;
-(NSString *)uniformTypeIdentifier;
-(unsigned long long)mediaType;
-(BOOL)representsBurst;
-(BOOL)canPlayPhotoIris;
-(BOOL)canPlayLoopingVideo;
-(BOOL)isAnimatedImage;
-(BOOL)isApplied;
-(id)applyAdjustmentsToCompositionController:(id)arg1 renderer:(id)arg2 ;
-(BOOL)wantsAdjustments;
-(NSString *)adjustedContentIdentifier;
-(BOOL)isInCloud;
-(unsigned long long)thumbnailIndex;
-(id)initWithSuggestion:(id)arg1 keyAsset:(id)arg2 ;
-(id)initWithSuggestion:(id)arg1 keyAsset:(id)arg2 shouldRevert:(BOOL)arg3 ;
-(BOOL)isEqualToSuggestionDisplayAsset:(id)arg1 ;
-(BOOL)shouldInvert;
-(id)_computedPortraitEffectSettingsForCompositionController:(id)arg1 ;
-(CGRect)bestCropRectForAspectRatio:(double)arg1 ;
-(BOOL)needsDeferredProcessing;
-(BOOL)isEligibleForAutoPlayback;
-(Class)defaultImageProviderClass;
-(id<PXDisplayAsset>)keyAsset;
-(double)aspectRatio;
-(BOOL)isEqual:(id)arg1 ;
-(long long)playbackVariation;
-(unsigned long long)mediaSubtypes;
-(NSString *)uuid;
-(BOOL)isFavorite;
-(PHAsset *)photoKitAsset;
-(id)inverseSuggestionAsset;
-(id<PXDisplaySuggestion>)suggestion;
-(unsigned long long)pixelHeight;
-(double)duration;
-(long long)isContentEqualTo:(id)arg1 ;
-(NSDate *)localCreationDate;
-(NSDate *)creationDate;
-(CGRect)bestCropRectForAspectRatio:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)pixelWidth;
-(long long)playbackStyle;
@end
