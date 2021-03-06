/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SKUIMenuViewControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol SKUIPopupMenuDelegate;
@class UIButton, UILabel, NSString, NSArray, SKUIMenuViewController, UIPopoverController;

@interface SKUIPopupMenuHeaderView : UIView <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate> {

	id<SKUIPopupMenuDelegate> _delegate;
	UIButton* _menuButton;
	UILabel* _menuLabel;
	NSString* _menuLabelTitle;
	NSArray* _menuItemTitles;
	SKUIMenuViewController* _menuViewController;
	UIPopoverController* _menuPopoverController;
	long long _selectedMenuItemIndex;
	UILabel* _titleLabel;

}

@property (assign,nonatomic,__weak) id<SKUIPopupMenuDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * menuItemTitles;                                 //@synthesize menuItemTitles=_menuItemTitles - In the implementation block
@property (nonatomic,copy) NSString * menuLabelTitle;                                //@synthesize menuLabelTitle=_menuLabelTitle - In the implementation block
@property (assign,nonatomic) long long selectedMenuItemIndex;                        //@synthesize selectedMenuItemIndex=_selectedMenuItemIndex - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id<SKUIPopupMenuDelegate>)delegate;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<SKUIPopupMenuDelegate>)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(id)_titleLabel;
-(void)setTitle:(NSString *)arg1 ;
-(void)dealloc;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(void)_menuButtonAction:(id)arg1 ;
-(NSArray *)menuItemTitles;
-(void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2 ;
-(void)setMenuLabelTitle:(NSString *)arg1 ;
-(void)setMenuItemTitles:(NSArray *)arg1 ;
-(void)setSelectedMenuItemIndex:(long long)arg1 ;
-(void)_reloadMenuButton;
-(NSString *)menuLabelTitle;
-(long long)selectedMenuItemIndex;
@end

