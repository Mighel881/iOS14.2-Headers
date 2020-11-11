/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PUDisplayAsset;
#import <PhotosUI/PhotosUI-Structs.h>
@class NSMapTable, NSDate;

@interface PUAggregateDictionaryTracer : NSObject {

	BOOL __streamedVideoDidStartPlaying;
	NSMapTable* __browsingViewModelTracers;
	id<PUDisplayAsset> __lastViewedAsset;
	NSDate* __lastPlayStartDate;
	id<PUDisplayAsset> __lastPlayedAsset;
	long long __assetPlayCount;
	id<PUDisplayAsset> __streamedVideo;
	double __streamedVideoBeginTime;
	long long __streamedVideoStallCount;
	long long __oneUpPresentationOrigin;
	id<PUDisplayAsset> __lastViewedAssetPerOrigin;

}

@property (nonatomic,readonly) NSMapTable * _browsingViewModelTracers;                                                 //@synthesize _browsingViewModelTracers=__browsingViewModelTracers - In the implementation block
@property (assign,setter=_setLastViewedAsset:,nonatomic,__weak) id<PUDisplayAsset> _lastViewedAsset;                   //@synthesize _lastViewedAsset=__lastViewedAsset - In the implementation block
@property (setter=_setLastPlayStartDate:,nonatomic,retain) NSDate * _lastPlayStartDate;                                //@synthesize _lastPlayStartDate=__lastPlayStartDate - In the implementation block
@property (assign,setter=_setLastPlayedAsset:,nonatomic,__weak) id<PUDisplayAsset> _lastPlayedAsset;                   //@synthesize _lastPlayedAsset=__lastPlayedAsset - In the implementation block
@property (assign,setter=_setAssetPlayCount:,nonatomic) long long _assetPlayCount;                                     //@synthesize _assetPlayCount=__assetPlayCount - In the implementation block
@property (assign,setter=_setStreamedVideo:,nonatomic,__weak) id<PUDisplayAsset> _streamedVideo;                       //@synthesize _streamedVideo=__streamedVideo - In the implementation block
@property (assign,setter=_setStreamedVideoDidStartPlaying:,nonatomic) BOOL _streamedVideoDidStartPlaying;              //@synthesize _streamedVideoDidStartPlaying=__streamedVideoDidStartPlaying - In the implementation block
@property (assign,setter=_setStreamedVideoBeginTime:,nonatomic) double _streamedVideoBeginTime;                        //@synthesize _streamedVideoBeginTime=__streamedVideoBeginTime - In the implementation block
@property (assign,setter=_setStreamedVideoStallCount:,nonatomic) long long _streamedVideoStallCount;                   //@synthesize _streamedVideoStallCount=__streamedVideoStallCount - In the implementation block
@property (assign,nonatomic) long long _oneUpPresentationOrigin;                                                       //@synthesize _oneUpPresentationOrigin=__oneUpPresentationOrigin - In the implementation block
@property (nonatomic,retain) id<PUDisplayAsset> _lastViewedAssetPerOrigin;                                             //@synthesize _lastViewedAssetPerOrigin=__lastViewedAssetPerOrigin - In the implementation block
+(id)sharedTracer;
-(long long)_assetPlayCount;
-(void)vitalityPlayedForAssetInOneUp:(id)arg1 ;
-(id)init;
-(void)_setLastViewedAsset:(id)arg1 ;
-(id<PUDisplayAsset>)_lastViewedAsset;
-(void)streamedVideoPlaybackStalled:(id)arg1 ;
-(void)userWillPlayAssetInOneUp:(id)arg1 ;
-(void)streamedVideoPlaybackBegan:(id)arg1 ;
-(void)streamedVideoPlaybackEnded;
-(id<PUDisplayAsset>)_streamedVideo;
-(void)invalidateContext:(id)arg1 ;
-(void)_setLastPlayedAsset:(id)arg1 ;
-(void)userStartedViewingCurrentAssetOfBrowsingViewModel:(id)arg1 inContext:(id)arg2 ;
-(void)_setStreamedVideoDidStartPlaying:(BOOL)arg1 ;
-(void)_setStreamedVideoStallCount:(long long)arg1 ;
-(void)set_lastViewedAssetPerOrigin:(id<PUDisplayAsset>)arg1 ;
-(void)userDidEnterOneUpFromOrigin:(long long)arg1 ;
-(void)streamedVideoPlaybackStartedActuallyPlaying:(id)arg1 ;
-(void)_setAssetPlayCount:(long long)arg1 ;
-(void)userDidPlayAssetInOneUp:(id)arg1 ;
-(id<PUDisplayAsset>)_lastPlayedAsset;
-(void)_setStreamedVideoBeginTime:(double)arg1 ;
-(void)userViewedPhotoInOneUpFor:(double)arg1 ;
-(void)userViewedAssetInOneUp:(id)arg1 ;
-(void)userViewedHDRPhotoInOneUpFor:(double)arg1 ;
-(void)userStoppedViewingCurrentAssetOfBrowsingViewModel:(id)arg1 inContext:(id)arg2 ;
-(double)_streamedVideoBeginTime;
-(void)userStartedViewingCollection:(id)arg1 withListViewItemSelectionTrackerKey:(CFStringRef)arg2 ;
-(void)set_oneUpPresentationOrigin:(long long)arg1 ;
-(id<PUDisplayAsset>)_lastViewedAssetPerOrigin;
-(BOOL)_streamedVideoDidStartPlaying;
-(long long)_streamedVideoStallCount;
-(long long)_oneUpPresentationOrigin;
-(NSMapTable *)_browsingViewModelTracers;
-(void)userBrowsedOneUpFor:(double)arg1 ;
-(NSDate *)_lastPlayStartDate;
-(void)_setLastPlayStartDate:(id)arg1 ;
-(long long)_assetTypeForAsset:(id)arg1 ;
-(void)_setStreamedVideo:(id)arg1 ;
-(id)_browsingViewModelTracerForBrowsingViewModel:(id)arg1 createIfNeeded:(BOOL)arg2 ;
@end
