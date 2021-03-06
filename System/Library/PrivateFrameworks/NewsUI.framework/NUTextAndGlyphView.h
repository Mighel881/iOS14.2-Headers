/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsUI/NewsUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NUCrossFadeViewAnimatable.h>

@class NUTextAndGlyph, UILabel, UIImageView, NSString;

@interface NUTextAndGlyphView : UIView <NUCrossFadeViewAnimatable> {

	NUTextAndGlyph* _textAndGlyph;
	UILabel* _label;
	UIImageView* _imageView;
	unsigned long long _alignment;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UILabel * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                  //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) unsigned long long alignment;               //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,retain) NUTextAndGlyph * textAndGlyph;              //@synthesize textAndGlyph=_textAndGlyph - In the implementation block
-(UILabel *)label;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAlignment:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(NUTextAndGlyph *)textAndGlyph;
-(UIImageView *)imageView;
-(unsigned long long)alignment;
-(void)setTextAndGlyph:(NUTextAndGlyph *)arg1 ;
-(void)nu_crossFadeViewClearVisibleState;
-(void)nu_crossFadeViewSetValue:(id)arg1 ;
@end

