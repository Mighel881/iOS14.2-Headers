/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthRecordsUI/HealthRecordsUI-Structs.h>
#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/WDMedicalRecordDetailDataProviderDelegate.h>

@class HKClinicalAccount, HKAccountOwner, HRProfile, HKMedicalRecord, WDMedicalRecordDetailDataProvider;

@interface WDMedicalRecordDetailViewController : HKTableViewController <WDMedicalRecordDetailDataProviderDelegate> {

	HKClinicalAccount* _account;
	HKAccountOwner* _accountOwner;
	HRProfile* _profile;
	HKMedicalRecord* _medicalRecord;
	WDMedicalRecordDetailDataProvider* _medicalRecordDataProvider;

}

@property (nonatomic,copy,readonly) HKClinicalAccount * account;                                         //@synthesize account=_account - In the implementation block
@property (nonatomic,copy,readonly) HKAccountOwner * accountOwner;                                       //@synthesize accountOwner=_accountOwner - In the implementation block
@property (nonatomic,retain) HRProfile * profile;                                                        //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) HKMedicalRecord * medicalRecord;                                            //@synthesize medicalRecord=_medicalRecord - In the implementation block
@property (nonatomic,retain) WDMedicalRecordDetailDataProvider * medicalRecordDataProvider;              //@synthesize medicalRecordDataProvider=_medicalRecordDataProvider - In the implementation block
-(void)setProfile:(HRProfile *)arg1 ;
-(id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(CGPoint)arg3 ;
-(HKClinicalAccount *)account;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(HKMedicalRecord *)medicalRecord;
-(void)setMedicalRecord:(HKMedicalRecord *)arg1 ;
-(void)setMedicalRecordDataProvider:(WDMedicalRecordDetailDataProvider *)arg1 ;
-(id)recordCategory;
-(WDMedicalRecordDetailDataProvider *)medicalRecordDataProvider;
-(HKAccountOwner *)accountOwner;
-(id)initWithProfile:(id)arg1 medicalRecord:(id)arg2 ;
-(id)_pasteboardStringForRowAtIndexPath:(id)arg1 ;
-(id)_makeCopyMenuFor:(id)arg1 ;
-(void)detailDataProviderHasDisplayItemUpdate:(id)arg1 ;
-(HRProfile *)profile;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_tapToRadar:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
@end
