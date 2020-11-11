/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFAudio/AVFAudio-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface AVSpeechSynthesisProviderVoice : NSObject <NSSecureCoding, NSCopying> {

	float _version;
	NSString* _name;
	NSString* _identifier;
	NSArray* _supportedLanguages;
	long long _voiceSize;
	long long _gender;
	long long _age;

}

@property (nonatomic,retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSArray * supportedLanguages;              //@synthesize supportedLanguages=_supportedLanguages - In the implementation block
@property (assign,nonatomic) long long voiceSize;                       //@synthesize voiceSize=_voiceSize - In the implementation block
@property (assign,nonatomic) float version;                             //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) long long gender;                          //@synthesize gender=_gender - In the implementation block
@property (assign,nonatomic) long long age;                             //@synthesize age=_age - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(void)didUpdateSpeechVoices;
-(void)setVersion:(float)arg1 ;
-(void)setGender:(long long)arg1 ;
-(float)version;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(long long)age;
-(NSString *)name;
-(void)setAge:(long long)arg1 ;
-(void)setVoiceSize:(long long)arg1 ;
-(id)initWithName:(id)arg1 identifier:(id)arg2 supportedLanguages:(id)arg3 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)supportedLanguages;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)voiceSize;
-(long long)gender;
-(void)setSupportedLanguages:(NSArray *)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end
