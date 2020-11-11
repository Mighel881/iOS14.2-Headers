/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class SBIconImageView, UILabel, PLPlatterView;

@interface SBSceneViewAppIconView : UIView {

	SBIconImageView* _imageView;
	UILabel* _label;
	PLPlatterView* _shadowView;

}

@property (nonatomic,readonly) UILabel * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) PLPlatterView * shadowView;               //@synthesize shadowView=_shadowView - In the implementation block
@property (nonatomic,readonly) SBIconImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(UILabel *)label;
-(void)layoutSubviews;
-(SBIconImageView *)imageView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(PLPlatterView *)shadowView;
-(id)initWithIcon:(id)arg1 ;
@end
