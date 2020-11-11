/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKRecordZoneID;

@interface CKUploadRequestConfiguration : NSObject <NSSecureCoding, NSCopying> {

	NSString* _containerIdentifier;
	NSString* _applicationBundleIdentifierOverride;
	CKRecordZoneID* _repairZoneID;

}

@property (nonatomic,copy) NSString * containerIdentifier;                              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifierOverride;              //@synthesize applicationBundleIdentifierOverride=_applicationBundleIdentifierOverride - In the implementation block
@property (nonatomic,copy) CKRecordZoneID * repairZoneID;                               //@synthesize repairZoneID=_repairZoneID - In the implementation block
+(id)configurationFromBaseContainer:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)resolvedConfigurationWithBaseContainer:(id)arg1 overrides:(id)arg2 ;
-(id)initFromBaseContainer:(id)arg1 ;
-(void)setRepairZoneID:(CKRecordZoneID *)arg1 ;
-(void)setApplicationBundleIdentifierOverride:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)containerIdentifier;
-(CKRecordZoneID *)repairZoneID;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)applicationBundleIdentifierOverride;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
