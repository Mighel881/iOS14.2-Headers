/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TKTokenSessionDelegate, OS_dispatch_queue;
#import <CryptoTokenKit/CryptoTokenKit-Structs.h>
@class TKToken, NSObject, LAContext, NSDictionary, NSXPCConnection, NSNumber, NSString;

@interface TKTokenSession : NSObject {

	TKToken* _token;
	id<TKTokenSessionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	id _keepAlive;
	LAContext* _LAContext;
	NSDictionary* _parameters;
	NSXPCConnection* _caller;
	NSNumber* _callerPID;
	SCD_Struct_TK0 _creatorAuditToken;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,retain) id keepAlive;                                           //@synthesize keepAlive=_keepAlive - In the implementation block
@property (nonatomic,readonly) LAContext * LAContext;                                //@synthesize LAContext=_LAContext - In the implementation block
@property (retain) NSDictionary * parameters;                                        //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic) SCD_Struct_TK0 creatorAuditToken;                       //@synthesize creatorAuditToken=_creatorAuditToken - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * caller;                             //@synthesize caller=_caller - In the implementation block
@property (retain) NSNumber * callerPID;                                             //@synthesize callerPID=_callerPID - In the implementation block
@property (readonly) id<TKTokenSessionPrivateDelegate> privateDelegate; 
@property (readonly) TKToken * token;                                                //@synthesize token=_token - In the implementation block
@property (__weak) id<TKTokenSessionDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
-(void)setCaller:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)caller;
-(void)objectID:(id)arg1 operation:(long long)arg2 inputData:(id)arg3 algorithms:(id)arg4 parameters:(id)arg5 reply:(/*^block*/id)arg6 ;
-(NSDictionary *)parameters;
-(id<TKTokenSessionDelegate>)delegate;
-(void)auditAuthOperation:(id)arg1 auditToken:(SCD_Struct_TK0)arg2 success:(BOOL)arg3 ;
-(void)beginRequest;
-(void)performKeyExchangeWithPublicKey:(id)arg1 usingKey:(id)arg2 algorithm:(id)arg3 parameters:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)terminate;
-(void)endRequest;
-(TKToken *)token;
-(void)getAdvertisedItemsWithReply:(/*^block*/id)arg1 ;
-(id)keepAlive;
-(void)decryptData:(id)arg1 usingKey:(id)arg2 algorithm:(id)arg3 parameters:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)deleteObject:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)errorWithResult:(id)arg1 operation:(id)arg2 forError:(id)arg3 ;
-(void)bumpKey:(id)arg1 reply:(/*^block*/id)arg2 ;
-(NSString *)name;
-(void)finalizeAuthOperation:(id)arg1 evaluatedAuthOperation:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<TKTokenSessionDelegate>)arg1 ;
-(void)commitKey:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setCreatorAuditToken:(SCD_Struct_TK0)arg1 ;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)createObjectWithAttributes:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setCallerPID:(NSNumber *)arg1 ;
-(void)evaluateAuthOperation:(id)arg1 retry:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)checkOperation:(long long)arg1 usingKey:(id)arg2 algorithm:(id)arg3 parameters:(id)arg4 ;
-(void)evaluateAuthOperation:(id)arg1 reply:(/*^block*/id)arg2 ;
-(NSNumber *)callerPID;
-(void)getAttributesOfObject:(id)arg1 isCertificate:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(void)attestKey:(id)arg1 usingKey:(id)arg2 nonce:(id)arg3 reply:(/*^block*/id)arg4 ;
-(LAContext *)LAContext;
-(void)setLAContext:(LAContext *)arg1 ;
-(id<TKTokenSessionPrivateDelegate>)privateDelegate;
-(id)initWithToken:(id)arg1 ;
-(SCD_Struct_TK0)creatorAuditToken;
-(void)beginAuthForOperation:(long long)arg1 constraint:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)evaluateAccessControl:(id)arg1 forOperation:(id)arg2 reply:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)signData:(id)arg1 usingKey:(id)arg2 algorithm:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)setKeepAlive:(id)arg1 ;
@end

