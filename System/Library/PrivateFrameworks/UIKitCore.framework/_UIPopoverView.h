/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIPopoverBackgroundView, UIImageView, UIActionSheet, UIPopoverController, UIColor;

@interface _UIPopoverView : UIView {

	UIView* _contentView;
	UIPopoverBackgroundView* _backgroundView;
	Class _backgroundViewClass;
	UIImageView* _toolbarShine;
	BOOL _showsBackgroundComponentHighlights;
	BOOL _showsBackgroundViewHighlight;
	BOOL _showsContentViewHighlight;
	BOOL _contentExtendsOverArrow;
	BOOL _chromeHidden;
	UIActionSheet* _presentedActionSheet;
	UIPopoverController* _popoverController;

}

@property (assign,nonatomic) BOOL showsBackgroundComponentHighlights;              //@synthesize showsBackgroundComponentHighlights=_showsBackgroundComponentHighlights - In the implementation block
@property (assign,nonatomic) BOOL showsBackgroundViewHighlight;                    //@synthesize showsBackgroundViewHighlight=_showsBackgroundViewHighlight - In the implementation block
@property (assign,nonatomic) BOOL showsContentViewHighlight;                       //@synthesize showsContentViewHighlight=_showsContentViewHighlight - In the implementation block
@property (nonatomic,readonly) BOOL contentExtendsOverArrow;                       //@synthesize contentExtendsOverArrow=_contentExtendsOverArrow - In the implementation block
@property (assign,nonatomic) double arrowOffset; 
@property (assign,nonatomic) unsigned long long arrowDirection; 
@property (assign,nonatomic) long long backgroundStyle; 
@property (nonatomic,copy) UIColor * popoverBackgroundColor; 
@property (nonatomic,copy) UIColor * arrowBackgroundColor; 
@property (assign,nonatomic) BOOL chromeHidden;                                    //@synthesize chromeHidden=_chromeHidden - In the implementation block
@property (nonatomic,retain) UIActionSheet * presentedActionSheet;                 //@synthesize presentedActionSheet=_presentedActionSheet - In the implementation block
@property (assign,nonatomic) UIPopoverController * popoverController;              //@synthesize popoverController=_popoverController - In the implementation block
+(id)popoverViewContainingView:(id)arg1 ;
-(int)_style;
-(id)_traitCollectionForChildEnvironment:(id)arg1 ;
-(UIColor *)popoverBackgroundColor;
-(id)initWithFrame:(CGRect)arg1 backgroundViewClass:(Class)arg2 embeddedInView:(BOOL)arg3 contentExtendsOverArrow:(BOOL)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(id)backgroundView;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)standardChromeView;
-(void)_layoutToolbarShine;
-(void)_performBlockCheckingDefinesTintColor:(/*^block*/id)arg1 ;
-(id)toolbarShine;
-(void)setPresentedActionSheet:(UIActionSheet *)arg1 ;
-(BOOL)_allowsCustomizationOfContent;
-(BOOL)showsBackgroundComponentHighlights;
-(void)setShowsBackgroundComponentHighlights:(BOOL)arg1 ;
-(BOOL)showsBackgroundViewHighlight;
-(void)setShowsBackgroundViewHighlight:(BOOL)arg1 ;
-(BOOL)showsContentViewHighlight;
-(void)setShowsContentViewHighlight:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)_snapshotBounds;
-(void)setPopoverController:(UIPopoverController *)arg1 ;
-(void)_setFrame:(CGRect)arg1 arrowOffset:(double)arg2 ;
-(void)_hideArrow;
-(void)_showArrow;
-(void)setUseToolbarShine:(BOOL)arg1 ;
-(void)setPopoverBackgroundColor:(UIColor *)arg1 ;
-(void)_setPopoverContentView:(id)arg1 ;
-(UIColor *)arrowBackgroundColor;
-(void)setArrowBackgroundColor:(UIColor *)arg1 ;
-(void)setArrowDirection:(unsigned long long)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)contentExtendsOverArrow;
-(BOOL)chromeHidden;
-(UIActionSheet *)presentedActionSheet;
-(id)initWithFrame:(CGRect)arg1 backgroundViewClass:(Class)arg2 ;
-(UIEdgeInsets)safeAreaInsetsForContentView;
-(double)arrowOffset;
-(long long)backgroundStyle;
-(UIPopoverController *)popoverController;
-(id)_normalInheritedTintColor;
-(void)_setCornerRadius:(double)arg1 ;
-(BOOL)_definesTintColor;
-(id)contentView;
-(unsigned long long)arrowDirection;
-(void)setArrowOffset:(double)arg1 ;
-(void)setChromeHidden:(BOOL)arg1 ;
-(BOOL)_needsLayoutOnAnimatedFrameChangeForNewFrame:(CGRect)arg1 ;
@end

