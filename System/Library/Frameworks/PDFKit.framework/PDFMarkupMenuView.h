/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PDFKit/PDFKit-Structs.h>
#import <UIKitCore/UIView.h>

@class PDFMarkupMenuViewPrivate;

@interface PDFMarkupMenuView : UIView {

	PDFMarkupMenuViewPrivate* _private;

}
-(void)setFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(void)_updateAppearance;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)hide;
-(void)_setupViews;
-(id)initWithDelegate:(id)arg1 ;
-(id)_newMaskView:(long long)arg1 ;
-(id)_menuControls;
-(BOOL)_shouldShowCompactMenu;
-(void)_setControls:(id)arg1 ;
-(CGSize)_sizeThatFitsControls:(id)arg1 ;
-(void)_setBlurDisabled:(BOOL)arg1 ;
-(void)_handleDeleteButtonTap;
-(CGRect)_dividerLineRectForControl:(long long)arg1 ;
-(int)_colorPaletteMenuIconForMarkupStyle:(unsigned long long)arg1 ;
-(int)_noteMenuIconForMarkupStyle:(unsigned long long)arg1 ;
-(int)_colorMenuIconForMarkupStyle:(unsigned long long)arg1 ;
-(void)useColorOf:(id)arg1 ;
-(void)showColorControlsMenu:(id)arg1 ;
-(void)handleDeleteButtonTap:(id)arg1 ;
-(void)handleAddNoteButton:(id)arg1 ;
-(void)handleRightArrowButton:(id)arg1 ;
-(void)setMarkupStyle:(unsigned long long)arg1 ;
-(void)setMarkupNoteStyle:(unsigned long long)arg1 ;
-(void)presentFromRect:(CGRect)arg1 view:(id)arg2 visibleRect:(CGRect)arg3 ;
@end

