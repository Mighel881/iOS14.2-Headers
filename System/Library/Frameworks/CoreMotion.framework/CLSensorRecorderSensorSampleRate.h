/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLSensorRecorderSensorSampleRate : NSObject <NSSecureCoding> {

	unsigned _rate;
	int _dataType;

}

@property (assign) unsigned rate;              //@synthesize rate=_rate - In the implementation block
@property (assign) int dataType;               //@synthesize dataType=_dataType - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)dataType;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRate:(unsigned)arg1 ;
-(void)setDataType:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)rate;
@end

