/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CompanionSync/SYSession.h>

@protocol OS_os_activity;
@class NSObject, SYChangeMessage;

@interface SYIncomingTransactionSession : SYSession {

	NSObject*<OS_os_activity> _sessionActivity;
	SYChangeMessage* _message;
	/*^block*/id _completion;
	BOOL canRestart;
	BOOL canRollback;
	unsigned state;

}
-(void)start:(/*^block*/id)arg1 ;
-(void)setState:(unsigned)arg1 ;
-(BOOL)wasCancelled;
-(unsigned)state;
-(BOOL)isSending;
-(unsigned long long)protocolVersion;
-(void)cancelWithError:(id)arg1 ;
-(BOOL)isResetSync;
-(BOOL)canRestart;
-(void)setCanRestart:(BOOL)arg1 ;
-(BOOL)canRollback;
-(void)setCanRollback:(BOOL)arg1 ;
-(void)didCompleteSession;
-(void)_sendComplete;
-(void)_sendChanges;
-(void)_sendCancelled;
-(id)initWithService:(id)arg1 transaction:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
