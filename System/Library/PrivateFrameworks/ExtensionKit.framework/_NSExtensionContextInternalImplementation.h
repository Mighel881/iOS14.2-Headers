/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ExtensionKit.framework/ExtensionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, NSUUID, NSXPCConnection;


@protocol _NSExtensionContextInternalImplementation <NSObject>
@property (copy,readonly) NSArray * inputItems; 
@property (copy,readonly) NSUUID * _UUID; 
@property (readonly) NSXPCConnection * _auxiliaryConnection; 
@property (setter=_setRequestCleanUpBlock:,copy) id _requestCleanUpBlock; 
@property (readonly) id _principalObject; 
@property (readonly) SCD_Struct_EX1 _extensionHostAuditToken; 
@required
-(NSUUID *)_UUID;
-(void)completeRequestReturningItems:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(SCD_Struct_EX1)_extensionHostAuditToken;
-(void)_setRequestCleanUpBlock:(/*^block*/id)arg1;
-(id)_principalObject;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(NSArray *)inputItems;
-(void)cancelRequestWithError:(id)arg1;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 extensionContext:(id)arg4;
-(id)_requestCleanUpBlock;
-(NSXPCConnection *)_auxiliaryConnection;

@end

