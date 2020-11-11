/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/CKSubscription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKRecordZoneID, NSString;

@interface CKRecordZoneSubscription : CKSubscription <NSSecureCoding, NSCopying> {

	CKRecordZoneID* _zoneID;

}

@property (nonatomic,copy,readonly) CKRecordZoneID * zoneID;              //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,copy) NSString * recordType; 
+(BOOL)supportsSecureCoding;
-(CKRecordZoneID *)zoneID;
-(id)CKPropertiesDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRecordType:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithZoneID:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithZoneID:(id)arg1 subscriptionID:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
