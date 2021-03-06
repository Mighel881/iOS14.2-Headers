/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/ISChangeObserver.h>
#import <libobjc.A.dylib/PXVideoScrubberControllerTarget.h>

@class ISWrappedAVPlayer, NSString;

@interface PXSimpleWrappedVideoScrubberControllerTarget : NSObject <ISChangeObserver, PXVideoScrubberControllerTarget> {

	/*^block*/id statusChangeHandler;
	/*^block*/id playerItemChangeHandler;
	/*^block*/id durationChangeHandler;
	ISWrappedAVPlayer* _videoPlayer;

}

@property (nonatomic,readonly) ISWrappedAVPlayer * videoPlayer;              //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id durationChangeHandler; 
@property (nonatomic,copy) id statusChangeHandler; 
@property (nonatomic,copy) id playerItemChangeHandler; 
-(id)init;
-(void)cancelPendingSeeks;
-(id)addPeriodicTimeObserverForInterval:(SCD_Struct_PX8)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)removeTimeObserver:(id)arg1 ;
-(float)playRate;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(long long)playerStatus;
-(ISWrappedAVPlayer *)videoPlayer;
-(id)durationChangeHandler;
-(id)statusChangeHandler;
-(id)playerItemChangeHandler;
-(SCD_Struct_PX8)playerCurrentTime;
-(SCD_Struct_PX8)currentItemDuration;
-(void)videoScrubberController:(id)arg1 seekToTime:(SCD_Struct_PX8)arg2 toleranceBefore:(SCD_Struct_PX8)arg3 toleranceAfter:(SCD_Struct_PX8)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setDurationChangeHandler:(id)arg1 ;
-(void)setStatusChangeHandler:(id)arg1 ;
-(void)setPlayerItemChangeHandler:(id)arg1 ;
-(id)playerItem;
-(id)initWithVideoPlayer:(id)arg1 ;
@end

