/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface CTPriVersion : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _majorVersion;
	NSNumber* _minorVersion;
	NSNumber* _releaseVersion;

}

@property (nonatomic,retain) NSNumber * majorVersion;                //@synthesize majorVersion=_majorVersion - In the implementation block
@property (nonatomic,retain) NSNumber * minorVersion;                //@synthesize minorVersion=_minorVersion - In the implementation block
@property (nonatomic,retain) NSNumber * releaseVersion;              //@synthesize releaseVersion=_releaseVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)releaseVersion;
-(void)setMajorVersion:(NSNumber *)arg1 ;
-(void)setMinorVersion:(NSNumber *)arg1 ;
-(void)setReleaseVersion:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSNumber *)majorVersion;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)minorVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
