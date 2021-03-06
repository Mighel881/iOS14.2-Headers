/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/CNPropertyAction.h>
#import <libobjc.A.dylib/CNUINavigationListViewControllerDelegate.h>
#import <libobjc.A.dylib/CNPickerControllerDelegate.h>
#import <libobjc.A.dylib/HKMedicalIDViewControllerDelegate.h>

@protocol CNScheduler;
@class CNContactStore, CNHealthStoreManager, CNContactProperty, UIAlertController, CNUINavigationListViewController, NSString;

@interface CNEmergencyContactAction : CNPropertyAction <CNUINavigationListViewControllerDelegate, CNPickerControllerDelegate, HKMedicalIDViewControllerDelegate> {

	BOOL _addingToEmergency;
	CNContactStore* _contactStore;
	CNHealthStoreManager* _healthStoreManager;
	CNContactProperty* _contactProperty;
	UIAlertController* _alertController;
	CNUINavigationListViewController* _listController;
	id<CNScheduler> _mainThreadScheduler;

}

@property (nonatomic,retain) CNHealthStoreManager * healthStoreManager;                      //@synthesize healthStoreManager=_healthStoreManager - In the implementation block
@property (nonatomic,retain) CNContactProperty * contactProperty;                            //@synthesize contactProperty=_contactProperty - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                            //@synthesize alertController=_alertController - In the implementation block
@property (nonatomic,retain) CNUINavigationListViewController * listController;              //@synthesize listController=_listController - In the implementation block
@property (nonatomic,retain) id<CNScheduler> mainThreadScheduler;                            //@synthesize mainThreadScheduler=_mainThreadScheduler - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                  //@synthesize contactStore=_contactStore - In the implementation block
@property (assign,nonatomic) BOOL addingToEmergency;                                         //@synthesize addingToEmergency=_addingToEmergency - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContactStore:(CNContactStore *)arg1 ;
-(UIAlertController *)alertController;
-(id<CNScheduler>)mainThreadScheduler;
-(void)navigationListController:(id)arg1 didSelectItem:(id)arg2 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(void)medicalIDViewControllerDidCancel:(id)arg1 ;
-(void)setHealthStoreManager:(CNHealthStoreManager *)arg1 ;
-(void)medicalIDViewControllerDidSave:(id)arg1 ;
-(void)medicalIDViewControllerDidFinish:(id)arg1 ;
-(CNContactStore *)contactStore;
-(void)picker:(id)arg1 didPickItem:(id)arg2 ;
-(void)pickerDidCancel:(id)arg1 ;
-(void)presentDisambiguationAlertWithSender:(id)arg1 ;
-(CNContactProperty *)contactProperty;
-(CNUINavigationListViewController *)listController;
-(CNHealthStoreManager *)healthStoreManager;
-(void)performActionWithSender:(id)arg1 ;
-(void)performActionForItem:(id)arg1 sender:(id)arg2 ;
-(id)initWithContact:(id)arg1 healthStoreManager:(id)arg2 propertyItems:(id)arg3 ;
-(BOOL)addingToEmergency;
-(void)performActionWithContactProperty:(id)arg1 relationship:(id)arg2 ;
-(void)createMedicalIDWithEmergencyContact:(id)arg1 ;
-(void)showHKMedicalIDViewControllerForMedicalID:(id)arg1 ;
-(void)setMainThreadScheduler:(id<CNScheduler>)arg1 ;
-(void)showConfirmRemoveAlertWithSender:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setContactProperty:(CNContactProperty *)arg1 ;
-(void)setListController:(CNUINavigationListViewController *)arg1 ;
-(void)showRelationshipPickerForContactProperty:(id)arg1 sender:(id)arg2 ;
-(void)setAddingToEmergency:(BOOL)arg1 ;
@end

