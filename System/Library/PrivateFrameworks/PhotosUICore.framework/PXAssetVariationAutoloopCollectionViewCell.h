/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXAssetVariationCollectionViewCell.h>
#import <libobjc.A.dylib/ISChangeObserver.h>

@class ISWrappedAVPlayer, PXVideoPlayerView, AVAsset, ISWrappedAVAudioSession, NSString;

@interface PXAssetVariationAutoloopCollectionViewCell : PXAssetVariationCollectionViewCell <ISChangeObserver> {

	ISWrappedAVPlayer* _videoPlayer;
	PXVideoPlayerView* _videoView;
	AVAsset* _displayedAsset;
	ISWrappedAVAudioSession* __audioSession;

}

@property (setter=_setAudioSession:,nonatomic,retain) ISWrappedAVAudioSession * _audioSession;              //@synthesize _audioSession=__audioSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setAudioSession:(id)arg1 ;
-(ISWrappedAVAudioSession *)_audioSession;
-(void)updateError;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)loadVariationView;
-(void)updateVariationView;
-(void)_videoStatusDidChange;
-(void)_updateVideoPlayerRateWithItem:(id)arg1 ;
-(void)prepareForReuse;
@end

