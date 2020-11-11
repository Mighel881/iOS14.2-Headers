/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelConfigurationBase.h>
#import <libobjc.A.dylib/RMModelRegisteredTypeProtocol.h>

@class NSString, RMModelAccountMailDeclaration_IncomingServer, RMModelAccountMailDeclaration_OutgoingServer;

@interface RMModelAccountMailDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {

	NSString* _payloadVisibleName;
	NSString* _payloadUserIdentityAssetReference;
	RMModelAccountMailDeclaration_IncomingServer* _payloadIncomingServer;
	RMModelAccountMailDeclaration_OutgoingServer* _payloadOutgoingServer;

}

@property (nonatomic,copy) NSString * payloadVisibleName;                                                     //@synthesize payloadVisibleName=_payloadVisibleName - In the implementation block
@property (nonatomic,copy) NSString * payloadUserIdentityAssetReference;                                      //@synthesize payloadUserIdentityAssetReference=_payloadUserIdentityAssetReference - In the implementation block
@property (nonatomic,copy) RMModelAccountMailDeclaration_IncomingServer * payloadIncomingServer;              //@synthesize payloadIncomingServer=_payloadIncomingServer - In the implementation block
@property (nonatomic,copy) RMModelAccountMailDeclaration_OutgoingServer * payloadOutgoingServer;              //@synthesize payloadOutgoingServer=_payloadOutgoingServer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 visibleName:(id)arg2 userIdentityAssetReference:(id)arg3 incomingServer:(id)arg4 outgoingServer:(id)arg5 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 incomingServer:(id)arg2 outgoingServer:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)assetReferences;
-(void)setPayloadVisibleName:(NSString *)arg1 ;
-(NSString *)payloadVisibleName;
-(BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(NSString *)payloadUserIdentityAssetReference;
-(void)setPayloadUserIdentityAssetReference:(NSString *)arg1 ;
-(RMModelAccountMailDeclaration_IncomingServer *)payloadIncomingServer;
-(RMModelAccountMailDeclaration_OutgoingServer *)payloadOutgoingServer;
-(void)setPayloadIncomingServer:(RMModelAccountMailDeclaration_IncomingServer *)arg1 ;
-(void)setPayloadOutgoingServer:(RMModelAccountMailDeclaration_OutgoingServer *)arg1 ;
@end
