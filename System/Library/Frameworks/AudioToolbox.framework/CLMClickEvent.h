/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/AudioToolbox.framework/libAudioDSP.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLMClickEvent : NSObject <NSSecureCoding> {

	unsigned long long _absoluteTime;
	long long _eventType;

}

@property (assign) unsigned long long absoluteTime;              //@synthesize absoluteTime=_absoluteTime - In the implementation block
@property (assign) long long eventType;                          //@synthesize eventType=_eventType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setEventType:(long long)arg1 ;
-(long long)eventType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)absoluteTime;
-(void)setAbsoluteTime:(unsigned long long)arg1 ;
@end
