/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol HKMedicalIDEditorCellEditDelegate;
@class UIStackView, UILabel, HKCaretOptionalTextField, UIView, NSString;

@interface HKMedicalIDEditorCell : UITableViewCell <UITextFieldDelegate> {

	double _minimumLabelWidth;
	id<HKMedicalIDEditorCellEditDelegate> _editDelegate;
	UIStackView* _stackView;
	UILabel* _labelLabel;
	HKCaretOptionalTextField* _inputTextField;
	UIView* _verticalSeparatorView;

}

@property (nonatomic,retain) UIStackView * stackView;                                                //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) UILabel * labelLabel;                                                   //@synthesize labelLabel=_labelLabel - In the implementation block
@property (nonatomic,retain) HKCaretOptionalTextField * inputTextField;                              //@synthesize inputTextField=_inputTextField - In the implementation block
@property (nonatomic,retain) UIView * verticalSeparatorView;                                         //@synthesize verticalSeparatorView=_verticalSeparatorView - In the implementation block
@property (assign,nonatomic) double minimumLabelWidth;                                               //@synthesize minimumLabelWidth=_minimumLabelWidth - In the implementation block
@property (nonatomic,copy) NSString * label; 
@property (assign,nonatomic,__weak) id<HKMedicalIDEditorCellEditDelegate> editDelegate;              //@synthesize editDelegate=_editDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)showsLabelAndValue;
-(id<HKMedicalIDEditorCellEditDelegate>)editDelegate;
-(NSString *)label;
-(void)setupSubviews;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)setupStackView;
-(void)commitEditing;
-(void)setEditDelegate:(id<HKMedicalIDEditorCellEditDelegate>)arg1 ;
-(id)formattedValue;
-(void)beginEditing;
-(void)setLabel:(NSString *)arg1 ;
-(UILabel *)labelLabel;
-(UIStackView *)stackView;
-(void)_localeDidChange:(id)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)dealloc;
-(HKCaretOptionalTextField *)inputTextField;
-(void)valueDidChange;
-(void)setLabelLabel:(UILabel *)arg1 ;
-(void)setInputTextField:(HKCaretOptionalTextField *)arg1 ;
-(void)setVerticalSeparatorView:(UIView *)arg1 ;
-(UIView *)verticalSeparatorView;
-(void)updateValueLabel;
-(void)dismissInputView;
-(double)minimumLabelWidth;
-(void)setMinimumLabelWidth:(double)arg1 ;
@end
