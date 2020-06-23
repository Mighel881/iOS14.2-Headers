//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NCNotificationDestination-Protocol.h>

@class NCNotificationRequest;
@protocol NCNotificationAlertDestinationDelegate;

@protocol NCNotificationAlertDestination <NCNotificationDestination>
@property(readonly, nonatomic, getter=isAlertDestination) _Bool alertDestination;
@property(nonatomic) __weak id <NCNotificationAlertDestinationDelegate> delegate;

@optional
- (void)prepareDestinationToReceiveCriticalNotificationRequest:(NCNotificationRequest *)arg1;
@end
