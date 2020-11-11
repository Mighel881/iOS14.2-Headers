/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIScrollView, NSArray, UIControl;


@protocol PLExpandedPlatter <PLPlatter>
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic) CGSize customContentSize; 
@property (nonatomic,retain) NSArray * interfaceActions; 
@property (assign,getter=isActionsHidden,nonatomic) BOOL actionsHidden; 
@property (nonatomic,readonly) UIControl * dismissControl; 
@property (nonatomic,readonly) UIEdgeInsets dismissControlInsets; 
@property (assign,nonatomic) long long dismissControlPosition; 
@property (assign,nonatomic) BOOL clipsVisibleContentToBounds; 
@property (assign,nonatomic) double contentBottomInset; 
@required
-(UIScrollView *)scrollView;
-(double)contentBottomInset;
-(void)setInterfaceActions:(id)arg1;
-(NSArray *)interfaceActions;
-(void)setCustomContentSize:(CGSize)arg1;
-(CGSize)customContentSize;
-(BOOL)clipsVisibleContentToBounds;
-(CGSize*)sizeExcludingActions;
-(CGSize*)contentSizeExcludingActions;
-(CGSize*)actionsSizeThatFits:(CGSize)arg1;
-(CGRect*)frameForPlatterFrame:(CGRect)arg1;
-(CGRect*)platterFrameForFrame:(CGRect)arg1;
-(CGRect*)scrollViewFrame;
-(UIEdgeInsets*)minimumScrollViewContentInsets;
-(BOOL)isActionsHidden;
-(void)setActionsHidden:(BOOL)arg1;
-(UIControl *)dismissControl;
-(UIEdgeInsets)dismissControlInsets;
-(long long)dismissControlPosition;
-(void)setDismissControlPosition:(long long)arg1;
-(void)setClipsVisibleContentToBounds:(BOOL)arg1;
-(void)setContentBottomInset:(double)arg1;

@end
