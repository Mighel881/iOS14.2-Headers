/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKDASession.h>
#import <libobjc.A.dylib/DAKeyPairingDelegate.h>

@class DAKeyPairingSession, NSString;

@interface PKAppletSubcredentialPairingSession : PKDASession <DAKeyPairingDelegate>

@property (nonatomic,retain) DAKeyPairingSession * session; 
@property (assign,nonatomic,__weak) id<PKAppletSubcredentialPairingSessionDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createSessionWithDelegate:(id)arg1 ;
-(void)didStartPairing;
-(void)didFinishPreWarmWithResult:(id)arg1 ;
-(void)keyPairingSession:(id)arg1 didFinishPairingWithKey:(id)arg2 trackingRequest:(id)arg3 error:(id)arg4 ;
-(void)didFinishFirstTransactionForSession:(id)arg1 error:(id)arg2 ;
-(void)didFinishProbingWithResult:(BOOL)arg1 ;
-(id)startPairingWithKeyDisplayName:(id)arg1 pairingPassword:(id)arg2 ;
-(id)trackSubcredential:(id)arg1 withReceipt:(id)arg2 ;
-(id)probeTerminalForPairingStatus;
-(id)prewarmWithIssuerName:(id)arg1 ;
@end

