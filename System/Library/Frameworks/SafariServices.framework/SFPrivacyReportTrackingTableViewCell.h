/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class SFPrivacyReportMeterBar, UILabel, UILayoutGuide, NSLayoutConstraint, NSNumberFormatter;

@interface SFPrivacyReportTrackingTableViewCell : UITableViewCell {

	SFPrivacyReportMeterBar* _countMeter;
	UILabel* _maxCountLabel;
	UILayoutGuide* _maxCountMeterGuide;
	NSLayoutConstraint* _countMeterWidthConstraint;
	NSNumberFormatter* _countFormatter;
	UILabel* _domainLabel;
	UILabel* _domainDetailLabel;
	UILabel* _countLabel;
	double _count;
	double _maxCount;

}

@property (nonatomic,readonly) UILabel * domainLabel;                    //@synthesize domainLabel=_domainLabel - In the implementation block
@property (nonatomic,readonly) UILabel * domainDetailLabel;              //@synthesize domainDetailLabel=_domainDetailLabel - In the implementation block
@property (nonatomic,readonly) UILabel * countLabel;                     //@synthesize countLabel=_countLabel - In the implementation block
@property (assign,nonatomic) double count;                               //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) double maxCount;                            //@synthesize maxCount=_maxCount - In the implementation block
-(double)maxCount;
-(void)setCount:(double)arg1 ;
-(void)setMaxCount:(double)arg1 ;
-(double)count;
-(UILabel *)countLabel;
-(UILabel *)domainLabel;
-(void)_updateCountViews;
-(id)initWithDetailLabel:(BOOL)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)domainDetailLabel;
@end

