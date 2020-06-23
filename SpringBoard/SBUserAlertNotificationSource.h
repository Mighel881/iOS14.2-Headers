//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/NCNotificationSource-Protocol.h>
#import <SpringBoard/SBAlertItemPresenter-Protocol.h>
#import <SpringBoard/SBAlertItemsControllerObserver-Protocol.h>

@class NCNotificationDispatcher, NSString;

@interface SBUserAlertNotificationSource : NSObject <SBAlertItemsControllerObserver, NCNotificationSource, SBAlertItemPresenter>
{
    NCNotificationDispatcher *_dispatcher;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NCNotificationDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

