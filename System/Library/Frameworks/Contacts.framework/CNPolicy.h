/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CNPolicy : NSObject

@property (getter=isReadonly,nonatomic,readonly) BOOL readonly; 
-(unsigned long long)_cnui_maximumNumberOfValuesForProperty:(id)arg1 ;
-(BOOL)shouldAddContact:(id)arg1 ;
-(unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 ;
-(BOOL)shouldSetValue:(id)arg1 property:(id)arg2 contact:(id)arg3 replacementValue:(id*)arg4 ;
-(unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2 ;
-(BOOL)shouldRemoveContact:(id)arg1 ;
-(BOOL)isReadonly;
-(id)unsupportedAttributesForLableledContactProperty:(id)arg1 ;
-(BOOL)isContactPropertySupported:(id)arg1 ;
-(BOOL)_validateLabeledValueArrayLabels:(id)arg1 forContactProperty:(id)arg2 replacementValue:(id*)arg3 ;
-(BOOL)_validateLabeledValueArrayAttributeSupport:(id)arg1 forContactProperty:(id)arg2 replacementValue:(id*)arg3 ;
-(id)_replacementLabeledValue:(id)arg1 omittingKeys:(id)arg2 ;
-(id)supportedLabelsForContactProperty:(id)arg1 ;
@end
