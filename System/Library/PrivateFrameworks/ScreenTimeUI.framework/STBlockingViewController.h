/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <libobjc.A.dylib/STMenuButtonDelegate.h>

@class STHourglassView, UIImageView, UILabel, UIButton, STMenuButton, SBSLockScreenService, NSString, CNContactStore, STManagementState;

@interface STBlockingViewController : UIViewController <CNContactViewControllerDelegate, STMenuButtonDelegate> {

	BOOL _changePolicyButtonHidden;
	BOOL _fullScreenBehavior;
	BOOL _showingPolicyOptions;
	/*^block*/id _okButtonHandler;
	/*^block*/id _addContactHandler;
	STHourglassView* _hourglassView;
	UIImageView* _communicationLimitView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UIButton* _okButton;
	STMenuButton* _ignoreLimitButton;
	STMenuButton* _askForMoreTimeButton;
	UIButton* _enterScreenTimePasscodeButton;
	UIButton* _addContactButton;
	SBSLockScreenService* _lockScreenService;
	long long _policy;
	NSString* _categoryIdentifier;
	NSString* _bundleIdentifier;
	NSString* _webDomain;
	NSString* _formattedContactHandle;
	CNContactStore* _contactStore;
	STManagementState* _managementState;

}

@property (retain) STHourglassView * hourglassView;                                                        //@synthesize hourglassView=_hourglassView - In the implementation block
@property (retain) UIImageView * communicationLimitView;                                                   //@synthesize communicationLimitView=_communicationLimitView - In the implementation block
@property (retain) UILabel * titleLabel;                                                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (retain) UILabel * messageLabel;                                                                 //@synthesize messageLabel=_messageLabel - In the implementation block
@property (retain) UIButton * okButton;                                                                    //@synthesize okButton=_okButton - In the implementation block
@property (retain) STMenuButton * ignoreLimitButton;                                                       //@synthesize ignoreLimitButton=_ignoreLimitButton - In the implementation block
@property (retain) STMenuButton * askForMoreTimeButton;                                                    //@synthesize askForMoreTimeButton=_askForMoreTimeButton - In the implementation block
@property (retain) UIButton * enterScreenTimePasscodeButton;                                               //@synthesize enterScreenTimePasscodeButton=_enterScreenTimePasscodeButton - In the implementation block
@property (retain) UIButton * addContactButton;                                                            //@synthesize addContactButton=_addContactButton - In the implementation block
@property (readonly) SBSLockScreenService * lockScreenService;                                             //@synthesize lockScreenService=_lockScreenService - In the implementation block
@property (assign) long long policy;                                                                       //@synthesize policy=_policy - In the implementation block
@property (copy) NSString * categoryIdentifier;                                                            //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (copy) NSString * bundleIdentifier;                                                              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (copy) NSString * webDomain;                                                                     //@synthesize webDomain=_webDomain - In the implementation block
@property (copy) NSString * formattedContactHandle;                                                        //@synthesize formattedContactHandle=_formattedContactHandle - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                                //@synthesize contactStore=_contactStore - In the implementation block
@property (readonly) STManagementState * managementState;                                                  //@synthesize managementState=_managementState - In the implementation block
@property (readonly) BOOL shouldAllowOneMoreMinute; 
@property (readonly) BOOL shouldRequestMoreTime; 
@property (getter=isShowingPolicyOptions) BOOL showingPolicyOptions;                                       //@synthesize showingPolicyOptions=_showingPolicyOptions - In the implementation block
@property (nonatomic,copy) id okButtonHandler;                                                             //@synthesize okButtonHandler=_okButtonHandler - In the implementation block
@property (assign,getter=isChangePolicyButtonHidden,nonatomic) BOOL changePolicyButtonHidden;              //@synthesize changePolicyButtonHidden=_changePolicyButtonHidden - In the implementation block
@property (copy) id addContactHandler;                                                                     //@synthesize addContactHandler=_addContactHandler - In the implementation block
@property (assign) BOOL fullScreenBehavior;                                                                //@synthesize fullScreenBehavior=_fullScreenBehavior - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newTranslucentBlockingViewController;
+(/*^block*/id)closeApplicationHandler;
-(UILabel *)titleLabel;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)setCategoryIdentifier:(NSString *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)_sendRequest:(id)arg1 ;
-(UILabel *)messageLabel;
-(void)setPolicy:(long long)arg1 ;
-(long long)policy;
-(void)_ok:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(SBSLockScreenService *)lockScreenService;
-(CNContactStore *)contactStore;
-(void)setOkButton:(UIButton *)arg1 ;
-(STManagementState *)managementState;
-(void)updateAppearanceUsingPolicy:(long long)arg1 forBundleIdentifier:(id)arg2 ;
-(void)updateAppearanceUsingPolicy:(long long)arg1 forCategoryIdentifier:(id)arg2 ;
-(NSString *)categoryIdentifier;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(UIButton *)okButton;
-(NSString *)webDomain;
-(void)updateAppearanceUsingPolicy:(long long)arg1 forWebpageURL:(id)arg2 ;
-(void)showWithAnimation:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)hideWithAnimation:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateButtons;
-(BOOL)shouldRequestMoreTime;
-(void)dealloc;
-(void)setOkButtonHandler:(id)arg1 ;
-(STMenuButton *)ignoreLimitButton;
-(/*^block*/id)_ignoreLimitMenuProvider;
-(STMenuButton *)askForMoreTimeButton;
-(/*^block*/id)_askForMoreTimeMenuProvider;
-(id)okButtonHandler;
-(void)_updateAddContactButton;
-(UIButton *)enterScreenTimePasscodeButton;
-(BOOL)isChangePolicyButtonHidden;
-(UIButton *)addContactButton;
-(BOOL)isShowingPolicyOptions;
-(void)setShowingPolicyOptions:(BOOL)arg1 ;
-(NSString *)formattedContactHandle;
-(void)setWebDomain:(NSString *)arg1 ;
-(void)setFormattedContactHandle:(NSString *)arg1 ;
-(void)_updateAppearanceForAskPending;
-(void)_updateAppearanceForBlockedContent:(id)arg1 messageFormatKey:(id)arg2 messageKey:(id)arg3 ;
-(UIImageView *)communicationLimitView;
-(STHourglassView *)hourglassView;
-(BOOL)shouldAllowOneMoreMinute;
-(void)_oneMoreMinute:(id)arg1 ;
-(void)_ignoreLimitForAdditionalTime:(double)arg1 ;
-(id)_oneMoreMinuteAction;
-(id)_remindMeIn15MinutesAction;
-(id)_ignoreForTodayAction;
-(id)_askForTimeResource;
-(void)_enterScreenTimePasscode:(id)arg1 ;
-(void)_unlockDeviceIfNeededWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_sendRequestAction;
-(id)_enterScreenTimePasscodeAction;
-(void)_didFinishEnteringScreenTimePasscode:(id)arg1 ;
-(void)_showPasscodeApprovedOptions;
-(void)_addContact;
-(id)addContactHandler;
-(id)_newContact;
-(id)_iCloudContainer;
-(void)contextMenuWillDisplayForButton:(id)arg1 ;
-(void)contextMenuWillEndForButton:(id)arg1 ;
-(void)setChangePolicyButtonHidden:(BOOL)arg1 ;
-(void)updateAppearanceUsingBlockedContactHandles:(id)arg1 contactNameByHandle:(id)arg2 forBundleIdentifier:(id)arg3 isApplicationCurrentlyLimited:(BOOL)arg4 contactStore:(id)arg5 ;
-(void)_showIgnoreLimitOptions:(id)arg1 ;
-(void)_showAskForMoreTimeOptions:(id)arg1 ;
-(void)_addContact:(id)arg1 ;
-(void)setAddContactHandler:(id)arg1 ;
-(BOOL)fullScreenBehavior;
-(void)setFullScreenBehavior:(BOOL)arg1 ;
-(void)setHourglassView:(STHourglassView *)arg1 ;
-(void)setCommunicationLimitView:(UIImageView *)arg1 ;
-(void)setIgnoreLimitButton:(STMenuButton *)arg1 ;
-(void)setAskForMoreTimeButton:(STMenuButton *)arg1 ;
-(void)setEnterScreenTimePasscodeButton:(UIButton *)arg1 ;
-(void)setAddContactButton:(UIButton *)arg1 ;
@end
