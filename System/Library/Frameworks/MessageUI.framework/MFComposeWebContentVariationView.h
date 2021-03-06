/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFMailComposeHeaderView.h>

@class NSString, UIButton, UIView;

@interface MFComposeWebContentVariationView : MFMailComposeHeaderView {

	NSString* _selectedContentVariation;
	UIButton* _webContentVariableButton;
	UIView* _background;

}

@property (nonatomic,retain) UIButton * webContentVariableButton;                //@synthesize webContentVariableButton=_webContentVariableButton - In the implementation block
@property (nonatomic,retain) UIView * background;                                //@synthesize background=_background - In the implementation block
@property (nonatomic,readonly) NSString * selectedContentVariation;              //@synthesize selectedContentVariation=_selectedContentVariation - In the implementation block
-(UIView *)background;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackground:(UIView *)arg1 ;
-(void)layoutSubviews;
-(void)_flashBackground;
-(id)_generateActionsForTitles:(id)arg1 currentSelection:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(UIButton *)webContentVariableButton;
-(void)setupMenuItemTitles:(id)arg1 currentSelection:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)setSelectedContentVariationLabel:(id)arg1 ;
-(NSString *)selectedContentVariation;
-(void)setWebContentVariableButton:(UIButton *)arg1 ;
-(void)refreshPreferredContentSize;
@end

