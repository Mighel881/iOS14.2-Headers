/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UICollectionViewCell.h>

@class UIViewController, VUISeparatorView;

@interface VUILibraryCollectionViewCell : UICollectionViewCell {

	UIViewController* _viewController;
	VUISeparatorView* _topSeparatorView;

}

@property (nonatomic,retain) UIViewController * viewController;                //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) VUISeparatorView * topSeparatorView;              //@synthesize topSeparatorView=_topSeparatorView - In the implementation block
-(VUISeparatorView *)topSeparatorView;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setTopSeparatorView:(VUISeparatorView *)arg1 ;
@end
