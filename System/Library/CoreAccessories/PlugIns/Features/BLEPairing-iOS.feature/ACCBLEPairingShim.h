/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/CoreAccessories/PlugIns/Features/BLEPairing-iOS.feature/BLEPairing-iOS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ACCiAP2ShimServerDelegate.h>

@protocol ACCBLEPairingShimProtocol;
@class NSString;

@interface ACCBLEPairingShim : NSObject <ACCiAP2ShimServerDelegate> {

	id<ACCBLEPairingShimProtocol> _delegate;
	NSString* _uid;

}

@property (readonly) NSString * uid;                                                     //@synthesize uid=_uid - In the implementation block
@property (assign,nonatomic,__weak) id<ACCBLEPairingShimProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<ACCBLEPairingShimProtocol>)delegate;
-(NSString *)uid;
-(id)getUID;
-(void)setDelegate:(id<ACCBLEPairingShimProtocol>)arg1 ;
-(id)description;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)tryProcessXPCMessage:(id)arg1 connection:(id)arg2 server:(id)arg3 ;
-(void)accessoryAttached:(id)arg1 blePairingUUID:(id)arg2 accInfoDict:(id)arg3 supportedPairTypes:(id)arg4 ;
-(void)accessoryDetached:(id)arg1 blePairingUUID:(id)arg2 ;
-(void)stateUpdate:(id)arg1 blePairingUUID:(id)arg2 validMask:(unsigned)arg3 btRadioOn:(BOOL)arg4 pairingState:(int)arg5 pairingModeOn:(BOOL)arg6 ;
-(void)stateUpdate:(id)arg1 blePairingUUID:(id)arg2 pairType:(int)arg3 pairInfoList:(id)arg4 ;
-(void)dataUpdate:(id)arg1 blePairingUUID:(id)arg2 pairType:(int)arg3 pairData:(id)arg4 ;
@end
