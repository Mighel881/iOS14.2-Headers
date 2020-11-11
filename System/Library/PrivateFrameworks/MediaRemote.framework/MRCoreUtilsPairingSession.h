/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRCryptoPairingSession.h>

@protocol OS_dispatch_queue;
@class MRPasscodeCredentials, NSObject, NSData, NSMutableData, MRDeviceInfo, NSArray, NSMutableDictionary, NSString;

@interface MRCoreUtilsPairingSession : MRCryptoPairingSession {

	MRPasscodeCredentials* _credentials;
	PairingSessionPrivateRef _pairingSession;
	SCD_Struct_MR19* _pairingDelegate;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _hasExchangedMessage;
	unsigned _pairingFlags;
	unsigned long long _state;
	NSData* _inputKey;
	NSMutableData* _inputNonce;
	NSData* _outputKey;
	NSMutableData* _outputNonce;

}

@property (nonatomic,retain) NSData * inputKey;                                             //@synthesize inputKey=_inputKey - In the implementation block
@property (nonatomic,retain) NSMutableData * inputNonce;                                    //@synthesize inputNonce=_inputNonce - In the implementation block
@property (nonatomic,retain) NSData * outputKey;                                            //@synthesize outputKey=_outputKey - In the implementation block
@property (nonatomic,retain) NSMutableData * outputNonce;                                   //@synthesize outputNonce=_outputNonce - In the implementation block
@property (nonatomic,readonly) MRDeviceInfo * pairedPeerDevice; 
@property (nonatomic,readonly) NSArray * pairedPeerDevices; 
@property (nonatomic,readonly) NSMutableDictionary * mediaRemotePairedDevices; 
@property (nonatomic,readonly) NSString * peerIdentifier; 
@property (nonatomic,readonly) unsigned long long state;                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL hasExchangedMessage;                                    //@synthesize hasExchangedMessage=_hasExchangedMessage - In the implementation block
@property (assign,nonatomic) unsigned pairingFlags;                                         //@synthesize pairingFlags=_pairingFlags - In the implementation block
-(void)open;
-(BOOL)isPaired;
-(void)close;
-(NSMutableData *)inputNonce;
-(NSData *)inputKey;
-(id)pairedDevices;
-(id)addPeer;
-(NSString *)peerIdentifier;
-(unsigned long long)state;
-(void)handlePairingExchangeData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handlePairingFailureWithStatus:(int)arg1 ;
-(id)encryptData:(id)arg1 withError:(id*)arg2 ;
-(id)decryptData:(id)arg1 withError:(id*)arg2 ;
-(BOOL)deleteIdentityWithError:(id*)arg1 ;
-(void)openInState:(unsigned long long)arg1 ;
-(void)setInputKey:(NSData *)arg1 ;
-(NSData *)outputKey;
-(BOOL)hasExchangedMessage;
-(id)removePeer;
-(NSMutableData *)outputNonce;
-(unsigned)pairingFlags;
-(id)updatePeer;
-(void)setPairingFlags:(unsigned)arg1 ;
-(id)initWithRole:(unsigned long long)arg1 device:(id)arg2 ;
-(NSArray *)pairedPeerDevices;
-(NSMutableDictionary *)mediaRemotePairedDevices;
-(id)initializePairingSession:(PairingSessionPrivateRef)arg1 ;
-(BOOL)shouldAutoRetryPairingExchange:(id)arg1 ;
-(MRDeviceInfo *)pairedPeerDevice;
-(void)setOutputKey:(NSData *)arg1 ;
-(void)setInputNonce:(NSMutableData *)arg1 ;
-(void)setOutputNonce:(NSMutableData *)arg1 ;
-(BOOL)isValid;
-(void)dealloc;
@end
