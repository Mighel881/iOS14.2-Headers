/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UICollectionViewCell.h>

@class NSArray, VideosExtrasStackTemplateViewController, VideosExtrasGridElementViewController, VideosExtrasGridSectionHeaderStyle;

@interface VideosExtrasStackCollectionCell : UICollectionViewCell {

	NSArray* _fitConstraints;
	BOOL _needsViewWillAppear;
	VideosExtrasStackTemplateViewController* _parentViewController;
	VideosExtrasGridElementViewController* _viewController;
	VideosExtrasGridSectionHeaderStyle* _sectionStyle;

}

@property (nonatomic,retain) VideosExtrasStackTemplateViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,retain) VideosExtrasGridElementViewController * viewController;                      //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) VideosExtrasGridSectionHeaderStyle * sectionStyle;                         //@synthesize sectionStyle=_sectionStyle - In the implementation block
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setViewController:(VideosExtrasGridElementViewController *)arg1 ;
-(VideosExtrasGridElementViewController *)viewController;
-(VideosExtrasStackTemplateViewController *)parentViewController;
-(void)setParentViewController:(VideosExtrasStackTemplateViewController *)arg1 ;
-(VideosExtrasGridSectionHeaderStyle *)sectionStyle;
@end

