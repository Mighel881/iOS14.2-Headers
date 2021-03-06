/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class UILabel, WFTextFieldTableItem, UIStackView, UITextField, NSString;

@interface WFTextFieldTableCell : UITableViewCell <UITextFieldDelegate> {

	UILabel* _textLabel;
	WFTextFieldTableItem* _tableItem;
	UIStackView* _stackView;
	UITextField* _textField;

}

@property (assign,nonatomic,__weak) WFTextFieldTableItem * tableItem;              //@synthesize tableItem=_tableItem - In the implementation block
@property (nonatomic,readonly) UIStackView * stackView;                            //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) UITextField * textField;                            //@synthesize textField=_textField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)textDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UITextField *)textField;
-(id)textLabel;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)prepareForReuse;
-(UIStackView *)stackView;
-(void)setTableItem:(WFTextFieldTableItem *)arg1 ;
-(WFTextFieldTableItem *)tableItem;
@end

