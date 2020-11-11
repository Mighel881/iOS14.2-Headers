/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableSet, NSSet;

@interface VCMediaNegotiatorAudioConfiguration : NSObject <NSCopying> {

	unsigned _ssrc;
	BOOL _allowAudioSwitching;
	BOOL _allowAudioRecording;
	BOOL _useSBR;
	unsigned _audioUnitNumber;
	NSMutableSet* _audioPayloads;
	NSMutableSet* _secondaryPayloads;

}

@property (assign,nonatomic) unsigned ssrc;                         //@synthesize ssrc=_ssrc - In the implementation block
@property (assign,nonatomic) BOOL allowAudioSwitching;              //@synthesize allowAudioSwitching=_allowAudioSwitching - In the implementation block
@property (assign,nonatomic) BOOL allowAudioRecording;              //@synthesize allowAudioRecording=_allowAudioRecording - In the implementation block
@property (assign,nonatomic) BOOL useSBR;                           //@synthesize useSBR=_useSBR - In the implementation block
@property (assign,nonatomic) unsigned audioUnitNumber;              //@synthesize audioUnitNumber=_audioUnitNumber - In the implementation block
@property (nonatomic,readonly) NSSet * audioPayloads;               //@synthesize audioPayloads=_audioPayloads - In the implementation block
-(unsigned)ssrc;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)useSBR;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSsrc:(unsigned)arg1 ;
-(void)dealloc;
-(BOOL)allowAudioRecording;
-(void)setAllowAudioRecording:(BOOL)arg1 ;
-(void)setUseSBR:(BOOL)arg1 ;
-(BOOL)allowAudioSwitching;
-(void)setAllowAudioSwitching:(BOOL)arg1 ;
-(NSSet *)audioPayloads;
-(id)initWithAllowAudioSwitching:(BOOL)arg1 allowAudioRecording:(BOOL)arg2 useSBR:(BOOL)arg3 ssrc:(unsigned)arg4 audioUnitNumber:(unsigned)arg5 audioRuleCollection:(id)arg6 ;
-(unsigned)audioUnitNumber;
-(id)initWithAllowAudioSwitching:(BOOL)arg1 allowAudioRecording:(BOOL)arg2 useSBR:(BOOL)arg3 ssrc:(unsigned)arg4 audioUnitNumber:(unsigned)arg5 ;
-(void)addAudioPayload:(int)arg1 isSecondary:(BOOL)arg2 ;
-(BOOL)isSecondaryPayload:(int)arg1 ;
-(void)setAudioUnitNumber:(unsigned)arg1 ;
@end
