/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PKWatchHeroImageView, UIView, PKPaymentPass, UIImageView, UILabel, PKContinuousButton;

@interface PKAddToWatchOfferView : UIView {

	PKWatchHeroImageView* _heroImageView;
	UIView* _backgroundView;
	CGSize _aspectSize;
	BOOL _isCompactWatch;
	PKPaymentPass* _pass;
	long long _context;
	UIImageView* _passImageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	PKContinuousButton* _openAppButton;

}

@property (nonatomic,readonly) PKPaymentPass * pass;                            //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) long long context;                               //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) UIImageView * passImageView;                     //@synthesize passImageView=_passImageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                         //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) PKContinuousButton * openAppButton;              //@synthesize openAppButton=_openAppButton - In the implementation block
-(UILabel *)titleLabel;
-(id)initWithPaymentPass:(id)arg1 context:(long long)arg2 ;
-(PKContinuousButton *)openAppButton;
-(UILabel *)subtitleLabel;
-(double)_sideMargin;
-(long long)context;
-(BOOL)_isSmallPhone;
-(void)layoutSubviews;
-(void)showSpinner:(BOOL)arg1 ;
-(PKPaymentPass *)pass;
-(UIImageView *)passImageView;
@end
