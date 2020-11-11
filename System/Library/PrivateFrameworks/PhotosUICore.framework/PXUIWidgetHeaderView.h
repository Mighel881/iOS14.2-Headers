/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PXUIWidgetHeaderViewDelegate;
@class NSString, UIColor, UIFont, NSArray, UILabel, UIButton, UIVisualEffectView;

@interface PXUIWidgetHeaderView : UIView {

	BOOL _isPerformingChanges;
	BOOL _isPerformingUpdates;
	SCD_Struct_PX51 _needsUpdateFlags;
	SCD_Struct_PX59 _delegateRespondsTo;
	BOOL _allowUserInteractionWithSubtitle;
	BOOL _allowUserInteractionWithCaption;
	BOOL __hasContent;
	id<PXUIWidgetHeaderViewDelegate> _delegate;
	NSString* _title;
	NSString* _subtitle;
	NSString* _caption;
	UIColor* _textColor;
	UIFont* _primaryFont;
	UIFont* _secondaryFont;
	long long _layoutStyle;
	double _minimumDistanceBetweenTopAndFirstBaseline;
	double _distanceBetweenTitleBaselineAndSubtitleBaseline;
	double _horizontalSpacingBetweenTitleAndSubtitle;
	double _minimumDistanceBetweenLastBaselineAndBottom;
	NSArray* __constraints;
	double __currentHeight;
	UILabel* __titleLabel;
	UILabel* __subtitleLabel;
	UIButton* __subtitleButton;
	UILabel* __captionLabel;
	UIButton* __captionButton;
	UIVisualEffectView* __visualEffectView;
	UIEdgeInsets _contentInsets;

}

