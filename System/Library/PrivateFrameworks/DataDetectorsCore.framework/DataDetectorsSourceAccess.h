/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
#import <DataDetectorsCore/DataDetectorsSourceAccessProtocol.h>

@interface DataDetectorsSourceAccess : NSObject <DataDetectorsSourceAccessProtocol> {

	SCD_Struct_Da4 _auditToken;
	int _clientpid;
	unsigned _clientuid;
	BOOL _privacyUserReadEntitled;
	unsigned char _privacyUserReadEntitlementChecked;
	BOOL _privacyUserWriteEntitled;
	unsigned char _privacyUserWriteEntitlementChecked;
	BOOL _privacySystemWriteEntitled;
	unsigned char _privacySystemWriteEntitlementChecked;

}

@property (assign) SCD_Struct_Da4 auditToken;              //@synthesize auditToken=_auditToken - In the implementation block
@property (assign) int processIdentifier;                  //@synthesize clientpid=_clientpid - In the implementation block
@property (assign) unsigned userIdentifier;                //@synthesize clientuid=_clientuid - In the implementation block
-(unsigned)userIdentifier;
-(void)setUserIdentifier:(unsigned)arg1 ;
-(void)setAuditToken:(SCD_Struct_Da4)arg1 ;
-(void)fileForSourceRead:(id)arg1 resourceType:(unsigned long long)arg2 withReply:(/*^block*/id)arg3 ;
-(void)filesForSourceRead:(id)arg1 resourceType:(unsigned long long)arg2 withReply:(/*^block*/id)arg3 ;
-(void)writeSourceFromJSONFile:(id)arg1 source:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)writeSourceFromRawData:(id)arg1 source:(id)arg2 signature:(id)arg3 withReply:(/*^block*/id)arg4 ;
-(BOOL)clientCanWriteSource:(int)arg1 ;
-(BOOL)privacyUserReadEntitled;
-(BOOL)privacyUserWriteEntitled;
-(BOOL)privacySystemWriteEntitled;
-(id)fileHandleForSourceRead:(int)arg1 resourceType:(unsigned long long)arg2 ;
-(BOOL)pushSourcesContent:(id)arg1 forSource:(int)arg2 signature:(id)arg3 ;
-(void)setProcessIdentifier:(int)arg1 ;
-(int)processIdentifier;
-(SCD_Struct_Da4)auditToken;
@end

