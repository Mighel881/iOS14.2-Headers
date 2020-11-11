/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSearchZeroKeywordCollectionViewCell.h>

@class UIView;

@interface PXPeopleZeroKeywordCollectionViewCell : PXSearchZeroKeywordCollectionViewCell {

	UIView* _peopleContentView;

}

@property (nonatomic,retain) UIView * peopleContentView;              //@synthesize peopleContentView=_peopleContentView - In the implementation block
+(id)reuseIdentifier;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(void)setPeople:(id)arg1 withThumbnailSize:(CGSize)arg2 ;
-(UIView *)peopleContentView;
-(void)setPeopleContentView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
@end
