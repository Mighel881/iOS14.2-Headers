/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/STKSound.h>

@class BSTimer, NSString;

@interface STKBaseSound : NSObject <STKSound> {

	BSTimer* _timer;
	double _duration;
	BOOL _playsOnce;
	BOOL _isPlaying;

}

@property (nonatomic,readonly) double duration;                     //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL playsOnce;                      //@synthesize playsOnce=_playsOnce - In the implementation block
@property (nonatomic,readonly) BOOL isPlaying;                      //@synthesize isPlaying=_isPlaying - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPlaying;
-(double)duration;
-(id)initWithDuration:(double)arg1 ;
-(void)dealloc;
-(void)playSound;
-(void)stopSound;
-(void)_sync_playSound;
-(void)_sync_stopSound;
-(void)_reallyPlaySound;
-(void)_reallyStopSound;
-(BOOL)playsOnce;
@end
