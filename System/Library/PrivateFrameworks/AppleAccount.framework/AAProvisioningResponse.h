/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleAccount/AAAuthenticationResponse.h>

@class NSDictionary, NSArray, NSString, NSNumber;

@interface AAProvisioningResponse : AAAuthenticationResponse {

	NSDictionary* _icloud;

}

@property (nonatomic,readonly) NSArray * provisionedDataclasses; 
@property (nonatomic,readonly) NSDictionary * dataclassProperties; 
@property (nonatomic,readonly) NSString * appleID; 
@property (nonatomic,readonly) NSArray * appleIDAliases; 
@property (nonatomic,readonly) NSString * firstName; 
@property (nonatomic,readonly) NSString * lastName; 
@property (nonatomic,readonly) NSString * primaryEmail; 
@property (nonatomic,readonly) NSNumber * primaryEmailVerified; 
@property (nonatomic,readonly) NSString * iCloudAuthToken; 
@property (nonatomic,readonly) NSString * fmipAuthToken; 
@property (nonatomic,readonly) NSString * fmipSiriToken; 
@property (nonatomic,readonly) NSString * searchPartyToken; 
@property (nonatomic,readonly) NSString * keyTransparencyToken; 
@property (nonatomic,readonly) NSString * fmipAppToken; 
@property (nonatomic,readonly) NSDictionary * regionInfo; 
@property (getter=isManagedAppleID,nonatomic,readonly) BOOL managedAppleID; 
@property (getter=isNotesMigrated,nonatomic,readonly) BOOL notesMigrated; 
@property (getter=isRemindersMigrated,nonatomic,readonly) BOOL remindersMigrated; 
@property (getter=isSandboxAccount,nonatomic,readonly) BOOL sandboxAccount; 
@property (getter=isCloudDocsMigrated,nonatomic,readonly) BOOL cloudDocsMigrated; 
@property (getter=hasOptionalTerms,nonatomic,readonly) BOOL optionalTerms; 
@property (getter=isFamilyEligible,nonatomic,readonly) BOOL familyEligible; 
-(NSString *)firstName;
-(BOOL)isManagedAppleID;
-(NSDictionary *)regionInfo;
-(NSArray *)appleIDAliases;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)lastName;
-(NSString *)fmipAuthToken;
-(NSString *)fmipAppToken;
-(NSString *)fmipSiriToken;
-(NSString *)searchPartyToken;
-(NSString *)primaryEmail;
-(NSString *)keyTransparencyToken;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSArray *)provisionedDataclasses;
-(NSDictionary *)dataclassProperties;
-(NSNumber *)primaryEmailVerified;
-(NSString *)iCloudAuthToken;
-(BOOL)isNotesMigrated;
-(BOOL)isRemindersMigrated;
-(BOOL)isCloudDocsMigrated;
-(BOOL)hasOptionalTerms;
-(BOOL)isFamilyEligible;
-(NSString *)appleID;
-(BOOL)isSandboxAccount;
@end
