/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class UILabel, UIStackView, UIImageView;

@interface HUChevronButton : UIControl {

	UILabel* _titleLabel;
	UIStackView* _containerView;
	UIImageView* _chevronImageView;

}

@property (nonatomic,retain) UIStackView * containerView;                 //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * chevronImageView;              //@synthesize chevronImageView=_chevronImageView - In the implementation block
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)viewForLastBaselineLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)viewForFirstBaselineLayout;
-(UIStackView *)containerView;
-(UIImageView *)chevronImageView;
-(void)setContainerView:(UIStackView *)arg1 ;
-(void)setChevronImageView:(UIImageView *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

