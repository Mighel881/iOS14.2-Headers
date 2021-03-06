/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class HKSourceDataModel, UIImageView, UILabel;

@interface WDSourcesListTableViewCell : UITableViewCell {

	HKSourceDataModel* _sourceModel;
	UIImageView* _iconImage;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UIImageView * iconImage;                      //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) HKSourceDataModel * sourceModel;              //@synthesize sourceModel=_sourceModel - In the implementation block
+(id)defaultReuseIdentifier;
-(UILabel *)titleLabel;
-(UIImageView *)iconImage;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setIconImage:(UIImageView *)arg1 ;
-(void)setupConstraints;
-(HKSourceDataModel *)sourceModel;
-(void)setSourceModel:(HKSourceDataModel *)arg1 ;
-(void)prepareForReuse;
-(void)setUpSubviews;
-(void)_handleReturnedImage:(id)arg1 forSource:(id)arg2 fetchError:(id)arg3 ;
@end

