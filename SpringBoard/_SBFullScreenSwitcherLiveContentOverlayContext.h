//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SBSwitcherLiveContentOverlay;

@interface _SBFullScreenSwitcherLiveContentOverlayContext : NSObject
{
    long long _overlayType;
    id <SBSwitcherLiveContentOverlay> _overlay;
}


// Remaining properties
@property(readonly, nonatomic) id <SBSwitcherLiveContentOverlay> overlay; // @synthesize overlay=_overlay;
@property(readonly, nonatomic) long long overlayType; // @synthesize overlayType=_overlayType;
@end

