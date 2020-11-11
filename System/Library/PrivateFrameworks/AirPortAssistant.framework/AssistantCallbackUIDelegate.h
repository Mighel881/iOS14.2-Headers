/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AssistantCallbackUIDelegate
@optional
-(int)callbackAskUserAQuestion:(int)arg1 paramDict:(id)arg2 forController:(id)arg3;
-(int)callbackAskUserToChooseFromStringList:(id)arg1 context:(int)arg2 forController:(id)arg3;
-(int)callbackAskUserForPassword:(int)arg1 param:(id)arg2 forController:(id)arg3;
-(int)callbackAskUserForSetupCode:(int)arg1 isRetry:(BOOL)arg2 forController:(id)arg3;
-(int)callbackAskUserForUncertifiedForController:(id)arg1;

@required
-(void)callbackAskCancel;

@end
