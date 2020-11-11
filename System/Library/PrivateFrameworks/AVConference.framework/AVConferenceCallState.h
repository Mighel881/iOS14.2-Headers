/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class VCCapabilities;

@interface AVConferenceCallState : NSObject {

	BOOL _audioIsPaused;
	VCCapabilities* _capabilities;
	BOOL _isVideoPaused;
	BOOL _isAudioSending;

}

@property (assign,getter=isAudioPaused,nonatomic) BOOL audioIsPaused;                //@synthesize audioIsPaused=_audioIsPaused - In the implementation block
@property (assign,getter=isVideoPaused,nonatomic) BOOL isVideoPaused;                //@synthesize isVideoPaused=_isVideoPaused - In the implementation block
@property (assign,getter=isAudioSending,nonatomic) BOOL isAudioSending;              //@synthesize isAudioSending=_isAudioSending - In the implementation block
@property (nonatomic,retain) VCCapabilities * capabilities;                          //@synthesize capabilities=_capabilities - In the implementation block
-(VCCapabilities *)capabilities;
-(void)setCapabilities:(VCCapabilities *)arg1 ;
-(BOOL)isVideoPaused;
-(void)dealloc;
-(BOOL)isAudioPaused;
-(void)setAudioIsPaused:(BOOL)arg1 ;
-(void)setIsVideoPaused:(BOOL)arg1 ;
-(BOOL)isAudioSending;
-(void)setIsAudioSending:(BOOL)arg1 ;
@end
