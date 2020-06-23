//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@class MTLumaDodgePillSettings;

@interface SBFloatingSwitcherSettings : PTSettings
{
    _Bool _showFloats;
    double _switcherCardScale;
    double _cardSpacing;
    double _dimmingAlpha;
    double _leadingEdgeRubberbandingRange;
    double _perCardAdditionalScaleCoefficient;
    double _scaleCurveExponent;
    double _opacityMinimumDistanceThreshold;
    double _opacityFadeDistance;
    double _darkeningMinimumDistanceThreshold;
    double _darkeningFadeDistance;
    double _maximumDarkening;
    double _titleAndIconOpacityMinimumDistanceThreshold;
    double _titleAndIconOpacityFadeDistance;
    double _titleOpacityMinimumDistanceThreshold;
    double _titleOpacityFadeDistance;
    double _overshootPullbackDelayOffscreen;
    double _overshootPullbackDelayOnscreen;
    MTLumaDodgePillSettings *_homeAffordanceSettings;
}


// Remaining properties
@property double cardSpacing; // @synthesize cardSpacing=_cardSpacing;
@property double darkeningFadeDistance; // @synthesize darkeningFadeDistance=_darkeningFadeDistance;
@property double darkeningMinimumDistanceThreshold; // @synthesize darkeningMinimumDistanceThreshold=_darkeningMinimumDistanceThreshold;
@property double dimmingAlpha; // @synthesize dimmingAlpha=_dimmingAlpha;
@property(retain) MTLumaDodgePillSettings *homeAffordanceSettings; // @synthesize homeAffordanceSettings=_homeAffordanceSettings;
@property double leadingEdgeRubberbandingRange; // @synthesize leadingEdgeRubberbandingRange=_leadingEdgeRubberbandingRange;
@property double maximumDarkening; // @synthesize maximumDarkening=_maximumDarkening;
@property double opacityFadeDistance; // @synthesize opacityFadeDistance=_opacityFadeDistance;
@property double opacityMinimumDistanceThreshold; // @synthesize opacityMinimumDistanceThreshold=_opacityMinimumDistanceThreshold;
@property double overshootPullbackDelayOffscreen; // @synthesize overshootPullbackDelayOffscreen=_overshootPullbackDelayOffscreen;
@property double overshootPullbackDelayOnscreen; // @synthesize overshootPullbackDelayOnscreen=_overshootPullbackDelayOnscreen;
@property double perCardAdditionalScaleCoefficient; // @synthesize perCardAdditionalScaleCoefficient=_perCardAdditionalScaleCoefficient;
@property double scaleCurveExponent; // @synthesize scaleCurveExponent=_scaleCurveExponent;
@property _Bool showFloats; // @synthesize showFloats=_showFloats;
@property double switcherCardScale; // @synthesize switcherCardScale=_switcherCardScale;
@property double titleAndIconOpacityFadeDistance; // @synthesize titleAndIconOpacityFadeDistance=_titleAndIconOpacityFadeDistance;
@property double titleAndIconOpacityMinimumDistanceThreshold; // @synthesize titleAndIconOpacityMinimumDistanceThreshold=_titleAndIconOpacityMinimumDistanceThreshold;
@property double titleOpacityFadeDistance; // @synthesize titleOpacityFadeDistance=_titleOpacityFadeDistance;
@property double titleOpacityMinimumDistanceThreshold; // @synthesize titleOpacityMinimumDistanceThreshold=_titleOpacityMinimumDistanceThreshold;
@end

