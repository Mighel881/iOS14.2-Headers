//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@class NSString;

@interface SBHarmonySettings : PTSettings
{
    _Bool _whitePointAdaptationInteractiveUpdateEnabled;
    float _whitePointAdaptationStrengthStandard;
    float _whitePointAdaptationStrengthReading;
    float _whitePointAdaptationStrengthPhoto;
    float _whitePointAdaptationStrengthVideo;
    float _whitePointAdaptationStrengthGame;
    float _whitePointAdaptationUpdateDefaultDuration;
    NSString *_whitePointAdaptationInteractiveUpdateTimingFunctionName;
}


// Remaining properties
@property(nonatomic) _Bool whitePointAdaptationInteractiveUpdateEnabled; // @synthesize whitePointAdaptationInteractiveUpdateEnabled=_whitePointAdaptationInteractiveUpdateEnabled;
@property(copy, nonatomic) NSString *whitePointAdaptationInteractiveUpdateTimingFunctionName; // @synthesize whitePointAdaptationInteractiveUpdateTimingFunctionName=_whitePointAdaptationInteractiveUpdateTimingFunctionName;
@property(nonatomic) float whitePointAdaptationStrengthGame; // @synthesize whitePointAdaptationStrengthGame=_whitePointAdaptationStrengthGame;
@property(nonatomic) float whitePointAdaptationStrengthPhoto; // @synthesize whitePointAdaptationStrengthPhoto=_whitePointAdaptationStrengthPhoto;
@property(nonatomic) float whitePointAdaptationStrengthReading; // @synthesize whitePointAdaptationStrengthReading=_whitePointAdaptationStrengthReading;
@property(nonatomic) float whitePointAdaptationStrengthStandard; // @synthesize whitePointAdaptationStrengthStandard=_whitePointAdaptationStrengthStandard;
@property(nonatomic) float whitePointAdaptationStrengthVideo; // @synthesize whitePointAdaptationStrengthVideo=_whitePointAdaptationStrengthVideo;
@property(nonatomic) float whitePointAdaptationUpdateDefaultDuration; // @synthesize whitePointAdaptationUpdateDefaultDuration=_whitePointAdaptationUpdateDefaultDuration;
@end

