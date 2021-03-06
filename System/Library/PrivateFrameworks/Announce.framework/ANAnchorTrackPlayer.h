/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:49:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Announce/ANTrackPlayer.h>

@interface ANAnchorTrackPlayer : ANTrackPlayer {

	double _anchorPoint;

}

@property (assign,nonatomic) double anchorPoint;              //@synthesize anchorPoint=_anchorPoint - In the implementation block
-(void)setAnchorPoint:(double)arg1 ;
-(double)anchorPoint;
-(BOOL)playInternalSync;
-(id)whatIsPlaying;
-(void)stopInternalSync;
-(void)nextInternalSync;
-(void)previousInternalSync;
-(void)handleInterruptionDelay:(double)arg1 ;
-(int)numberActivePlayers;
-(id)initWithAnchorPoint:(double)arg1 options:(unsigned long long)arg2 audioSession:(id)arg3 ;
-(double)_trackTrimTime:(long long)arg1 ;
-(double)_currentEndTime;
-(double)_anchorDeltaForNextSync:(double)arg1 ;
-(double)_anchorDeltaForPreviousSync:(double)arg1 ;
-(id)initWithAnchorPoint:(double)arg1 andOptions:(unsigned long long)arg2 ;
-(BOOL)addingNewPlayer:(id)arg1 ;
@end

