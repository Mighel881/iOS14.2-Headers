//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@class SBEntityRemovalDosidoDefaultAnimationSettings, SBFFluidBehaviorSettings;

@interface SBEntityRemovalDosidoSlideOutAnimationSettings : PTSettings
{
    double _fromViewSlideOutAnimationDelay;
    double _fromViewSlideOutHeightOffsetMultiplier;
    SBFFluidBehaviorSettings *_fromViewSlideOutAnimationSettings;
    SBEntityRemovalDosidoDefaultAnimationSettings *_defaultAnimationSettings;
}


// Remaining properties
@property(retain, nonatomic) SBEntityRemovalDosidoDefaultAnimationSettings *defaultAnimationSettings; // @synthesize defaultAnimationSettings=_defaultAnimationSettings;
@property(nonatomic) double fromViewSlideOutAnimationDelay; // @synthesize fromViewSlideOutAnimationDelay=_fromViewSlideOutAnimationDelay;
@property(retain, nonatomic) SBFFluidBehaviorSettings *fromViewSlideOutAnimationSettings; // @synthesize fromViewSlideOutAnimationSettings=_fromViewSlideOutAnimationSettings;
@property(nonatomic) double fromViewSlideOutHeightOffsetMultiplier; // @synthesize fromViewSlideOutHeightOffsetMultiplier=_fromViewSlideOutHeightOffsetMultiplier;
@end

