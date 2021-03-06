/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>
#import <UIKit/UIContextMenuInteractionDelegate_Private.h>
#import <UIKit/UIPointerInteractionDelegate.h>
#import <UIKitCore/_UIDatePickerViewComponent.h>

@class NSDateFormatter, UIView, _UIDatePickerLinkedLabel, UILabel, UILayoutGuide, NSArray, UIPointerInteraction, UIDatePicker, _UIDatePickerDataModel, NSString, UIColor;

@interface _UIDatePickerIOSCompactView : UIControl <UIContextMenuInteractionDelegate, UIContextMenuInteractionDelegate_Private, UIPointerInteractionDelegate, _UIDatePickerViewComponent> {

	SCD_Struct_UI34 _flags;
	NSDateFormatter* _dateFormatterMedium;
	NSDateFormatter* _dateFormatterShort;
	UIView* _dateView;
	UIView* _dateBackgroundPlatter;
	_UIDatePickerLinkedLabel* _dateLabel;
	NSDateFormatter* _timeFormatter;
	UIView* _timeView;
	UIView* _timeBackgroundPlatter;
	UILabel* _timeLabel;
	UILayoutGuide* _timeViewLayoutGuide;
	NSDateFormatter* _layoutFormatter;
	BOOL _dateOnLeadingSide;
	NSArray* _dateTimeConstraints;
	UIPointerInteraction* _pointerInteraction;
	UIDatePicker* _datePicker;
	_UIDatePickerDataModel* _data;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) UIDatePicker * datePicker;                                                                                          //@synthesize datePicker=_datePicker - In the implementation block
@property (nonatomic,retain) _UIDatePickerDataModel * data;                                                                                             //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) long long datePickerStyle; 
@property (assign,setter=_setAllowsZeroCountDownDuration:,getter=_allowsZeroCountDownDuration,nonatomic) BOOL allowsZeroCountDownDuration; 
@property (assign,setter=_setAllowsZeroTimeInterval:,getter=_allowsZeroTimeInterval,nonatomic) BOOL allowsZeroTimeInterval; 
@property (getter=_isTimeIntervalMode,nonatomic,readonly) BOOL isTimeIntervalMode; 
@property (assign,nonatomic) double timeInterval; 
@property (nonatomic,readonly) double contentWidth; 
@property (setter=_setHighlightColor:,getter=_highlightColor,nonatomic,retain) UIColor * highlightColor; 
@property (setter=_setTextColor:,getter=_textColor,nonatomic,retain) UIColor * textColor; 
@property (setter=_setTextShadowColor:,getter=_textShadowColor,nonatomic,retain) UIColor * textShadowColor; 
@property (setter=_setMagnifierLineColor:,getter=_magnifierLineColor,nonatomic,retain) UIColor * magnifierLineColor; 
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2 ;
-(void)tintColorDidChange;
-(void)didReset;
-(void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setData:(_UIDatePickerDataModel *)arg1 ;
-(id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2 ;
-(void)_updateDateBeforeTimeValue;
-(id)_targetedPreviewForContextMenu;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3 ;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(UIDatePicker *)datePicker;
-(CGSize)defaultSize;
-(void)_setAllowsZeroCountDownDuration:(BOOL)arg1 ;
-(_UIDatePickerDataModel *)data;
-(void)_setEnabled:(BOOL)arg1 ;
-(void)_updateUI;
-(void)didChangeMode;
-(void)didChangeDateFrom:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setAllowsZeroTimeInterval:(BOOL)arg1 ;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(void)didChangeLocale;
-(long long)datePickerStyle;
-(BOOL)_allowsZeroCountDownDuration;
-(void)didChangeToday;
-(BOOL)hasDefaultSize;
-(CGSize)_sizeThatFits:(CGSize)arg1 ;
-(void)setDatePicker:(UIDatePicker *)arg1 ;
-(BOOL)usesAutoLayout;
-(void)_setHidesLabels:(BOOL)arg1 ;
-(void)didChangeMinimumDate;
-(void)didChangeTimeZone;
-(void)didChangeMaximumDate;
-(void)didChangeCalendar;
-(void)didChangeMinuteInterval;
-(BOOL)_allowsZeroTimeInterval;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(BOOL)_isTimeIntervalMode;
-(void)_updateEnabledStyling;
-(void)updateConstraints;
@end

