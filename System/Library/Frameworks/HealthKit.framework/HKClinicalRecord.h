/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKSample.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HKFHIRResource, HKClinicalType;

@interface HKClinicalRecord : HKSample <NSSecureCoding, NSCopying> {

	NSString* _displayName;
	HKFHIRResource* _FHIRResource;

}

@property (copy,readonly) HKClinicalType * clinicalType; 
@property (copy,readonly) NSString * displayName; 
@property (copy,readonly) HKFHIRResource * FHIRResource; 
+(BOOL)supportsSecureCoding;
+(BOOL)supportsEquivalence;
+(BOOL)_isConcreteObjectClass;
+(id)_newClinicalRecordWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5 displayName:(id)arg6 FHIRResource:(id)arg7 config:(/*^block*/id)arg8 ;
+(id)clinicalRecordWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5 displayName:(id)arg6 FHIRResource:(id)arg7 ;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(id)description;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(HKFHIRResource *)FHIRResource;
-(id)initWithCoder:(id)arg1 ;
-(HKClinicalType *)clinicalType;
-(void)_setFHIRResource:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_setDisplayName:(id)arg1 ;
@end

