/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PXUIWidgetFooterViewDelegate;
@class NSString, UIFont, NSArray, UIButton, UIView, UIFocusGuide;

@interface PXUIWidgetFooterView : UIView {

	BOOL _isPerformingChanges;
	BOOL _isPerformingUpdates;
	struct {
		BOOL hasContent;
		BOOL disclosure;
		BOOL separators;
		BOOL focusGuide;
	}  _needsUpdateFlags;
	SCD_Struct_PX38 _delegateRespondsTo;
	BOOL __hasContent;
	id<PXUIWidgetFooterViewDelegate> _delegate;
	NSString* _disclosureTitle;
	UIFont* _font;
	long long _layoutStyle;
	NSArray* __constraints;
	UIButton* __disclosureButton;
	UIView* __leadingSeparator;
	UIView* __trailingSeparator;
	UIFocusGuide* __focusGuide;
	UIEdgeInsets _contentInsets;

}

@property (assign,setter=_setHasContent:,nonatomic) BOOL _hasContent;                       //@synthesize _hasContent=__hasContent - In the implementation block
@property (setter=_setConstraints:,nonatomic,copy) NSArray * _constraints;                  //@synthesize _constraints=__constraints - In the implementation block
@property (nonatomic,readonly) UIButton * _disclosureButton;                                //@synthesize _disclosureButton=__disclosureButton - In the implementation block
@property (nonatomic,readonly) UIView * _leadingSeparator;                                  //@synthesize _leadingSeparator=__leadingSeparator - In the implementation block
@property (nonatomic,readonly) UIView * _trailingSeparator;                                 //@synthesize _trailingSeparator=__trailingSeparator - In the implementation block
@property (nonatomic,readonly) UIFocusGuide * _focusGuide;                                  //@synthesize _focusGuide=__focusGuide - In the implementation block
@property (assign,nonatomic,__weak) id<PXUIWidgetFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * disclosureTitle;                                      //@synthesize disclosureTitle=_disclosureTitle - In the implementation block
@property (nonatomic,retain) UIFont * font;                                                 //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                         //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                    //@synthesize contentInsets=_contentInsets - In the implementation block
-(NSArray *)_constraints;
-(void)_setConstraints:(id)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setLayoutStyle:(long long)arg1 ;
-(BOOL)_hasContent;
-(void)tintColorDidChange;
-(UIEdgeInsets)contentInsets;
-(id<PXUIWidgetFooterViewDelegate>)delegate;
-(long long)layoutStyle;
-(UIButton *)_disclosureButton;
-(id)_disclosureButtonCreateIfNeeded:(BOOL)arg1 ;
-(id)_leadingSeparatorCreateIfNeeded:(BOOL)arg1 ;
-(void)_setHasContent:(BOOL)arg1 ;
-(id)_trailingSeparatorCreateIfNeeded:(BOOL)arg1 ;
-(id)_focusGuideCreateIfNeeded:(BOOL)arg1 ;
-(void)_handleDisclosureButton:(id)arg1 ;
-(void)_invalidateHasContent;
-(void)_updateHasContentIfNeeded;
-(void)_invalidateDisclosure;
-(void)_updateDisclosureIfNeeded;
-(void)_invalidateSeparators;
-(void)_updateSeparatorsIfNeeded;
-(void)_invalidateFocusGuide;
-(void)_updateFocusGuideIfNeeded;
-(UIView *)_leadingSeparator;
-(UIView *)_trailingSeparator;
-(UIFocusGuide *)_focusGuide;
-(UIFont *)font;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)_updateIfNeeded;
-(void)setDelegate:(id<PXUIWidgetFooterViewDelegate>)arg1 ;
-(NSString *)disclosureTitle;
-(void)setDisclosureTitle:(NSString *)arg1 ;
-(BOOL)_needsUpdate;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)_setNeedsUpdate;
-(void)updateConstraints;
@end
