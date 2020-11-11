/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HKEmergencyCardTableItem.h>
#import <libobjc.A.dylib/HKMedicalIDEditorCellEditDelegate.h>

@class HKMedicalIDEditorPickerCell;

@interface HKEmergencyCardOrganDonorTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate> {

	HKMedicalIDEditorPickerCell* _editableCell;
	BOOL _isEditing;

}
-(id)possibleValues;
-(void)commitEditing;
-(id)title;
-(BOOL)hasPresentableData;
-(void)medicalIDEditorCellDidChangeValue:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2 ;
-(BOOL)shouldHighlightRowAtIndex:(long long)arg1 ;
-(BOOL)canEditRowAtIndex:(long long)arg1 ;
-(long long)editingStyleForRowAtIndex:(long long)arg1 ;
-(long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2 ;
-(void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2 ;
-(id)_createEditableCell;
-(void)promptOrganDonationRegistrationIfPossibleWithCompletion:(/*^block*/id)arg1 ;
@end
