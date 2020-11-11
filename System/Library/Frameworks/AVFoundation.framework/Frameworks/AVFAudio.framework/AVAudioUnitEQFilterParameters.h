/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFAudio/AVFAudio-Structs.h>
@interface AVAudioUnitEQFilterParameters : NSObject {

	void* _impl;

}

@property (assign,nonatomic) long long filterType; 
@property (assign,nonatomic) float frequency; 
@property (assign,nonatomic) float bandwidth; 
@property (assign,nonatomic) float gain; 
@property (assign,nonatomic) BOOL bypass; 
-(float)frequency;
-(void)setFilterType:(long long)arg1 ;
-(BOOL)bypass;
-(long long)filterType;
-(id)init;
-(void)setFrequency:(float)arg1 ;
-(float)bandwidth;
-(id)initWithImpl:(AVAudioUnitEQFilterParametersImpl*)arg1 ;
-(void)setBandwidth:(float)arg1 ;
-(void)setBypass:(BOOL)arg1 ;
-(void)setGain:(float)arg1 ;
-(float)gain;
-(void)dealloc;
@end
