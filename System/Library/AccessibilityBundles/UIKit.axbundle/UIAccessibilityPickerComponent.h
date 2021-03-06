/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class UIPickerView;

@interface UIAccessibilityPickerComponent : UIAccessibilityElement {

	unsigned long long _component;
	UIPickerView* _picker;

}

@property (assign,nonatomic) unsigned long long component;              //@synthesize component=_component - In the implementation block
@property (assign,nonatomic,__weak) UIPickerView * picker;              //@synthesize picker=_picker - In the implementation block
-(id)accessibilityLabel;
-(UIPickerView *)picker;
-(BOOL)canBecomeFocused;
-(unsigned long long)component;
-(void)setComponent:(unsigned long long)arg1 ;
-(long long)_accessibilityIndexForPickerString:(id)arg1 ;
-(long long)_accessibilityPickerType;
-(unsigned long long)_accessibilityDatePickerComponentType;
-(id)_accessibilityDateTimePickerValues;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityUserInputLabels;
-(void)setPicker:(UIPickerView *)arg1 ;
-(CGRect)accessibilityFrame;
-(NSRange)accessibilityRowRange;
-(unsigned long long)_accessibilityAutomationType;
-(double)_accessibilityNumberValue;
-(BOOL)_accessibilitySetNativeFocus;
-(id)accessibilityHint;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(BOOL)_accessibilityIsSpeakThisElement;
-(id)accessibilityValue;
-(id)_accessibilityUserTestingChildren;
-(id)_accessibilityScrollStatus;
-(BOOL)_axIsInDatePickerView;
-(id)_accessibilityViewForComponent;
-(BOOL)_isRowDisabledInWebKit:(long long)arg1 ;
-(void)_accessibilityMoveSelection:(long long)arg1 ;
-(id)_axSpeechInputLabelForTimeIntervalCalendarUnit:(unsigned long long)arg1 ;
-(id)_axSpeechInputLabelForDateCalendarUnit:(unsigned long long)arg1 ;
@end

