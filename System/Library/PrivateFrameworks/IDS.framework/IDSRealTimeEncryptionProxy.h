/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _IDSRealTimeEncryptionProxy;

@interface IDSRealTimeEncryptionProxy : NSObject {

	_IDSRealTimeEncryptionProxy* _internal;

}
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)sendPrekeyToGroup:(id)arg1 ;
-(void)requestPublicKeys;
-(void)sendMasterKeyMaterialToGroup:(id)arg1 ;
-(void)requestMasterKeyMaterialForGroup:(id)arg1 ;
-(void)sendMKMRecoveryRequestToGroup:(id)arg1 ;
-(void)resetKeysForGroup:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(void)dealloc;
@end
