/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HKOAuth2Credential.h>

@class NSString;

@interface HDFHIRCredential : HKOAuth2Credential {

	NSString* _patientID;

}

@property (nonatomic,copy,readonly) NSString * patientID;              //@synthesize patientID=_patientID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)patientHashForPatientID:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 requestedScopeString:(id)arg2 expiration:(id)arg3 scope:(id)arg4 ;
-(BOOL)isEqualToCredential:(id)arg1 epsilonExpiration:(double)arg2 ;
-(id)initWithIdentifier:(id)arg1 requestedScopeString:(id)arg2 expiration:(id)arg3 scopeString:(id)arg4 ;
-(NSString *)patientID;
-(id)initWithIdentifier:(id)arg1 requestedScopeString:(id)arg2 expiration:(id)arg3 scopeString:(id)arg4 patientID:(id)arg5 ;
-(id)initWithIdentifier:(id)arg1 requestedScopeString:(id)arg2 expiration:(id)arg3 scope:(id)arg4 patientID:(id)arg5 ;
@end
