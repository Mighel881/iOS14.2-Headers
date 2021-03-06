/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSString, UIImage;

@interface VideosUI.TabItemCollectionViewCell : UICollectionViewCell {

	 cardItemLayout;
	 numberOfTabs;
	 debugName;
	 titleView;
	 imageView;

}

@property (copy,nonatomic) NSString * largeContentTitle; 
@property (retain,nonatomic) UIImage * largeContentImage; 
@property (assign,nonatomic) BOOL scalesLargeContentImage; 
-(void)setLargeContentTitle:(NSString *)arg1 ;
-(UIImage *)largeContentImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setScalesLargeContentImage:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)scalesLargeContentImage;
-(id)initWithCoder:(id)arg1 ;
-(void)setLargeContentImage:(UIImage *)arg1 ;
-(void)prepareForReuse;
-(NSString *)largeContentTitle;
@end

