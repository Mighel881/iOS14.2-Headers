/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFMessage.h>

@class NSString, NSUUID, HMFMessageDestination, HMFMessageTransport, HMFActivity, NSDictionary, HMFLogEventSession;

@interface HMFMutableMessage : HMFMessage

@property (assign,nonatomic) BOOL requiresSPIEntitlement; 
@property (assign,nonatomic) BOOL requiresNoSPIEntitlement; 
@property (assign,getter=isInternal,nonatomic) BOOL internal; 
@property (assign,getter=isRemote,nonatomic) BOOL remote; 
@property (assign,getter=isSecureRemote,nonatomic) BOOL secureRemote; 
@property (nonatomic,retain) NSString * remoteSourceID; 
@property (assign,nonatomic) unsigned long long remoteRestriction; 
@property (nonatomic,copy) NSUUID * identifier; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) double timeout; 
@property (assign,nonatomic) long long qualityOfService; 
@property (nonatomic,retain) HMFMessageDestination * destination; 
@property (assign,nonatomic,__weak) HMFMessageTransport * transport; 
@property (nonatomic,retain) HMFActivity * activity; 
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (nonatomic,copy) NSDictionary * headers; 
@property (nonatomic,copy) NSDictionary * messagePayload; 
@property (nonatomic,retain) HMFLogEventSession * logEventSession; 
@property (nonatomic,copy) id responseHandler; 
+(id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2 ;
+(id)internalMessageWithName:(id)arg1 destination:(id)arg2 messagePayload:(id)arg3 ;
+(id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)setInternal:(BOOL)arg1 ;
-(void)setRemote:(BOOL)arg1 ;
-(void)setSecureRemote:(BOOL)arg1 ;
-(void)setSendPolicy:(id)arg1 ;
-(void)setRequiresSPIEntitlement;
-(void)setRequiresSPIEntitlement:(BOOL)arg1 ;
-(void)setRequiresNoSPIEntitlement:(BOOL)arg1 ;
-(void)setRequiresNoSPIEntitlement;
-(void)setRequiresSetupPayloadEntitlement;
-(void)setRequiresCameraClipsEntitlement;
-(void)setRequiresMultiUserSetupEntitlement;
-(void)setRequiresPersonManagerEntitlement;
-(void)setRemoteRestriction:(unsigned long long)arg1 ;
-(void)setRemoteSourceID:(NSString *)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(void)setTransport:(HMFMessageTransport *)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setHeaderValue:(id)arg1 forKey:(id)arg2 ;
-(void)setActivity:(HMFActivity *)arg1 ;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(void)setUserInfoValue:(id)arg1 forKey:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end

