/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSURL, NSData, NSDictionary, AVAudioFormat, NSArray;

@interface AVAudioPlayer : NSObject {

	id _impl;
	NSString* _currentDevice;

}

@property (getter=isPlaying,readonly) BOOL playing; 
@property (readonly) unsigned long long numberOfChannels; 
@property (readonly) double duration; 
@property (copy) NSString * currentDevice;                              //@synthesize currentDevice=_currentDevice - In the implementation block
@property (__weak) id<AVAudioPlayerDelegate> delegate; 
@property (readonly) NSURL * url; 
@property (readonly) NSData * data; 
@property (assign) float pan; 
@property (assign) float volume; 
@property (assign) BOOL enableRate; 
@property (assign) float rate; 
@property (assign) double currentTime; 
@property (readonly) double deviceCurrentTime; 
@property (assign) long long numberOfLoops; 
@property (readonly) NSDictionary * settings; 
@property (readonly) AVAudioFormat * format; 
@property (getter=isMeteringEnabled) BOOL meteringEnabled; 
@property (nonatomic,copy) NSArray * channelAssignments; 
-(float)pan;
-(double)currentTime;
-(void)setVolume:(float)arg1 ;
-(id)initBase;
-(AVAudioFormat *)format;
-(id)init;
-(float)volume;
-(id<AVAudioPlayerDelegate>)delegate;
-(BOOL)play;
-(NSURL *)url;
-(void)finalize;
-(void)setMeteringEnabled:(BOOL)arg1 ;
-(void)setCurrentTime:(double)arg1 ;
-(void)endInterruption;
-(void)beginInterruption;
-(void)endInterruptionWithFlags:(id)arg1 ;
-(BOOL)isPlaying;
-(BOOL)isMeteringEnabled;
-(void)handleInterruption:(id)arg1 ;
-(void)pause;
-(unsigned long long)numberOfChannels;
-(void)setRate:(float)arg1 ;
-(void)setDelegate:(id<AVAudioPlayerDelegate>)arg1 ;
-(id)audioSession;
-(void)setCurrentDevice:(NSString *)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 fileTypeHint:(id)arg2 error:(id*)arg3 ;
-(id)initWithData:(id)arg1 fileTypeHint:(id)arg2 error:(id*)arg3 ;
-(void)setVolume:(float)arg1 fadeDuration:(double)arg2 ;
-(void)setEnableRate:(BOOL)arg1 ;
-(BOOL)enableRate;
-(NSArray *)channelAssignments;
-(BOOL)mixToUplink;
-(BOOL)playAtTime:(double)arg1 ;
-(double)deviceCurrentTime;
-(void)setChannelAssignments:(NSArray *)arg1 ;
-(void)setMixToUplink:(BOOL)arg1 ;
-(void)privRemoveSessionListener;
-(void)finishedPlaying:(id)arg1 ;
-(void)decodeError:(id)arg1 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(NSData *)data;
-(NSDictionary *)settings;
-(float)averagePowerForChannel:(unsigned long long)arg1 ;
-(float)peakPowerForChannel:(unsigned long long)arg1 ;
-(void)stop;
-(NSString *)currentDevice;
-(void)setAudioSession:(id)arg1 ;
-(id)impl;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(double)duration;
-(void)updateMeters;
-(float)rate;
-(long long)numberOfLoops;
-(void)setNumberOfLoops:(long long)arg1 ;
-(void)setPan:(float)arg1 ;
-(BOOL)prepareToPlay;
-(void)dealloc;
@end
