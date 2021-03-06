/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AAUISignOutControllerDelegate.h>
#import <libobjc.A.dylib/AASignOutFlowControllerDelegate.h>

@class ACAccountStore, UIViewController, NSString;

@interface AAUISignOutFlowControllerDelegate : NSObject <AAUISignOutControllerDelegate, AASignOutFlowControllerDelegate> {

	/*^block*/id _pendingSignOutCompletion;
	ACAccountStore* _accountStore;
	UIViewController* _presentingViewController;

}

@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(id)initWithPresentingViewController:(id)arg1 ;
-(void)signOutFlowController:(id)arg1 showAlertWithTitle:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)signOutFlowController:(id)arg1 disableFindMyDeviceForAccount:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)signOutFlowController:(id)arg1 signOutAccount:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_isRestoringFromiCloud;
-(void)_disableDeviceLocatorForAccount:(id)arg1 inViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)signOutController:(id)arg1 didCompleteWithSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)signOutControllerDidCancel:(id)arg1 ;
@end

