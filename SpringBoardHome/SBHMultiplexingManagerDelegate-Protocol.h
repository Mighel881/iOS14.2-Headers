//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class NSString, SBHMultiplexingManager, UIViewController;

@protocol SBHMultiplexingManagerDelegate <NSObject>
- (void)multiplexingManager:(SBHMultiplexingManager *)arg1 willRemoveViewController:(UIViewController *)arg2 forIdentifier:(NSString *)arg3;

@optional
- (_Bool)multiplexingManager:(SBHMultiplexingManager *)arg1 shouldCacheRecentViewController:(UIViewController *)arg2 forIdentifier:(NSString *)arg3;
@end

