//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/BNPresentableObserving-Protocol.h>

@class NCNotificationPresentableViewController;

@protocol NCNotificationPresentableViewControllerDelegate <BNPresentableObserving>
- (void)notificationPresentableViewController:(NCNotificationPresentableViewController *)arg1 presentationSize:(out struct CGSize *)arg2 containerSize:(out struct CGSize *)arg3;
- (_Bool)notificationPresentableViewControllerShouldPresentLongLook:(NCNotificationPresentableViewController *)arg1;
@end

