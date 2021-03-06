/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL;

@interface TLSystemSound : NSObject {

	unsigned _soundID;
	BOOL _shouldDisposeOfSoundID;
	BOOL _requiresLongFormPlayback;
	NSURL* _soundFileURL;

}

@property (nonatomic,readonly) NSURL * soundFileURL;                       //@synthesize soundFileURL=_soundFileURL - In the implementation block
@property (nonatomic,readonly) unsigned soundID; 
@property (nonatomic,readonly) BOOL requiresLongFormPlayback;              //@synthesize requiresLongFormPlayback=_requiresLongFormPlayback - In the implementation block
-(unsigned)soundID;
-(id)description;
-(BOOL)requiresLongFormPlayback;
-(NSURL *)soundFileURL;
-(void)dealloc;
-(id)initWithSoundFileURL:(id)arg1 soundID:(unsigned)arg2 requiresLongFormPlayback:(BOOL)arg3 ;
@end

