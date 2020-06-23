//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SBWakeLogger : NSObject
{
    struct os_unfair_lock_s _lock;
    _Bool _trackingWake;
    unsigned int _timesyncService;
    unsigned int _backlightService;
    long long _homeButtonType;
    NSMutableDictionary *_wakeSouceToEventDict;
    long long _activeWakeLoggerSource;
}


// Remaining properties
@property(nonatomic) long long activeWakeLoggerSource; // @synthesize activeWakeLoggerSource=_activeWakeLoggerSource;
@property(readonly, copy, nonatomic) NSString *activeWakeSourceDescription;
@property(nonatomic) unsigned int backlightService; // @synthesize backlightService=_backlightService;
@property(nonatomic) long long homeButtonType; // @synthesize homeButtonType=_homeButtonType;
@property(nonatomic) unsigned int timesyncService; // @synthesize timesyncService=_timesyncService;
@property(nonatomic) _Bool trackingWake; // @synthesize trackingWake=_trackingWake;
@property(retain, nonatomic) NSMutableDictionary *wakeSouceToEventDict; // @synthesize wakeSouceToEventDict=_wakeSouceToEventDict;
@end

