/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSSpecifier.h>

@class CTXPCServiceSubscriptionContext, PSListController, CoreTelephonyClient, PSConfirmationSpecifier, CTNRStatus, Logger;

@interface PSUI5GSASwitchSpecifier : PSSpecifier {

	CTXPCServiceSubscriptionContext* _subscriptionContext;
	PSListController* _listController;
	CoreTelephonyClient* _ctClient;
	PSConfirmationSpecifier* _enableSAAlert;
	CTNRStatus* _nrStatus;
	Logger* _logger;

}
-(id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2 ;
-(BOOL)is5GSASupported;
-(id)getLogger;
-(id)groupFooterText;
-(void)set5GSASwitch:(id)arg1 specifier:(id)arg2 ;
-(id)is5GSAEnabled;
-(void)checkNRStatusAndDisableIfNeeded;
-(void)show5GStandaloneExperimentalAlert;
-(void)disable5GSA;
-(void)setUp5GSAAlertSpecifierIfNeeded;
-(void)enable5GSA;
-(void)refreshSelfInHostController;
-(void)set5GSAEnabled:(BOOL)arg1 ;
@end
