/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AFSpeechRecordingAlertBehavior : NSObject <NSCopying, NSSecureCoding> {

	long long _style;
	long long _beepSoundID;

}

@property (nonatomic,readonly) long long style;                    //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) long long beepSoundID;              //@synthesize beepSoundID=_beepSoundID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(long long)beepSoundID;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)initWithStyle:(long long)arg1 beepSoundID:(long long)arg2 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(long long)style;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

