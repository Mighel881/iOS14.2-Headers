//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBFAnalyticsBackendEventHandling-Protocol.h>

@class NSMutableDictionary, NSString;

@interface SBSystemGestureUsageMetric : NSObject <SBFAnalyticsBackendEventHandling>
{
    NSMutableDictionary *_typeToMetric;
    unsigned long long _currentLocation;
}


// Remaining properties
@property(nonatomic) unsigned long long currentLocation; // @synthesize currentLocation=_currentLocation;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
