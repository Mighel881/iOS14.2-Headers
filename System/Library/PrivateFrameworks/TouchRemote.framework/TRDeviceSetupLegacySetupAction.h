/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TouchRemote/TRDeviceSetupLegacyAction.h>

@class TRDeviceSetupLegacySetupActionAuthInfo, NSString;

@interface TRDeviceSetupLegacySetupAction : TRDeviceSetupLegacyAction

@property (nonatomic,readonly) TRDeviceSetupLegacySetupActionAuthInfo * authInfo; 
@property (nonatomic,readonly) NSString * networkSSID; 
@property (nonatomic,readonly) NSString * networkPassword; 
@property (nonatomic,readonly) BOOL diagnosticsEnabled; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) NSString * countryCode; 
@property (nonatomic,readonly) NSString * homeSharingAppleID; 
@property (nonatomic,readonly) NSString * homeSharingGroupID; 
@property (nonatomic,readonly) BOOL rememberPassword; 
-(NSString *)language;
-(NSString *)countryCode;
-(TRDeviceSetupLegacySetupActionAuthInfo *)authInfo;
-(BOOL)diagnosticsEnabled;
-(NSString *)homeSharingGroupID;
-(NSString *)homeSharingAppleID;
-(NSString *)networkSSID;
-(NSString *)networkPassword;
-(BOOL)rememberPassword;
-(id)initWithAuthInfo:(id)arg1 networkSSID:(id)arg2 networkPassword:(id)arg3 diagnosticsEnabled:(BOOL)arg4 language:(id)arg5 countryCode:(id)arg6 homeSharingAppleID:(id)arg7 homeSharingGroupID:(id)arg8 rememberPassword:(BOOL)arg9 ;
@end
