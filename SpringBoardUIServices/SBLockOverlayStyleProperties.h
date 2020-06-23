//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, _UIBackdropViewSettings;

@interface SBLockOverlayStyleProperties : NSObject
{
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    UIColor *_tintColor;
    double _tintAlpha;
    double _blurRadius;
    unsigned long long _style;
    long long _quality;
    _UIBackdropViewSettings *_settings;
}


// Remaining properties
@property(readonly, nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
@property(readonly, nonatomic) long long graphicsQuality; // @synthesize graphicsQuality=_quality;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, nonatomic) double tintAlpha; // @synthesize tintAlpha=_tintAlpha;
@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@end

