//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NCNotificationRequest, SBNotificationBannerDestination;

@protocol SBNotificationBannerDestinationObserver <NSObject>

@optional
- (void)notificationBannerDestinationDidDismissLongLook:(SBNotificationBannerDestination *)arg1;
- (void)notificationBannerDestinationWillDismissLongLook:(SBNotificationBannerDestination *)arg1;
- (void)notificationBannerDestinationDidPresentLongLook:(SBNotificationBannerDestination *)arg1;
- (void)notificationBannerDestinationWillPresentLongLook:(SBNotificationBannerDestination *)arg1;
- (void)notificationBannerDestination:(SBNotificationBannerDestination *)arg1 didPresentBannerForNotificationRequest:(NCNotificationRequest *)arg2;
@end

