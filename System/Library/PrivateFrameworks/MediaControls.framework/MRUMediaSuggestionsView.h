/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>

@class UICollectionViewCompositionalLayout, UICollectionView;

@interface MRUMediaSuggestionsView : UIView {

	BOOL _supportsHorizontalLayout;
	UICollectionViewCompositionalLayout* _collectionViewLayout;
	UICollectionView* _collectionView;
	long long _layout;
	UIEdgeInsets _contentEdgeInsets;

}

@property (nonatomic,readonly) UICollectionViewCompositionalLayout * collectionViewLayout;              //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                         //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) long long layout;                                                          //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) BOOL supportsHorizontalLayout;                                             //@synthesize supportsHorizontalLayout=_supportsHorizontalLayout - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                                            //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
-(void)updateLayout;
-(UIEdgeInsets)contentEdgeInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLayout:(long long)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(long long)numberOfColumns;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)numberOfRows;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(long long)layout;
-(UICollectionViewCompositionalLayout *)collectionViewLayout;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setSupportsHorizontalLayout:(BOOL)arg1 ;
-(BOOL)supportsHorizontalLayout;
-(double)itemWidthForWidth:(double)arg1 ;
-(double)itemHeightForItemWidth:(double)arg1 ;
@end

