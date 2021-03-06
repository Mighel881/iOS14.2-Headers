/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSViewController.h>

@class WFHealthIssueOverrides, WFNetworkListController, WFAirportViewController, NSURL;

@interface APNetworksController : PSViewController {

	BOOL _pushDataUsage;
	BOOL _viewLoaded;
	BOOL _joinEnterprise;
	WFHealthIssueOverrides* _healthOverrides;
	WFNetworkListController* _airportController;
	WFAirportViewController* _settingsViewController;
	NSURL* _deferredURL;

}

@property (nonatomic,retain) WFHealthIssueOverrides * healthOverrides;                      //@synthesize healthOverrides=_healthOverrides - In the implementation block
@property (nonatomic,retain) WFNetworkListController * airportController;                   //@synthesize airportController=_airportController - In the implementation block
@property (nonatomic,retain) WFAirportViewController * settingsViewController;              //@synthesize settingsViewController=_settingsViewController - In the implementation block
@property (nonatomic,retain) NSURL * deferredURL;                                           //@synthesize deferredURL=_deferredURL - In the implementation block
-(void)handleURL:(id)arg1 ;
-(void)didWake;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)willBecomeActive;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)willResignActive;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(WFAirportViewController *)settingsViewController;
-(void)loadView;
-(void)setSettingsViewController:(WFAirportViewController *)arg1 ;
-(WFNetworkListController *)airportController;
-(void)setAirportController:(WFNetworkListController *)arg1 ;
-(void)_loadHealthOverrides;
-(WFHealthIssueOverrides *)healthOverrides;
-(NSURL *)deferredURL;
-(void)setDeferredURL:(NSURL *)arg1 ;
-(void)_notifyAirPortSettingsVisible:(BOOL)arg1 ;
-(void)setHealthOverrides:(WFHealthIssueOverrides *)arg1 ;
@end

