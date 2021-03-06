/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CKInternalAudioPlayerDelegate.h>

@protocol CKAudioPlayerDelegate;
@class CKMediaObject, CKInternalAudioPlayer, CADisplayLink, NSString;

@interface CKAudioPlayer : NSObject <CKInternalAudioPlayerDelegate> {

	CKMediaObject* _mediaObject;
	id<CKAudioPlayerDelegate> _delegate;
	CKInternalAudioPlayer* _audioPlayer;
	CADisplayLink* _displayLink;
	double _prevCurrentTime;
	/*^block*/id _block;

}

@property (nonatomic,retain) CKMediaObject * mediaObject;                            //@synthesize mediaObject=_mediaObject - In the implementation block
@property (nonatomic,retain) CKInternalAudioPlayer * audioPlayer;                    //@synthesize audioPlayer=_audioPlayer - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                            //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) double prevCurrentTime;                                 //@synthesize prevCurrentTime=_prevCurrentTime - In the implementation block
@property (nonatomic,copy) id block;                                                 //@synthesize block=_block - In the implementation block
@property (assign,nonatomic,__weak) id<CKAudioPlayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL usesAVPlayer; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (nonatomic,readonly) double currentTime; 
@property (nonatomic,readonly) double duration; 
@property (assign,nonatomic) float volume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)displayLinkFired:(id)arg1 ;
-(double)currentTime;
-(void)setVolume:(float)arg1 ;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(float)volume;
-(id<CKAudioPlayerDelegate>)delegate;
-(id)initWithFileURL:(id)arg1 ;
-(BOOL)isPlaying;
-(void)pause;
-(void)setBlock:(id)arg1 ;
-(void)setDelegate:(id<CKAudioPlayerDelegate>)arg1 ;
-(CADisplayLink *)displayLink;
-(id)initWithMediaObject:(id)arg1 ;
-(BOOL)usesAVPlayer;
-(void)internalAudioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(void)internalAudioPlayerDidPrepareAudioForPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(double)prevCurrentTime;
-(void)setPrevCurrentTime:(double)arg1 ;
-(void)setMediaObject:(CKMediaObject *)arg1 ;
-(id)block;
-(void)stop;
-(double)duration;
-(CKInternalAudioPlayer *)audioPlayer;
-(void)playAfterDelay:(double)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithMediaObject:(id)arg1 shouldUseAVPlayer:(BOOL)arg2 ;
-(void)setAudioPlayer:(CKInternalAudioPlayer *)arg1 ;
-(void)prepareToPlay;
-(void)dealloc;
-(CKMediaObject *)mediaObject;
@end

