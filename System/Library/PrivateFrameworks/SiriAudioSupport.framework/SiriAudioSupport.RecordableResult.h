/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriAudioSupport.framework/SiriAudioSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SiriAudioSupport.RecordableResult : NSObject <NSSecureCoding> {

	 name;
	 version;
	 timeElapsed;
	 rows;
	 info;
	 signalTiming;
	 test;

}
+(void)setSupportsSecureCoding:(BOOL)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

