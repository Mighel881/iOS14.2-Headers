/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SettingsCellularUI/SettingsCellularUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UIActivityIndicatorView, UILabel, UITextView, UIButton, UILayoutGuide, NSString;

@interface PSUICarrierItemsNotLoadedView : UIView <UITextViewDelegate, PSHeaderFooterView> {

	UIActivityIndicatorView* _spinner;
	UILabel* _titleLabel;
	UITextView* _linkTextView;
	UIButton* _retryButton;
	UILayoutGuide* _layoutGuide;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UITextView * linkTextView;                      //@synthesize linkTextView=_linkTextView - In the implementation block
@property (nonatomic,retain) UIButton * retryButton;                         //@synthesize retryButton=_retryButton - In the implementation block
@property (nonatomic,retain) UILayoutGuide * layoutGuide;                    //@synthesize layoutGuide=_layoutGuide - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)titleLabel;
-(UILayoutGuide *)layoutGuide;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setLayoutGuide:(UILayoutGuide *)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
-(id)initWithSpecifier:(id)arg1 ;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setLinkText:(id)arg1 url:(id)arg2 ;
-(UITextView *)linkTextView;
-(void)setLinkTextView:(UITextView *)arg1 ;
-(UIButton *)retryButton;
-(void)setRetryButton:(UIButton *)arg1 ;
@end

