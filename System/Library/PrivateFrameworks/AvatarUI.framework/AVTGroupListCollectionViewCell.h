/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSString, UIVisualEffectView, UILabel, UIImageView;

@interface AVTGroupListCollectionViewCell : UICollectionViewCell {

	NSString* _title;
	NSString* _symbolName;
	UIVisualEffectView* _visualEffectView;
	UILabel* _label;
	UIImageView* _imageView;

}

@property (nonatomic,readonly) UIVisualEffectView * visualEffectView;              //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,readonly) UILabel * label;                                    //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                            //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,copy) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * symbolName;                                  //@synthesize symbolName=_symbolName - In the implementation block
+(id)highlightedBackgroundColor;
+(id)cellIdentifier;
+(id)defaultSymbolImageName;
-(UIVisualEffectView *)visualEffectView;
-(void)setSelected:(BOOL)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(UILabel *)label;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(NSString *)symbolName;
-(void)setSymbolName:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setupContent;
-(double)estimatedLabelWidthForContainerWidth:(double)arg1 ;
@end

