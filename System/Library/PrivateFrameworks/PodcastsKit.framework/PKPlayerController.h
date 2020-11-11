/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class PKEpisode, PKDurationSnapshot;


@protocol PKPlayerController
@property (readonly,nonatomic) PKEpisode * currentEpisode; 
@property (readonly,nonatomic) PKDurationSnapshot * durationSnapshot; 
@property (readonly,nonatomic) double forwardJumpDuration; 
@property (readonly,nonatomic) double backwardJumpDuration; 
@property (copy,nonatomic) id playerResponseHandler; 
@optional
-(void)setManifest:(id)arg1 startPlayback:(BOOL)arg2 completion:(/*^block*/id)arg3;

@required
-(PKEpisode *)currentEpisode;
-(PKDurationSnapshot *)durationSnapshot;
-(void)pauseWithCompletion:(/*^block*/id)arg1;
-(void)playWithCompletion:(/*^block*/id)arg1;
-(void)startPlayback:(id)arg1 completion:(/*^block*/id)arg2;
-(void)seekToPositionWithElapsedTime:(double)arg1 completion:(/*^block*/id)arg2;
-(void)jumpForwardsWithCompletion:(/*^block*/id)arg1;
-(void)jumpBackwardsWithCompletion:(/*^block*/id)arg1;
-(double)forwardJumpDuration;
-(double)backwardJumpDuration;
-(id)playerResponseHandler;
-(void)setPlayerResponseHandler:(/*^block*/id)arg1;

@end
