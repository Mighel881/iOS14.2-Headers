/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIView;


@protocol MediaControlsCollectionItemViewController <NSObject>
@property (nonatomic,retain) UIView * backgroundView; 
@property (nonatomic,readonly) UIView * contentView; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@required
-(void)willTransitionToSize:(CGSize)arg1 withCoordinator:(id)arg2;
-(void)setSelected:(BOOL)arg1;
-(BOOL)isSelected;
-(void)setBackgroundView:(id)arg1;
-(UIView *)backgroundView;
-(UIView *)contentView;

@end
