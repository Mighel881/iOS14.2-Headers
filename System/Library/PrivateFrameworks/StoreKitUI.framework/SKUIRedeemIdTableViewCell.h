/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol SKUIRedeemIdTableViewCellDelegate;
@class UITextField, NSString;

@interface SKUIRedeemIdTableViewCell : UITableViewCell <UITextFieldDelegate> {

	id<SKUIRedeemIdTableViewCellDelegate> _delegate;
	UITextField* _textField;

}

@property (nonatomic,retain) UITextField * textField;                                            //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIRedeemIdTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)setKeyboardType:(long long)arg1 ;
-(id<SKUIRedeemIdTableViewCellDelegate>)delegate;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setDelegate:(id<SKUIRedeemIdTableViewCellDelegate>)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)setPlaceholderText:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(UITextField *)textField;
-(void)setReturnKeyType:(long long)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setTextField:(UITextField *)arg1 ;
-(void)_initializeTextField;
-(void)setAutoCapitalizationType:(long long)arg1 ;
@end
