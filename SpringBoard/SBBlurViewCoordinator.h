//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface SBBlurViewCoordinator : NSObject
{
    NSArray *_elementVCs;
    unsigned long long _state;
    NSMutableDictionary *_mapStateToBlocks;
}


// Remaining properties
@property(readonly, nonatomic, getter=isBlurred) _Bool blurred;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_elementVCs;
@end

