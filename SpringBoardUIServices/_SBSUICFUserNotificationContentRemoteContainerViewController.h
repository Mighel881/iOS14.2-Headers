//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardUIServices/_SBSUICFUserNotificationContentExtensionRemoteInterface-Protocol.h>

@class NSString;
@protocol SBSUIUserNotificationContentProviding;

@interface _SBSUICFUserNotificationContentRemoteContainerViewController : UIViewController <_SBSUICFUserNotificationContentExtensionRemoteInterface>
{
    _Bool _isLegacyContentViewController;
    UIViewController<SBSUIUserNotificationContentProviding> *_extensionViewController;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIViewController<SBSUIUserNotificationContentProviding> *extensionViewController; // @synthesize extensionViewController=_extensionViewController;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

