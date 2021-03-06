/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthRecordsUI/WDMedicalRecordGroupableCell.h>

@class UIImage, NSString, UIColor;

@interface HRConceptHeaderCell : WDMedicalRecordGroupableCell {

	 titleLabel;
	 chevronView;
	 $__lazy_storage_$_bottomConstraint;
	 headerImage;
	 title;
	 categoryColor;

}

@property (retain,nonatomic) UIImage * headerImage; 
@property (copy,nonatomic) NSString * title; 
@property (retain,nonatomic) UIColor * categoryColor; 
@property (assign,nonatomic) long long intendedPlacement; 
+(id)defaultReuseIdentifier;
-(void)setupSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIImage *)headerImage;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setHeaderImage:(UIImage *)arg1 ;
-(void)_updateForCurrentSizeCategory;
-(NSString *)title;
-(id)initWithCoder:(id)arg1 ;
-(void)setIntendedPlacement:(long long)arg1 ;
-(void)setCategoryColor:(UIColor *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(long long)intendedPlacement;
-(UIColor *)categoryColor;
-(void)setUpConstraints;
@end

