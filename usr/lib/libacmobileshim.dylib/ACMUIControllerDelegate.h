/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libacmobileshim.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ACMUIControllerDelegate <NSObject>
@optional
-(void)onManageAppleIDForRealm:(id)arg1;
-(void)uiControllerOnSignIn:(id)arg1 withPassword:(id)arg2;
-(void)uiControllerOnSignInCancel:(id)arg1;
-(void)uiControllerOnSignIForgot:(id)arg1;
-(void)uiControllerWillEnableSignInDialog:(id)arg1;
-(void)uiControllerDidEnableSignInDialog:(id)arg1;
-(void)uiControllerWillDisableSignInDialog:(id)arg1;
-(void)uiControllerDidDisableSignInDialog:(id)arg1;
-(void)uiControllerOnLogOut:(id)arg1;
-(unsigned long long)uiControllerSignInDialogContentStyle:(id)arg1;
-(id)uiControllerManagerApprovalDialogSummaryView:(id)arg1;

@end
