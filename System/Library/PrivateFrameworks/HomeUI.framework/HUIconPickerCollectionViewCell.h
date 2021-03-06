/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class HUIconButton;

@interface HUIconPickerCollectionViewCell : UICollectionViewCell {

	HUIconButton* _iconButton;

}

@property (nonatomic,retain) HUIconButton * iconButton;                        //@synthesize iconButton=_iconButton - In the implementation block
@property (nonatomic,retain) id<HFIconDescriptor> iconDescriptor; 
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setIconDescriptor:(id<HFIconDescriptor>)arg1 ;
-(id<HFIconDescriptor>)iconDescriptor;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(HUIconButton *)iconButton;
-(void)setIconButton:(HUIconButton *)arg1 ;
@end

