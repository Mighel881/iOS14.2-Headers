//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface SBSStatusBarStyleOverridesAssertionAcquisitionHandlerEntry : NSObject
{
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_queue> *_queue;
}


// Remaining properties
@property(readonly, copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@end

