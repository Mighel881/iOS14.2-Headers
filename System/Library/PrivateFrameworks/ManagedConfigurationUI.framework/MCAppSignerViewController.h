/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ManagedConfigurationUI/MCUITableViewController.h>

@protocol OS_dispatch_group;
@class MCUIAppSigner, NSObject;

@interface MCAppSignerViewController : MCUITableViewController {

	BOOL _isNetworkReachable;
	MCUIAppSigner* _appSigner;
	NSObject*<OS_dispatch_group> _trustActionGroup;

}

@property (assign,nonatomic) BOOL isNetworkReachable;                                    //@synthesize isNetworkReachable=_isNetworkReachable - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> trustActionGroup;              //@synthesize trustActionGroup=_trustActionGroup - In the implementation block
@property (nonatomic,retain) MCUIAppSigner * appSigner;                                  //@synthesize appSigner=_appSigner - In the implementation block
-(BOOL)isNetworkReachable;
-(void)_setup;
-(void)setIsNetworkReachable:(BOOL)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)networkReachabilityChanged:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)dealloc;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)initWithAppSigner:(id)arg1 ;
-(void)effectiveSettingsChanged:(id)arg1 ;
-(void)appSignerApplicationsChanged:(id)arg1 ;
-(MCUIAppSigner *)appSigner;
-(NSObject*<OS_dispatch_group>)trustActionGroup;
-(BOOL)_isEnterpriseAppTrustAllowed;
-(void)refreshAppSigner;
-(void)_presentNetworkRequiredAlert;
-(void)_trustActionGroupVerifyAppsAndTrustSigner:(BOOL)arg1 ;
-(BOOL)_isAppRemovalAllowed;
-(BOOL)_isShowingTrustUntrustRowAllowed;
-(void)_presentAppRemovalAlert;
-(void)_presentTrustAlert;
-(void)_presentVerifyAppAlert;
-(void)trustAppSigner;
-(void)verifyApps;
-(void)removeAppSignerApps;
-(void)setAppSigner:(MCUIAppSigner *)arg1 ;
-(void)setTrustActionGroup:(NSObject*<OS_dispatch_group>)arg1 ;
@end

