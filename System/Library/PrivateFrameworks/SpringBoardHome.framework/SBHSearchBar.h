/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:44:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol SBHSearchBarDelegate, SBIconListLayoutProvider;
@class SBHSearchTextField, UIButton, SBHFeatherBlurView, NSString;

@interface SBHSearchBar : UIView <UITextFieldDelegate> {

	UIEdgeInsets _searchTextFieldEdgeInsetsForCancelButton;
	UIEdgeInsets _searchTextFieldLayoutInsets;
	BOOL _showsCancelButton;
	SBHSearchTextField* _searchTextField;
	id<SBHSearchBarDelegate> _delegate;
	UIButton* _cancelButton;
	id<SBIconListLayoutProvider> _listLayoutProvider;
	double _searchTextFieldBottomEdgeInset;
	SBHFeatherBlurView* _backgroundView;
	UIEdgeInsets _searchTextFieldHorizontalEdgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets searchTextFieldHorizontalEdgeInsets;                    //@synthesize searchTextFieldHorizontalEdgeInsets=_searchTextFieldHorizontalEdgeInsets - In the implementation block
@property (assign,nonatomic) double searchTextFieldBottomEdgeInset;                               //@synthesize searchTextFieldBottomEdgeInset=_searchTextFieldBottomEdgeInset - In the implementation block
@property (nonatomic,readonly) SBHFeatherBlurView * backgroundView;                               //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) SBHSearchTextField * searchTextField;                                //@synthesize searchTextField=_searchTextField - In the implementation block
@property (assign,nonatomic,__weak) id<SBHSearchBarDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) UIButton * cancelButton;                                           //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign,nonatomic) BOOL showsCancelButton;                                              //@synthesize showsCancelButton=_showsCancelButton - In the implementation block
@property (assign,nonatomic,__weak) id<SBIconListLayoutProvider> listLayoutProvider;              //@synthesize listLayoutProvider=_listLayoutProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)resignFirstResponder;
-(UIButton *)cancelButton;
-(BOOL)becomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(CGSize)intrinsicContentSize;
-(void)setShowsCancelButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isFirstResponder;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id<SBHSearchBarDelegate>)delegate;
-(SBHFeatherBlurView *)backgroundView;
-(NSString *)text;
-(BOOL)showsCancelButton;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setDelegate:(id<SBHSearchBarDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setListLayoutProvider:(id<SBIconListLayoutProvider>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)_cancelButtonWasHit:(id)arg1 ;
-(void)_accessibilityBoldStatusDidChange:(id)arg1 ;
-(void)_updateCancelButtonFont;
-(void)_searchBarTextFieldDidChangeText:(id)arg1 ;
-(void)setSearchTextFieldHorizontalEdgeInsets:(UIEdgeInsets)arg1 ;
-(double)_performHeightCalculation;
-(void)setSearchTextField:(SBHSearchTextField *)arg1 ;
-(UIEdgeInsets)searchTextFieldHorizontalEdgeInsets;
-(double)searchTextFieldBottomEdgeInset;
-(void)setSearchTextFieldBottomEdgeInset:(double)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(SBHSearchTextField *)searchTextField;
-(id<SBIconListLayoutProvider>)listLayoutProvider;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
@end

