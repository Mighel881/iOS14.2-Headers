//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBAWDMetricData.h>

@class NSString;

@interface SBAppBrightnessMetricData : SBAWDMetricData
{
    NSString *_appBundleID;
    unsigned long long _brightness;
    unsigned long long _duration;
}


// Remaining properties
@property(copy, nonatomic) NSString *appBundleID; // @synthesize appBundleID=_appBundleID;
@property(nonatomic) unsigned long long brightness; // @synthesize brightness=_brightness;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@end

