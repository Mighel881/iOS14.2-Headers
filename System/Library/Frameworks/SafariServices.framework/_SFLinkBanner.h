/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariServices/SafariServices-Structs.h>
#import <SafariServices/_SFPinnableBanner.h>

@class UIView, NSLayoutConstraint, UIImageView, UILabel, _SFDimmingButton, NSString;

@interface _SFLinkBanner : _SFPinnableBanner {

	UIView* _separator;
	NSLayoutConstraint* _titleTopConstraint;
	NSLayoutConstraint* _messageTopConstraint;
	NSLayoutConstraint* _messageBottomConstraint;
	UIImageView* _icon;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	_SFDimmingButton* _openButton;
	/*^block*/id _openActionHandler;

}

@property (nonatomic,retain) UIImageView * icon;                         //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                     //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) NSString * messageLabelText; 
@property (nonatomic,retain) _SFDimmingButton * openButton;              //@synthesize openButton=_openButton - In the implementation block
@property (nonatomic,copy) id openActionHandler;                         //@synthesize openActionHandler=_openActionHandler - In the implementation block
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)messageLabel;
-(id)init;
-(UIImageView *)icon;
-(id)_titleLabelFont;
-(void)setIcon:(UIImageView *)arg1 ;
-(void)layoutSubviews;
-(void)contentSizeCategoryDidChange;
-(void)setDirectionalLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_open;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(id)_messageLabelFont;
-(void)setMessageLabelText:(NSString *)arg1 ;
-(NSString *)messageLabelText;
-(void)invalidateBannerLayout;
-(_SFDimmingButton *)openButton;
-(void)setOpenButton:(_SFDimmingButton *)arg1 ;
-(id)openActionHandler;
-(void)setOpenActionHandler:(id)arg1 ;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
@end

