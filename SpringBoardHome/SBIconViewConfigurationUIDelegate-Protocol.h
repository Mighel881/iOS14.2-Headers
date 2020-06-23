//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class SBIconView, UIViewController;
@protocol SBHIconViewConfigurationInteraction, SBLeafIconDataSource;

@protocol SBIconViewConfigurationUIDelegate <NSObject>

@optional
- (void)iconView:(SBIconView *)arg1 configurationDidEndWithInteraction:(id <SBHIconViewConfigurationInteraction>)arg2;
- (void)iconView:(SBIconView *)arg1 configurationWillBeginWithInteraction:(id <SBHIconViewConfigurationInteraction>)arg2;
- (void)iconView:(SBIconView *)arg1 configurationDidUpdateWithInteraction:(id <SBHIconViewConfigurationInteraction>)arg2;
- (UIViewController *)iconView:(SBIconView *)arg1 containerViewControllerForConfigurationInteraction:(id <SBHIconViewConfigurationInteraction>)arg2;
- (id <SBHIconViewConfigurationInteraction>)stackConfigurationInteractionForIconView:(SBIconView *)arg1;
- (id <SBHIconViewConfigurationInteraction>)iconView:(SBIconView *)arg1 configurationInteractionForDataSource:(id <SBLeafIconDataSource>)arg2;
- (_Bool)iconView:(SBIconView *)arg1 supportsConfigurationForDataSource:(id <SBLeafIconDataSource>)arg2;
@end

