//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/SBFAnalyticsBackendEventContextProviding-Protocol.h>

@class NSString, SBFAnalyticsBackend, SBSAnalyticsState;

@interface SBAnalyticsContextProvider : NSObject <SBFAnalyticsBackendEventContextProviding>
{
    SBSAnalyticsState *_eventPayload;
    SBFAnalyticsBackend *_backend;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) SBSAnalyticsState *eventPayload;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

