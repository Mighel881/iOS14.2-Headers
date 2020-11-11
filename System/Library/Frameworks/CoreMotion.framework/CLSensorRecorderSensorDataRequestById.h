/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLSensorRecorderSensorDataRequestById : NSObject <NSSecureCoding> {

	int _dataType;
	unsigned long long _identifier;
	unsigned long long _metaIdentifier;

}

@property (assign) unsigned long long identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (assign) unsigned long long metaIdentifier;              //@synthesize metaIdentifier=_metaIdentifier - In the implementation block
@property (assign) int dataType;                                   //@synthesize dataType=_dataType - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)dataType;
-(unsigned long long)metaIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)identifier;
-(void)setDataType:(int)arg1 ;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMetaIdentifier:(unsigned long long)arg1 ;
@end
