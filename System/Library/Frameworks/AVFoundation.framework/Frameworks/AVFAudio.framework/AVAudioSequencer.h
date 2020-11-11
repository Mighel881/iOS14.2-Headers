/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFAudio/AVFAudio-Structs.h>
@class NSArray, AVMusicTrack, NSDictionary;

@interface AVAudioSequencer : NSObject {

	void* _impl;

}

@property (assign,nonatomic) double currentPositionInSeconds; 
@property (assign,nonatomic) double currentPositionInBeats; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (assign,nonatomic) float rate; 
@property (nonatomic,readonly) NSArray * tracks; 
@property (nonatomic,readonly) AVMusicTrack * tempoTrack; 
@property (nonatomic,readonly) NSDictionary * userInfo; 
-(NSDictionary *)userInfo;
-(NSArray *)tracks;
-(id)init;
-(BOOL)isPlaying;
-(id)initWithImpl:(AVAudioSequencerImpl*)arg1 ;
-(void)setRate:(float)arg1 ;
-(void)stop;
-(float)rate;
-(id)initWithAudioEngine:(id)arg1 ;
-(unsigned long long)numberOfTracks;
-(void)cleanTracks;
-(void)setupTracks;
-(void)setupTrackArray;
-(BOOL)loadFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)loadFromData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)writeToURL:(id)arg1 SMPTEResolution:(long long)arg2 replaceExisting:(BOOL)arg3 error:(id*)arg4 ;
-(id)dataWithSMPTEResolution:(long long)arg1 error:(id*)arg2 ;
-(id)getTempoTrack;
-(id)trackArray;
-(double)secondsForBeats:(double)arg1 ;
-(double)beatsForSeconds:(double)arg1 ;
-(void)setTrackArray:(id)arg1 ;
-(void)setTempoTrack:(AVMusicTrack *)arg1 ;
-(AVMusicTrack *)tempoTrack;
-(double)currentPositionInSeconds;
-(unsigned long long)hostTimeForBeats:(double)arg1 error:(id*)arg2 ;
-(double)beatsForHostTime:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)setCurrentPositionInSeconds:(double)arg1 ;
-(double)currentPositionInBeats;
-(void)setCurrentPositionInBeats:(double)arg1 ;
-(void)prepareToPlay;
-(void)dealloc;
-(BOOL)startAndReturnError:(id*)arg1 ;
@end
