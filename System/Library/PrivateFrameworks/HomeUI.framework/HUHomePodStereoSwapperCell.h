/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@protocol HUHomePodStereoSwapperCellDelegate;
@class UIButton, HUHomePodDetailView;

@interface HUHomePodStereoSwapperCell : UITableViewCell {

	UIButton* _swapButton;
	unsigned long long _homePodVariant;
	HUHomePodDetailView* _leftHomePod;
	HUHomePodDetailView* _rightHomePod;
	id<HUHomePodStereoSwapperCellDelegate> _delegate;

}

@property (nonatomic,retain) UIButton * swapButton;                                               //@synthesize swapButton=_swapButton - In the implementation block
@property (nonatomic,retain) HUHomePodDetailView * leftHomePod;                                   //@synthesize leftHomePod=_leftHomePod - In the implementation block
@property (nonatomic,retain) HUHomePodDetailView * rightHomePod;                                  //@synthesize rightHomePod=_rightHomePod - In the implementation block
@property (assign,nonatomic) unsigned long long homePodVariant;                                   //@synthesize homePodVariant=_homePodVariant - In the implementation block
@property (assign,nonatomic,__weak) id<HUHomePodStereoSwapperCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_setupConstraints;
-(void)_swap;
-(id<HUHomePodStereoSwapperCellDelegate>)delegate;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(unsigned long long)homePodVariant;
-(void)setHomePodVariant:(unsigned long long)arg1 ;
-(void)setDelegate:(id<HUHomePodStereoSwapperCellDelegate>)arg1 ;
-(void)finishSetupWithDelegate:(id)arg1 selectionStyle:(long long)arg2 homePodVariant:(unsigned long long)arg3 ;
-(UIButton *)swapButton;
-(HUHomePodDetailView *)leftHomePod;
-(HUHomePodDetailView *)rightHomePod;
-(void)setLeftHomePod:(HUHomePodDetailView *)arg1 ;
-(void)setRightHomePod:(HUHomePodDetailView *)arg1 ;
-(void)setSwapButton:(UIButton *)arg1 ;
@end

