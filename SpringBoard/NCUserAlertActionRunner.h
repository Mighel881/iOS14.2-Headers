//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/NCNotificationActionRunner-Protocol.h>

@class NSString, SBAlertItem;

@interface NCUserAlertActionRunner : NSObject <NCNotificationActionRunner>
{
    _Bool _shouldForwardAction;
    SBAlertItem *_alertItem;
}


// Remaining properties
@property(readonly, nonatomic) __weak SBAlertItem *alertItem; // @synthesize alertItem=_alertItem;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool shouldForwardAction; // @synthesize shouldForwardAction=_shouldForwardAction;
@property(readonly) Class superclass;
@end

