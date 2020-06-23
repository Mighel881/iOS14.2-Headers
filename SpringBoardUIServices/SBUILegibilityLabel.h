//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoardUIServices/SBUILegibility-Protocol.h>

@class NSAttributedString, NSString, UIColor, UIFont, UILabel, _UILegibilitySettings, _UILegibilityView;

@interface SBUILegibilityLabel : UIView <SBUILegibility>
{
    UILabel *_lookasideLabel;
    _UILegibilityView *_legibilityView;
    _Bool _isDirty;
    double _strength;
    long long _options;
    double _scale;
    NSString *_string;
    UIFont *_font;
    NSAttributedString *_attributedText;
    UIColor *_textColorOverride;
    _UILegibilitySettings *_legibilitySettings;
    _Bool _isWaitingToMoveToWindow;
}


// Remaining properties
@property(nonatomic) _Bool adjustsFontSizeToFitWidth; // @dynamic adjustsFontSizeToFitWidth;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(readonly, nonatomic) double baselineOffset;
@property(readonly, nonatomic) struct UIEdgeInsets characterOverflowInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double firstBaselineOffsetFromBottom;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(readonly) unsigned long long hash;
@property(nonatomic) float hyphenationFactor; // @dynamic hyphenationFactor;
@property(readonly, nonatomic) double lastBaselineOffsetFromBottom;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) long long lineBreakMode; // @dynamic lineBreakMode;
@property(nonatomic) double minimumScaleFactor; // @dynamic minimumScaleFactor;
@property(nonatomic) long long numberOfLines; // @dynamic numberOfLines;
@property(nonatomic) double strength; // @synthesize strength=_strength;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
@property(readonly) Class superclass;
@property(nonatomic) long long textAlignment; // @dynamic textAlignment;
@property(copy, nonatomic) UIColor *textColor;
@end