@property (assign,setter=_setHasContent:,nonatomic) BOOL _hasContent;                             //@synthesize _hasContent=__hasContent - In the implementation block
@property (setter=_setConstraints:,nonatomic,copy) NSArray * _constraints;                        //@synthesize _constraints=__constraints - In the implementation block
@property (assign,setter=_setCurrentHeight:,nonatomic) double _currentHeight;                     //@synthesize _currentHeight=__currentHeight - In the implementation block
@property (nonatomic,readonly) UILabel * _titleLabel;                                             //@synthesize _titleLabel=__titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * _subtitleLabel;                                          //@synthesize _subtitleLabel=__subtitleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * _subtitleButton;                                        //@synthesize _subtitleButton=__subtitleButton - In the implementation block
@property (nonatomic,readonly) UILabel * _captionLabel;                                           //@synthesize _captionLabel=__captionLabel - In the implementation block
@property (nonatomic,readonly) UIButton * _captionButton;                                         //@synthesize _captionButton=__captionButton - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * _visualEffectView;                            //@synthesize _visualEffectView=__visualEffectView - In the implementation block
@property (assign,nonatomic,__weak) id<PXUIWidgetHeaderViewDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * title;                                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                                   //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * caption;                                                    //@synthesize caption=_caption - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                                 //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIFont * primaryFont;                                                //@synthesize primaryFont=_primaryFont - In the implementation block
@property (nonatomic,retain) UIFont * secondaryFont;                                              //@synthesize secondaryFont=_secondaryFont - In the implementation block
@property (assign,nonatomic) BOOL allowUserInteractionWithSubtitle;                               //@synthesize allowUserInteractionWithSubtitle=_allowUserInteractionWithSubtitle - In the implementation block
@property (assign,nonatomic) BOOL allowUserInteractionWithCaption;                                //@synthesize allowUserInteractionWithCaption=_allowUserInteractionWithCaption - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                               //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                          //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) double minimumDistanceBetweenTopAndFirstBaseline;                    //@synthesize minimumDistanceBetweenTopAndFirstBaseline=_minimumDistanceBetweenTopAndFirstBaseline - In the implementation block
@property (assign,nonatomic) double distanceBetweenTitleBaselineAndSubtitleBaseline;              //@synthesize distanceBetweenTitleBaselineAndSubtitleBaseline=_distanceBetweenTitleBaselineAndSubtitleBaseline - In the implementation block
@property (assign,nonatomic) double horizontalSpacingBetweenTitleAndSubtitle;                     //@synthesize horizontalSpacingBetweenTitleAndSubtitle=_horizontalSpacingBetweenTitleAndSubtitle - In the implementation block
@property (assign,nonatomic) double minimumDistanceBetweenLastBaselineAndBottom;                  //@synthesize minimumDistanceBetweenLastBaselineAndBottom=_minimumDistanceBetweenLastBaselineAndBottom - In the implementation block
-(NSArray *)_constraints;
-(void)_setConstraints:(id)arg1 ;
-(void)setLayoutStyle:(long long)arg1 ;
-(BOOL)_hasContent;
-(UIEdgeInsets)contentInsets;
-(id<PXUIWidgetHeaderViewDelegate>)delegate;
-(long long)layoutStyle;
-(void)_setHasContent:(BOOL)arg1 ;
-(void)_invalidateHasContent;
-(void)_updateHasContentIfNeeded;
-(NSString *)subtitle;
-(void)_invalidateSubtitle;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setDistanceBetweenTitleBaselineAndSubtitleBaseline:(double)arg1 ;
-(UIFont *)primaryFont;
-(UIColor *)textColor;
-(void)_updateTitleIfNeeded;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)_updateIfNeeded;
-(void)setDelegate:(id<PXUIWidgetHeaderViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(BOOL)_hasSubtitle;
-(void)setPrimaryFont:(UIFont *)arg1 ;
-(UIFont *)secondaryFont;
-(void)setSecondaryFont:(UIFont *)arg1 ;
-(void)setAllowUserInteractionWithCaption:(BOOL)arg1 ;
-(void)setMinimumDistanceBetweenTopAndFirstBaseline:(double)arg1 ;
-(void)setMinimumDistanceBetweenLastBaselineAndBottom:(double)arg1 ;
-(id)_visualEffectViewCreateIfNeeded:(BOOL)arg1 ;
-(id)_titleLabelCreateIfNeeded:(BOOL)arg1 ;
-(double)horizontalSpacingBetweenTitleAndSubtitle;
-(void)setHorizontalSpacingBetweenTitleAndSubtitle:(double)arg1 ;
-(id)_subtitleLabelCreateIfNeeded:(BOOL)arg1 ;
-(id)_subtitleButtonCreateIfNeeded:(BOOL)arg1 ;
-(id)_captionLabelCreateIfNeeded:(BOOL)arg1 ;
-(id)_captionButtonCreateIfNeeded:(BOOL)arg1 ;
-(BOOL)_canComposeTitleWithSubtitle;
-(void)_handleSubtitleButton:(id)arg1 ;
-(void)_handleCaptionButton:(id)arg1 ;
-(void)_updateSubtitleIfNeeded;
-(void)_invalidateCaption;
-(void)_updateCaptionIfNeeded;
-(BOOL)allowUserInteractionWithCaption;
-(double)minimumDistanceBetweenTopAndFirstBaseline;
-(double)minimumDistanceBetweenLastBaselineAndBottom;
-(double)_currentHeight;
-(void)_setCurrentHeight:(double)arg1 ;
-(UIButton *)_subtitleButton;
-(UIButton *)_captionButton;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_invalidateTitle;
-(NSString *)title;
-(double)distanceBetweenTitleBaselineAndSubtitleBaseline;
-(BOOL)_needsUpdate;
-(void)setCaption:(NSString *)arg1 ;
-(UILabel *)_titleLabel;
-(void)setTitle:(NSString *)arg1 ;
-(UIVisualEffectView *)_visualEffectView;
-(UILabel *)_captionLabel;
-(NSString *)caption;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)_setNeedsUpdate;
-(void)setAllowUserInteractionWithSubtitle:(BOOL)arg1 ;
-(UILabel *)_subtitleLabel;
-(BOOL)_hasAccessibilityLargeText;
-(BOOL)allowUserInteractionWithSubtitle;
@end
