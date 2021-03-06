/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _IDSAccount, NSString, NSSet, NSArray, NSDictionary, NSData, NSDate;

@interface IDSAccount : NSObject {

	_IDSAccount* _internal;
	NSString* _loginID;

}

@property (nonatomic,readonly) NSSet * activeAliases; 
@property (nonatomic,readonly) NSString * userUniqueIdentifier; 
@property (nonatomic,retain,readonly) _IDSAccount * _internal; 
@property (nonatomic,readonly) BOOL isEnabled; 
@property (assign,setter=_setIsEnabled:,nonatomic) BOOL _isEnabled; 
@property (nonatomic,readonly) BOOL isUsableForOuterMessaging; 
@property (nonatomic,readonly) NSArray * aliasesToRegister; 
@property (nonatomic,readonly) NSArray * aliases; 
@property (nonatomic,readonly) NSArray * aliasStrings; 
@property (nonatomic,readonly) NSArray * vettedAliases; 
@property (nonatomic,readonly) NSArray * handles; 
@property (nonatomic,readonly) NSDictionary * profileInfo; 
@property (nonatomic,retain) NSDictionary * accountInfo; 
@property (nonatomic,readonly) int accountType; 
@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) int registrationStatus; 
@property (nonatomic,readonly) int registrationError; 
@property (nonatomic,readonly) NSDictionary * registrationAlertInfo; 
@property (nonatomic,readonly) long long profileValidationStatus; 
@property (nonatomic,readonly) int profileValidationErrorReason; 
@property (nonatomic,readonly) NSArray * registeredURIs; 
@property (nonatomic,readonly) NSArray * accountRegisteredURIs; 
@property (nonatomic,readonly) NSData * registrationCertificate; 
@property (nonatomic,readonly) NSDate * dateRegistered; 
@property (nonatomic,readonly) NSDate * nextRegistrationDate; 
@property (nonatomic,readonly) NSData * pushToken; 
@property (nonatomic,readonly) NSDictionary * regionServerContext; 
@property (nonatomic,readonly) NSString * profileID; 
@property (nonatomic,readonly) NSString * primaryServiceName; 
@property (nonatomic,readonly) BOOL isUserDisabled; 
@property (nonatomic,retain) NSString * regionID; 
@property (nonatomic,retain) NSString * regionBasePhoneNumber; 
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,retain) NSString * loginID;                                  //@synthesize loginID=_loginID - In the implementation block
@property (nonatomic,readonly) NSString * serviceName; 
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) BOOL canSend; 
@property (nonatomic,readonly) NSArray * devices; 
@property (nonatomic,readonly) NSArray * nearbyDevices; 
-(NSDictionary *)profileInfo;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSArray *)handles;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(NSString *)loginID;
-(NSArray *)aliases;
-(void)authenticateAccount;
-(void)removeDelegate:(id)arg1 ;
-(int)profileValidationErrorReason;
-(int)registrationStatus;
-(NSDictionary *)registrationAlertInfo;
-(NSArray *)vettedAliases;
-(void)unvalidateAliases:(id)arg1 ;
-(int)registrationError;
-(void)setPassword:(id)arg1 ;
-(void)validateProfile;
-(NSSet *)activeAliases;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 ;
-(void)unregisterAccount;
-(BOOL)canSend;
-(void)setLoginID:(NSString *)arg1 ;
-(int)accountType;
-(long long)profileValidationStatus;
-(NSArray *)nearbyDevices;
-(void)validateAliases:(id)arg1 ;
-(NSString *)displayName;
-(id)description;
-(NSString *)profileID;
-(BOOL)isActive;
-(id)matchingSim;
-(void)addRegistrationDelegate:(id)arg1 queue:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 ;
-(NSString *)regionID;
-(NSString *)userUniqueIdentifier;
-(BOOL)_isEnabled;
-(void)setAccountInfo:(NSDictionary *)arg1 ;
-(NSArray *)registeredURIs;
-(NSString *)primaryServiceName;
-(NSData *)registrationCertificate;
-(void)_setIsEnabled:(BOOL)arg1 ;
-(id)_initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 ;
-(NSArray *)aliasStrings;
-(void)setRegionID:(NSString *)arg1 ;
-(BOOL)isUserDisabled;
-(NSDate *)nextRegistrationDate;
-(NSArray *)accountRegisteredURIs;
-(NSDictionary *)regionServerContext;
-(BOOL)isUsableForOuterMessaging;
-(NSDate *)dateRegistered;
-(void)updateAccountWithAccountInfo:(id)arg1 ;
-(void)removeRegistrationDelegate:(id)arg1 ;
-(NSString *)regionBasePhoneNumber;
-(void)setRegionBasePhoneNumber:(NSString *)arg1 ;
-(void)passwordUpdated;
-(void)forceRemoveAccount;
-(void)_reregisterAndReidentify:(BOOL)arg1 ;
-(void)deactivateAndPurgeIdentify;
-(void)_callNearbyDevicesChanged;
-(void)_reloadCachedDevices;
-(void)activateAlias:(id)arg1 ;
-(void)deactivateAlias:(id)arg1 ;
-(id)initWithLoginID:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 ;
-(NSData *)pushToken;
-(void)addAliases:(id)arg1 ;
-(void)removeAliases:(id)arg1 ;
-(BOOL)isEnabled;
-(NSArray *)aliasesToRegister;
-(NSDictionary *)accountInfo;
-(NSString *)serviceName;
-(NSArray *)devices;
-(NSString *)uniqueID;
-(void)setAuthToken:(id)arg1 ;
-(void)registerAccount;
-(void)dealloc;
-(_IDSAccount *)_internal;
@end

