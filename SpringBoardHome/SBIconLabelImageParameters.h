//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/NSCopying-Protocol.h>
#import <SpringBoardHome/NSMutableCopying-Protocol.h>

@class NSString, UIColor, UIFont;

@interface SBIconLabelImageParameters : NSObject <NSCopying, NSMutableCopying>
{
    UIFont *_font;
    NSString *_text;
    _Bool _containsEmoji;
    _Bool _canTruncate;
    _Bool _canTighten;
    _Bool _recalculateHash;
    _Bool _accessibilityReduceTransparencyEnabled;
    _Bool _colorspaceGrayscale;
    _Bool _colorspaceGrayscaleSet;
    NSString *_contentSizeCategory;
    double _scale;
    struct CGSize _maxSize;
    long long _legibilityStyle;
    UIColor *_textColor;
    UIColor *_focusHighlightColor;
    struct UIEdgeInsets _textInsets;
    struct UIEdgeInsets _fontLanguageInsets;
    NSString *_iconLocation;
    unsigned long long _hash;
}


// Remaining properties
@property(readonly, nonatomic, getter=isAccessibilityReduceTransparencyEnabled) _Bool accessibilityReduceTransparencyEnabled; // @synthesize accessibilityReduceTransparencyEnabled=_accessibilityReduceTransparencyEnabled;
@property(readonly, nonatomic) _Bool canTighten; // @synthesize canTighten=_canTighten;
@property(readonly, nonatomic) _Bool canTruncate; // @synthesize canTruncate=_canTruncate;
@property(readonly, nonatomic, getter=isColorspaceGrayscale) _Bool colorspaceGrayscale;
@property(readonly, nonatomic) _Bool containsEmoji; // @synthesize containsEmoji=_containsEmoji;
@property(readonly, copy, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property(readonly, nonatomic) UIColor *focusHighlightColor; // @synthesize focusHighlightColor=_focusHighlightColor;
@property(readonly, nonatomic) UIFont *font; // @synthesize font=_font;
@property(readonly, nonatomic) struct UIEdgeInsets fontLanguageInsets; // @synthesize fontLanguageInsets=_fontLanguageInsets;
@property(readonly, copy, nonatomic) NSString *iconLocation; // @synthesize iconLocation=_iconLocation;
@property(readonly, nonatomic) long long legibilityStyle; // @synthesize legibilityStyle=_legibilityStyle;
@property(readonly, nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) struct UIEdgeInsets textInsets; // @synthesize textInsets=_textInsets;
@end

