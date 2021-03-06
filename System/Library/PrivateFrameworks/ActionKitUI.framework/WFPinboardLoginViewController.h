/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol WFPinboardLoginViewControllerDelegate;
@class WFPinboardSessionManager, UITextField, UIBarButtonItem, NSString;

@interface WFPinboardLoginViewController : UITableViewController <UITextFieldDelegate> {

	id<WFPinboardLoginViewControllerDelegate> _delegate;
	long long _state;
	WFPinboardSessionManager* _sessionManager;
	UITextField* _usernameField;
	UITextField* _passwordField;
	UITextField* _tokenField;
	UIBarButtonItem* _loginItem;
	UIBarButtonItem* _loadingItem;

}

@property (assign,nonatomic) long long state;                                                        //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) WFPinboardSessionManager * sessionManager;                              //@synthesize sessionManager=_sessionManager - In the implementation block
@property (assign,nonatomic,__weak) UITextField * usernameField;                                     //@synthesize usernameField=_usernameField - In the implementation block
@property (assign,nonatomic,__weak) UITextField * passwordField;                                     //@synthesize passwordField=_passwordField - In the implementation block
@property (assign,nonatomic,__weak) UITextField * tokenField;                                        //@synthesize tokenField=_tokenField - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * loginItem;                                            //@synthesize loginItem=_loginItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * loadingItem;                                          //@synthesize loadingItem=_loadingItem - In the implementation block
@property (assign,nonatomic,__weak) id<WFPinboardLoginViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setState:(long long)arg1 ;
-(id<WFPinboardLoginViewControllerDelegate>)delegate;
-(void)login;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(long long)state;
-(id)initWithStyle:(long long)arg1 ;
-(void)setDelegate:(id<WFPinboardLoginViewControllerDelegate>)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)accessibilityPerformEscape;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(WFPinboardSessionManager *)sessionManager;
-(UITextField *)passwordField;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)cancel;
-(UIBarButtonItem *)loginItem;
-(void)setSessionManager:(WFPinboardSessionManager *)arg1 ;
-(void)setPasswordField:(UITextField *)arg1 ;
-(void)updateLoginButton;
-(UITextField *)usernameField;
-(void)setUsernameField:(UITextField *)arg1 ;
-(void)setLoginItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)loadingItem;
-(void)setLoadingItem:(UIBarButtonItem *)arg1 ;
-(UITextField *)tokenField;
-(void)setTokenField:(UITextField *)arg1 ;
@end

