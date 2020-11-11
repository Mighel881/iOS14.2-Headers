/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UILabel, NSLayoutConstraint, NSString;

@interface WDHeartRhythmSectionHeaderView : UITableViewHeaderFooterView {

	UILabel* _titleLabel;
	NSLayoutConstraint* _bottomToTitleLastBaselineConstraint;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomToTitleLastBaselineConstraint;              //@synthesize bottomToTitleLastBaselineConstraint=_bottomToTitleLastBaselineConstraint - In the implementation block
@property (nonatomic,copy) NSString * titleText; 
+(id)defaultReuseIdentifier;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(void)setUpUI;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)updateConstraintConstants;
-(NSLayoutConstraint *)bottomToTitleLastBaselineConstraint;
-(void)setBottomToTitleLastBaselineConstraint:(NSLayoutConstraint *)arg1 ;
@end
