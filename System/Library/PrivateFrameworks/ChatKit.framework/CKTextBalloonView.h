/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKColoredBalloonView.h>
#import <libobjc.A.dylib/CKBalloonTextViewInteractionDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/CKBalloonVibrancy.h>

@class CKBalloonTextView, NSAttributedString, NSString;

@interface CKTextBalloonView : CKColoredBalloonView <CKBalloonTextViewInteractionDelegate, UITextViewDelegate, CKBalloonVibrancy> {

	BOOL _containsExcessiveLineHeightCharacters;
	BOOL _ignoreSelectionEvent;
	CKBalloonTextView* _textView;
	NSAttributedString* _attributedText;

}

@property (nonatomic,retain) CKBalloonTextView * textView;                            //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic) BOOL ignoreSelectionEvent;                               //@synthesize ignoreSelectionEvent=_ignoreSelectionEvent - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;                       //@synthesize attributedText=_attributedText - In the implementation block
@property (assign,nonatomic) BOOL containsExcessiveLineHeightCharacters;              //@synthesize containsExcessiveLineHeightCharacters=_containsExcessiveLineHeightCharacters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CKBalloonTextView *)textView;
-(void)setContainsExcessiveLineHeightCharacters:(BOOL)arg1 ;
-(void)prepareForDisplay;
-(UIEdgeInsets)targetTextContainerInsets;
-(BOOL)ignoreSelectionEvent;
-(void)setIgnoreSelectionEvent:(BOOL)arg1 ;
-(void)interactionStartedLongPressInTextView:(id)arg1 ;
-(void)interactionStartedFromPreviewItemControllerInTextView:(id)arg1 ;
-(void)interactionStoppedFromPreviewItemControllerInTextView:(id)arg1 ;
-(void)interactionStartedTapInTextView:(id)arg1 withModifierFlags:(long long)arg2 selectedText:(id)arg3 ;
-(void)interactionTextViewShouldCopyToPasteboard:(id)arg1 ;
-(void)interactionTextView:(id)arg1 userDidDragOutsideViewWithPoint:(CGPoint)arg2 ;
-(double)textViewWidthForWidth:(double)arg1 ;
-(void)restoreFromLargeTextTruncation;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isSelected;
-(void)clearFilters;
-(UIEdgeInsets)alignmentRectInsets;
-(void)tapGestureRecognized:(id)arg1 ;
-(void)configureForMessagePart:(id)arg1 ;
-(void)setTextView:(CKBalloonTextView *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(id)updateTextSelectionState:(id)arg1 forTextSelectionArea:(long long)arg2 ;
-(NSString *)description;
-(void)layoutSubviews;
-(void)addFilter:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 withSelectionState:(id)arg2 ;
-(void)addOverlaySubview:(id)arg1 ;
-(void)updateRasterizationForInvisibleInkEffect;
-(void)configureForComposition:(id)arg1 ;
-(void)truncateForLargeText;
-(id)nonVibrantSubViews;
-(void)vibrantContainerWillReparentNonVibrantSubviews:(id)arg1 ;
-(void)prepareForReuse;
-(BOOL)containsExcessiveLineHeightCharacters;
-(NSAttributedString *)attributedText;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 isSingleLine:(BOOL*)arg3 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(Class)invisibleInkEffectViewClass;
-(void)invisibleInkEffectViewWasUncovered;
-(void)attachInvisibleInkEffectView;
-(void)detachInvisibleInkEffectView;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(void)cullSubviewsWithVisibleBounds:(CGRect)arg1 ;
@end

