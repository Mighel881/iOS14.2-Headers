/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
@class AVAudioSession;

@interface APAVAudioSessionManager : NSObject {

	OpaqueFigSimpleMutexRef _mutex;
	AVAudioSession* _session;
	unsigned long long _type;
	BOOL _isSetUp;

}

@property (nonatomic,readonly) AVAudioSession * session;              //@synthesize session=_session - In the implementation block
+(id)mediaSessionManager;
+(id)ambientSessionManager;
-(BOOL)setActive:(BOOL)arg1 error:(id*)arg2 ;
-(id)initWithType:(unsigned long long)arg1 ;
-(void)resetSession;
-(AVAudioSession *)session;
-(void)dealloc;
-(void)setUpSession;
-(BOOL)setAudioMode:(CFStringRef)arg1 isLongForm:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)setDuckOthers:(unsigned char)arg1 error:(id*)arg2 ;
@end

