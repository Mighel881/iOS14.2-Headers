/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BSInvalidatable;
@interface TIKeyboardSecureTouchSlot : NSObject {

	unsigned _slotID;
	unsigned long long _authenticationMessageContext;
	id<BSInvalidatable> _invalidatable;

}

@property (assign,nonatomic) unsigned slotID;                                              //@synthesize slotID=_slotID - In the implementation block
@property (assign,nonatomic) unsigned long long authenticationMessageContext;              //@synthesize authenticationMessageContext=_authenticationMessageContext - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> invalidatable;                            //@synthesize invalidatable=_invalidatable - In the implementation block
-(unsigned)slotID;
-(void)setAuthenticationMessageContext:(unsigned long long)arg1 ;
-(unsigned long long)authenticationMessageContext;
-(void)setSlotID:(unsigned)arg1 ;
-(void)dealloc;
-(id<BSInvalidatable>)invalidatable;
-(void)setInvalidatable:(id<BSInvalidatable>)arg1 ;
@end

