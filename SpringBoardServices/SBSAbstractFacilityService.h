//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/BSInvalidatable-Protocol.h>

@class NSString, SBSServiceFacilityClient;
@protocol OS_dispatch_queue;

@interface SBSAbstractFacilityService : NSObject <BSInvalidatable>
{
    SBSServiceFacilityClient *_client;
}


// Remaining properties
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property(readonly, nonatomic) SBSServiceFacilityClient *client;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

