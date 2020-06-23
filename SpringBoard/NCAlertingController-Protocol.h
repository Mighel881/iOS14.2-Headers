//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NCNotificationRequest, NSSet, NSString;

@protocol NCAlertingController <NSObject>
- (void)resetAutomaticLockStateForNotificationRequest:(NCNotificationRequest *)arg1;
- (void)killAlertsForNotificationRequest:(NCNotificationRequest *)arg1;
- (void)alertOnPresentationForNotificationRequest:(NCNotificationRequest *)arg1 presentingDestination:(NSString *)arg2;
- (void)alertOnPostForNotificationRequest:(NCNotificationRequest *)arg1 forRequestDestinations:(NSSet *)arg2;
@end

