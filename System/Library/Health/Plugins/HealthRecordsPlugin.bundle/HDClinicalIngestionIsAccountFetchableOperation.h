/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthRecordsPlugin/HDClinicalIngestionPerAccountOperation.h>

@class HDClinicalAccount;

@interface HDClinicalIngestionIsAccountFetchableOperation : HDClinicalIngestionPerAccountOperation {

	BOOL _accountFetchable;
	HDClinicalAccount* _refreshedAccount;

}

@property (assign,nonatomic) BOOL accountFetchable;                             //@synthesize accountFetchable=_accountFetchable - In the implementation block
@property (nonatomic,retain) HDClinicalAccount * refreshedAccount;              //@synthesize refreshedAccount=_refreshedAccount - In the implementation block
-(void)main;
-(BOOL)_refreshAccountWithErrorString:(id*)arg1 ;
-(BOOL)_verifyShouldFetchWithErrorString:(id*)arg1 ;
-(void)setAccountFetchable:(BOOL)arg1 ;
-(void)setRefreshedAccount:(HDClinicalAccount *)arg1 ;
-(HDClinicalAccount *)refreshedAccount;
-(BOOL)accountFetchable;
@end
