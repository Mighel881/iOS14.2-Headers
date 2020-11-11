/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UILabel, NSString, PKDashboardCreditAccountItem, PKSpendingSummaryChartView, UIFont;

@interface PKCreditActivityCell : PKDashboardCollectionViewCell {

	UILabel* _labelTitle;
	NSString* _title;
	BOOL _isCompactUI;
	BOOL _useAccssibilityLayout;
	PKDashboardCreditAccountItem* _item;
	PKSpendingSummaryChartView* _chartView;
	UIFont* _titleFont;

}

@property (nonatomic,retain) PKDashboardCreditAccountItem * item;                   //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) PKSpendingSummaryChartView * chartView;              //@synthesize chartView=_chartView - In the implementation block
@property (assign,nonatomic) BOOL useAccssibilityLayout;                            //@synthesize useAccssibilityLayout=_useAccssibilityLayout - In the implementation block
@property (nonatomic,retain) UIFont * titleFont;                                    //@synthesize titleFont=_titleFont - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(PKDashboardCreditAccountItem *)item;
-(void)setItem:(PKDashboardCreditAccountItem *)arg1 ;
-(PKSpendingSummaryChartView *)chartView;
-(void)layoutSubviews;
-(void)setTitleFont:(UIFont *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(void)_createSubviews;
-(BOOL)useAccssibilityLayout;
-(void)setUseAccssibilityLayout:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(UIFont *)titleFont;
@end
