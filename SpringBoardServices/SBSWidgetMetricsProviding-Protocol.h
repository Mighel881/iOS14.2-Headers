//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardServices/NSObject-Protocol.h>

@class CHSWidget, CHSWidgetMetrics, CHSWidgetMetricsSpecification, NSString, UISDeviceContext, UISDisplayContext;

@protocol SBSWidgetMetricsProviding <NSObject>
- (CHSWidgetMetricsSpecification *)previewMetricsSpecificationForDeviceContext:(UISDeviceContext *)arg1 displayContext:(UISDisplayContext *)arg2 bundleIdentifier:(NSString *)arg3;
- (CHSWidgetMetricsSpecification *)previewMetricsSpecificationForBundleIdentifier:(NSString *)arg1;
- (CHSWidgetMetrics *)systemMetricsForWidget:(CHSWidget *)arg1;
@end

