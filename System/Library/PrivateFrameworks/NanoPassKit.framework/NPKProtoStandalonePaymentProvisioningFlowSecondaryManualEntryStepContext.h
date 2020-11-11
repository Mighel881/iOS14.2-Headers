/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPKProtoStandalonePaymentCredentialUnion, NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext, NPKProtoStandalonePaymentRemoteCredential;

@interface NPKProtoStandalonePaymentProvisioningFlowSecondaryManualEntryStepContext : PBCodable <NSCopying> {

	NPKProtoStandalonePaymentCredentialUnion* _credential;
	NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext* _manualEntryStepContext;
	NPKProtoStandalonePaymentRemoteCredential* _remoteCredential;
	BOOL _allowsAddingDifferentCard;
	SCD_Struct_NP2 _has;

}

@property (nonatomic,retain) NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext * manualEntryStepContext;              //@synthesize manualEntryStepContext=_manualEntryStepContext - In the implementation block
@property (nonatomic,readonly) BOOL hasRemoteCredential; 
@property (nonatomic,retain) NPKProtoStandalonePaymentRemoteCredential * remoteCredential;                                          //@synthesize remoteCredential=_remoteCredential - In the implementation block
@property (nonatomic,readonly) BOOL hasCredential; 
@property (nonatomic,retain) NPKProtoStandalonePaymentCredentialUnion * credential;                                                 //@synthesize credential=_credential - In the implementation block
@property (assign,nonatomic) BOOL hasAllowsAddingDifferentCard; 
@property (assign,nonatomic) BOOL allowsAddingDifferentCard;                                                                        //@synthesize allowsAddingDifferentCard=_allowsAddingDifferentCard - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(NPKProtoStandalonePaymentCredentialUnion *)credential;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)hasCredential;
-(void)setCredential:(NPKProtoStandalonePaymentCredentialUnion *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRemoteCredential:(NPKProtoStandalonePaymentRemoteCredential *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NPKProtoStandalonePaymentRemoteCredential *)remoteCredential;
-(void)setManualEntryStepContext:(NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext *)arg1 ;
-(NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext *)manualEntryStepContext;
-(void)setAllowsAddingDifferentCard:(BOOL)arg1 ;
-(BOOL)allowsAddingDifferentCard;
-(BOOL)hasRemoteCredential;
-(void)setHasAllowsAddingDifferentCard:(BOOL)arg1 ;
-(BOOL)hasAllowsAddingDifferentCard;
@end
