//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol FBSServiceFacilityClientHandle;

@interface SBButtonConsumerClient : NSObject
{
    _Bool _entitledToConsumeButtonsInBackground;
    _Bool _application;
    _Bool _runningVisible;
    _Bool _suspended;
    id <FBSServiceFacilityClientHandle> _systemServiceClient;
    NSMutableSet *_registrations;
}


// Remaining properties
@property(nonatomic, getter=isApplication) _Bool application; // @synthesize application=_application;
@property(readonly, nonatomic) _Bool canReceiveEvents;
@property(nonatomic, getter=isEntitledToConsumeButtonsInBackground) _Bool entitledToConsumeButtonsInBackground; // @synthesize entitledToConsumeButtonsInBackground=_entitledToConsumeButtonsInBackground;
@property(retain, nonatomic) NSMutableSet *registrations; // @synthesize registrations=_registrations;
@property(nonatomic, getter=isRunningVisible) _Bool runningVisible; // @synthesize runningVisible=_runningVisible;
@property(nonatomic, getter=isSuspended) _Bool suspended; // @synthesize suspended=_suspended;
@property(retain, nonatomic) id <FBSServiceFacilityClientHandle> systemServiceClient; // @synthesize systemServiceClient=_systemServiceClient;
@end

