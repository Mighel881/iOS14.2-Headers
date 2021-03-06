/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSData, NSDate;

@interface HMFaceCrop : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	NSData* _dataRepresentation;
	NSDate* _dateCreated;
	CGRect _faceBoundingBox;

}

@property (copy,readonly) NSUUID * UUID;                            //@synthesize UUID=_UUID - In the implementation block
@property (copy,readonly) NSData * dataRepresentation;              //@synthesize dataRepresentation=_dataRepresentation - In the implementation block
@property (copy,readonly) NSDate * dateCreated;                     //@synthesize dateCreated=_dateCreated - In the implementation block
@property (readonly) CGRect faceBoundingBox;                        //@synthesize faceBoundingBox=_faceBoundingBox - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)dataRepresentation;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDate *)dateCreated;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)faceBoundingBox;
-(id)initWithUUID:(id)arg1 dataRepresentation:(id)arg2 dateCreated:(id)arg3 faceBoundingBox:(CGRect)arg4 ;
-(NSUUID *)UUID;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

