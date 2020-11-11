/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, BiometricKitXPCExportedObject;

@interface BiometricKitXPCExportedClientObject : NSObject {

	unsigned long long _clientID;
	NSDictionary* _clientInfo;
	BiometricKitXPCExportedObject* _exportedObject;
	BOOL _delegateRegistered;
	BOOL _clientAppIsBackground;
	BOOL _clientAppIsInactive;

}

@property (nonatomic,readonly) unsigned long long clientID;                                        //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * clientInfo;                                     //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,readonly) BOOL delegateRegistered;                                            //@synthesize delegateRegistered=_delegateRegistered - In the implementation block
@property (nonatomic,readonly) BOOL clientAppIsBackground;                                         //@synthesize clientAppIsBackground=_clientAppIsBackground - In the implementation block
@property (nonatomic,readonly) BOOL clientAppIsInactive;                                           //@synthesize clientAppIsInactive=_clientAppIsInactive - In the implementation block
@property (nonatomic,__weak,readonly) BiometricKitXPCExportedObject * exportedObject; 
-(unsigned long long)clientID;
-(BOOL)clientAppIsBackground;
-(void)statusMessage:(unsigned)arg1 ;
-(BiometricKitXPCExportedObject *)exportedObject;
-(NSDictionary *)clientInfo;
-(void)enrollUpdate:(id)arg1 ;
-(BOOL)clientAppIsInactive;
-(void)homeButtonPressed;
-(void)setClientAppIsInactive:(BOOL)arg1 ;
-(void)enrollFeedback:(id)arg1 ;
-(id)description;
-(void)matchResult:(id)arg1 details:(id)arg2 ;
-(void)setClientAppIsBackground:(BOOL)arg1 ;
-(id)initWithClientID:(unsigned long long)arg1 clientInfo:(id)arg2 exportedObject:(id)arg3 ;
-(BOOL)delegateRegistered;
-(void)templateUpdate:(id)arg1 details:(id)arg2 ;
-(void)enrollResult:(id)arg1 ;
-(void)setDelegateRegistered:(BOOL)arg1 ;
-(void)taskResumeStatus:(int)arg1 ;
-(void)statusMessage:(unsigned)arg1 details:(id)arg2 ;
-(void)touchIDButtonPressed:(BOOL)arg1 ;
@end
