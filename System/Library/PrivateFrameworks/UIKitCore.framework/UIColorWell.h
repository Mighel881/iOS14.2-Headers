/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIDragInteractionDelegate.h>
#import <UIKit/UIDropInteractionDelegate.h>
#import <UIKit/UIColorPickerViewControllerDelegate.h>

@class UIButton, _UIColorWellConicalGradientBackgroundView, UIColorPickerViewController, UIDragInteraction, UIDropInteraction, UIColor, NSString;

@interface UIColorWell : UIControl <UIDragInteractionDelegate, UIDropInteractionDelegate, UIColorPickerViewControllerDelegate> {

	UIButton* _button;
	_UIColorWellConicalGradientBackgroundView* _gradientView;
	UIColorPickerViewController* _colorPicker;
	UIDragInteraction* _dragInteraction;
	UIDropInteraction* _dropInteraction;
	BOOL _supportsAlpha;
	UIColor* _selectedColor;
	NSString* _title;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL supportsAlpha;                    //@synthesize supportsAlpha=_supportsAlpha - In the implementation block
@property (nonatomic,retain) UIColor * selectedColor;               //@synthesize selectedColor=_selectedColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)_controlEventsForActionTriggered;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(void)_setSelectedColor:(id)arg1 notifyingPicker:(BOOL)arg2 sendingAction:(BOOL)arg3 ;
-(void)colorPickerViewControllerDidSelectColor:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(UIColor *)selectedColor;
-(BOOL)supportsAlpha;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setPickerTitle:(id)arg1 ;
-(double)_widthForTraitCollection:(id)arg1 ;
-(NSString *)title;
-(void)setSupportsAlpha:(BOOL)arg1 ;
-(void)setSelectedColor:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(void)_commonInit;
-(void)setTitle:(NSString *)arg1 ;
-(void)invokeColorPicker:(id)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
@end
