/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/AMSUIPasswordSettingsFreeDownloadsCellDelegate.h>
#import <libobjc.A.dylib/AMSURLProtocolDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class ACAccount, UITableView, NSBundle, NSString;

@interface AMSUIPasswordSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, AMSUIPasswordSettingsFreeDownloadsCellDelegate, AMSURLProtocolDelegate, NSURLSessionDelegate> {

	ACAccount* _account;
	UITableView* _tableView;
	unsigned long long _freeSetting;
	unsigned long long _paidSetting;
	NSBundle* _bundle;

}

@property (nonatomic,retain) UITableView * tableView;                     //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) unsigned long long freeSetting;              //@synthesize freeSetting=_freeSetting - In the implementation block
@property (assign,nonatomic) unsigned long long paidSetting;              //@synthesize paidSetting=_paidSetting - In the implementation block
@property (nonatomic,retain) NSBundle * bundle;                           //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) ACAccount * account;                       //@synthesize account=_account - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBundle:(NSBundle *)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(ACAccount *)account;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UITableView *)tableView;
-(void)handleAuthenticateRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleDialogRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)donePressed:(id)arg1 ;
-(NSBundle *)bundle;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithAccount:(id)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned long long)freeSetting;
-(unsigned long long)paidSetting;
-(void)freeDownloadsToggle:(id)arg1 changedValue:(BOOL)arg2 ;
-(void)setPaidSetting:(unsigned long long)arg1 ;
-(void)setFreeSetting:(unsigned long long)arg1 ;
@end

