//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SBIcon, SBIconView, UIColor, UIFont, _UILegibilitySettings;
@protocol SBIconListLayoutProvider;

@interface SBIconLabelImageParametersBuilder : NSObject
{
    UIFont *_font;
    _Bool _hasSetTextInsets;
    _Bool _accessibilityReduceTransparencyEnabled;
    SBIcon *_icon;
    SBIconView *_iconView;
    Class _iconViewClass;
    NSString *_iconLocation;
    id <SBIconListLayoutProvider> _listLayoutProvider;
    _UILegibilitySettings *_legibilitySettings;
    NSString *_contentSizeCategory;
    UIColor *_focusHighlightColor;
    double _scale;
    long long _labelAccessoryType;
    UIColor *_textColor;
    NSString *_overrideText;
    NSString *_text;
    struct UIEdgeInsets _textInsets;
}


// Remaining properties
@property(nonatomic, getter=isAccessibilityReduceTransparencyEnabled) _Bool accessibilityReduceTransparencyEnabled; // @synthesize accessibilityReduceTransparencyEnabled=_accessibilityReduceTransparencyEnabled;
@property(copy, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property(retain, nonatomic) UIColor *focusHighlightColor; // @synthesize focusHighlightColor=_focusHighlightColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(readonly, nonatomic) SBIcon *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) struct CGSize iconImageSize;
@property(readonly, nonatomic) NSString *iconLocation; // @synthesize iconLocation=_iconLocation;
@property(retain, nonatomic) SBIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) Class iconViewClass; // @synthesize iconViewClass=_iconViewClass;
@property(nonatomic) long long labelAccessoryType; // @synthesize labelAccessoryType=_labelAccessoryType;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(retain, nonatomic) id <SBIconListLayoutProvider> listLayoutProvider; // @synthesize listLayoutProvider=_listLayoutProvider;
@property(retain, nonatomic) NSString *overrideText; // @synthesize overrideText=_overrideText;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) struct UIEdgeInsets textInsets; // @synthesize textInsets=_textInsets;
@end

