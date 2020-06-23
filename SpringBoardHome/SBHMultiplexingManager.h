//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;
@protocol SBHMultiplexingManagerDelegate;

@interface SBHMultiplexingManager : NSObject
{
    unsigned long long _cachedRecentViewControllerCountLimit;
    id <SBHMultiplexingManagerDelegate> _delegate;
    NSMutableDictionary *_viewControllersForIdentifier;
    NSMutableDictionary *_multiplexingViewControllersForIdentifier;
    NSMutableDictionary *_cachedRecentViewControllersForIdentifier;
    NSMutableOrderedSet *_cachedRecentViewControllerIdentifiers;
}


// Remaining properties
@property(nonatomic) unsigned long long cachedRecentViewControllerCountLimit; // @synthesize cachedRecentViewControllerCountLimit=_cachedRecentViewControllerCountLimit;
@property(retain, nonatomic) NSMutableOrderedSet *cachedRecentViewControllerIdentifiers; // @synthesize cachedRecentViewControllerIdentifiers=_cachedRecentViewControllerIdentifiers;
@property(retain, nonatomic) NSMutableDictionary *cachedRecentViewControllersForIdentifier; // @synthesize cachedRecentViewControllersForIdentifier=_cachedRecentViewControllersForIdentifier;
@property(nonatomic) __weak id <SBHMultiplexingManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *multiplexingViewControllersForIdentifier; // @synthesize multiplexingViewControllersForIdentifier=_multiplexingViewControllersForIdentifier;
@property(retain, nonatomic) NSMutableDictionary *viewControllersForIdentifier; // @synthesize viewControllersForIdentifier=_viewControllersForIdentifier;
@end
