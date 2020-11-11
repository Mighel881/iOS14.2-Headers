/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PUBrowsingVideoPlayerChangeObserver.h>

@class PUAssetViewModel, NSString;

@interface PUBadgeInfoProvider : PXObservable <PUBrowsingVideoPlayerChangeObserver> {

	SCD_Struct_PU17 _needsUpdateFlags;
	BOOL _outputShouldAnimate;
	BOOL _playing;
	PUAssetViewModel* _assetViewModel;
	double _lastPlayingTime;
	PXAssetBadgeInfo _badgeInfo;
	PXAssetBadgeInfo _outputBadgeInfo;

}

@property (assign,nonatomic) double lastPlayingTime;                           //@synthesize lastPlayingTime=_lastPlayingTime - In the implementation block
@property (assign,nonatomic) BOOL playing;                                     //@synthesize playing=_playing - In the implementation block
@property (nonatomic,readonly) PUAssetViewModel * assetViewModel;              //@synthesize assetViewModel=_assetViewModel - In the implementation block
@property (nonatomic,readonly) PXAssetBadgeInfo badgeInfo;                     //@synthesize badgeInfo=_badgeInfo - In the implementation block
@property (nonatomic,readonly) PXAssetBadgeInfo outputBadgeInfo;               //@synthesize outputBadgeInfo=_outputBadgeInfo - In the implementation block
@property (nonatomic,readonly) BOOL outputShouldAnimate;                       //@synthesize outputShouldAnimate=_outputShouldAnimate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)playing;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(PXAssetBadgeInfo)badgeInfo;
-(void)setAssetViewModel:(PUAssetViewModel *)arg1 ;
-(void)setBadgeInfo:(PXAssetBadgeInfo)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(id)init;
-(PUAssetViewModel *)assetViewModel;
-(void)_updateIfNeeded;
-(void)_updatePlaying;
-(void)setLastPlayingTime:(double)arg1 ;
-(void)invalidateOutput;
-(void)_invalidateOutput;
-(void)_updateOutputIfNeeded;
-(PXAssetBadgeInfo)_filteredBadgeInfoForTime:(double)arg1 outShouldAnimate:(BOOL*)arg2 ;
-(void)_setOutputBadgeInfo:(PXAssetBadgeInfo)arg1 shouldAnimate:(BOOL)arg2 ;
-(double)lastPlayingTime;
-(id)mutableChangeObject;
-(void)didPerformChanges;
-(BOOL)_needsUpdate;
-(BOOL)outputShouldAnimate;
-(PXAssetBadgeInfo)outputBadgeInfo;
-(void)prepareForReuse;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)_setNeedsUpdate;
@end
