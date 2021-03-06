/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, UIView;

@interface HUClipScrubberAccessoryToggleView : UIView {

	UIButton* _accessoryButton;
	UIButton* _liveButton;
	UIView* _backgroundView;

}

@property (nonatomic,retain) UIButton * accessoryButton;              //@synthesize accessoryButton=_accessoryButton - In the implementation block
@property (nonatomic,retain) UIButton * liveButton;                   //@synthesize liveButton=_liveButton - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                 //@synthesize backgroundView=_backgroundView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)setAccessoryButton:(UIButton *)arg1 ;
-(UIButton *)accessoryButton;
-(UIButton *)liveButton;
-(void)setLiveButton:(UIButton *)arg1 ;
-(void)displayForTimelineState:(unsigned long long)arg1 ;
-(void)displayWithoutBackgroundVisualEffects;
@end

