/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthRecordsUI/WDMedicalRecordGroupableCell.h>

@class NSString, UILabel, UIView, NSLayoutConstraint;

@interface WDMedicalRecordTimelineContentSubtitleCell : WDMedicalRecordGroupableCell {

	NSString* _titleString;
	NSString* _subtitleString;
	BOOL _showDisclosureIndicator;
	BOOL _useRegularFontForSubtitle;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIView* _disclosureChevronView;
	NSLayoutConstraint* _titlePillConstraint;
	NSLayoutConstraint* _titleChevronConstraint;

}

@property (nonatomic,retain) UILabel * titleLabel;                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                  //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIView * disclosureChevronView;                           //@synthesize disclosureChevronView=_disclosureChevronView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titlePillConstraint;                 //@synthesize titlePillConstraint=_titlePillConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleChevronConstraint;              //@synthesize titleChevronConstraint=_titleChevronConstraint - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (assign,nonatomic) BOOL showDisclosureIndicator;                             //@synthesize showDisclosureIndicator=_showDisclosureIndicator - In the implementation block
@property (assign,nonatomic) BOOL useRegularFontForSubtitle;                           //@synthesize useRegularFontForSubtitle=_useRegularFontForSubtitle - In the implementation block
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setupSubviews;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setShowDisclosureIndicator:(BOOL)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(BOOL)showDisclosureIndicator;
-(BOOL)useRegularFontForSubtitle;
-(void)setUseRegularFontForSubtitle:(BOOL)arg1 ;
-(UILabel *)subtitleLabel;
-(UIView *)disclosureChevronView;
-(NSString *)title;
-(void)setTitlePillConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitleChevronConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)titlePillConstraint;
-(NSLayoutConstraint *)titleChevronConstraint;
-(void)setTitle:(NSString *)arg1 ;
-(void)setDisclosureChevronView:(UIView *)arg1 ;
@end

