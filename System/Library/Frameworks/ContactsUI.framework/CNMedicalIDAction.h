/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/CNPropertyAction.h>
#import <libobjc.A.dylib/HKMedicalIDViewControllerDelegate.h>

@class CNHealthStoreManager, CNContact, NSString;

@interface CNMedicalIDAction : CNPropertyAction <HKMedicalIDViewControllerDelegate> {

	long long _medicalIDActionType;
	CNHealthStoreManager* _healthStoreManager;

}

@property (assign,nonatomic) long long medicalIDActionType;                          //@synthesize medicalIDActionType=_medicalIDActionType - In the implementation block
@property (nonatomic,retain) CNContact * contact; 
@property (nonatomic,retain) CNHealthStoreManager * healthStoreManager;              //@synthesize healthStoreManager=_healthStoreManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)medicalIDViewControllerDidCancel:(id)arg1 ;
-(void)setHealthStoreManager:(CNHealthStoreManager *)arg1 ;
-(void)medicalIDViewControllerDidSave:(id)arg1 ;
-(void)medicalIDViewControllerDidDelete:(id)arg1 ;
-(void)medicalIDViewControllerDidFinish:(id)arg1 ;
-(long long)medicalIDActionType;
-(void)setMedicalIDActionType:(long long)arg1 ;
-(CNHealthStoreManager *)healthStoreManager;
-(void)performActionWithSender:(id)arg1 ;
@end

