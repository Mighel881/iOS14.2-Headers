/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate, NSArray;

@interface RTFingerprint : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _identifier;
	unsigned long long _settledState;
	NSDate* _start;
	NSArray* _accessPoints;

}

@property (nonatomic,readonly) NSUUID * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long settledState;              //@synthesize settledState=_settledState - In the implementation block
@property (nonatomic,readonly) NSDate * start;                               //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) NSArray * accessPoints;                       //@synthesize accessPoints=_accessPoints - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)start;
-(id)init;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)accessPoints;
-(unsigned long long)settledState;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 settledState:(unsigned long long)arg2 start:(id)arg3 accessPoints:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

