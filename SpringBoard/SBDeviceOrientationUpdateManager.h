//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol BSInvalidatable;

@interface SBDeviceOrientationUpdateManager : NSObject
{
    NSMutableSet *_deferralAssertions;
    _Bool _deviceOrientationIsDirty;
    id <BSInvalidatable> _stateCaptureHandle;
    long long _lastUpdatedDeviceOrientation;
}


// Remaining properties
@property(readonly, nonatomic, getter=isCurrentlyDeferringOrientationUpdates) _Bool currentlyDeferringOrientationUpdates;
@property(nonatomic) long long lastUpdatedDeviceOrientation; // @synthesize lastUpdatedDeviceOrientation=_lastUpdatedDeviceOrientation;
@end

