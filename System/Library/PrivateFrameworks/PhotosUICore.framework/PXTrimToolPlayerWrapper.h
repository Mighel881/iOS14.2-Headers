/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIView;


@protocol PXTrimToolPlayerWrapper <NSObject>
@property (assign,nonatomic,__weak) id<PXTrimToolPlayerObserver> playerObserver; 
@property (nonatomic,readonly) SCD_Struct_PX9 trimRange; 
@property (nonatomic,readonly) UIView * loupePlayerView; 
@property (getter=isReadyToPlay,nonatomic,readonly) BOOL readyToPlay; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@required
-(void)play;
-(BOOL)isPlaying;
-(void)pause;
-(BOOL)isReadyToPlay;
-(void)requestPlayerItemWithCompletion:(/*^block*/id)arg1;
-(UIView *)loupePlayerView;
-(void)applyTrimTimeRange:(SCD_Struct_PX9)arg1;
-(void)stopPeriodicTimeObserver;
-(void)startPeriodicTimeObserver;
-(void)setPlayerObserver:(id)arg1;
-(void)seekToTime:(SCD_Struct_PX8)arg1 untrimmed:(BOOL)arg2 exact:(BOOL)arg3;
-(void)invalidateComposition;
-(SCD_Struct_PX9)trimRange;
-(void)seekToTime:(SCD_Struct_PX8)arg1;
-(id<PXTrimToolPlayerObserver>)playerObserver;

@end

