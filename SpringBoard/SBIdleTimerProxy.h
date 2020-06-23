//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBIdleTimerBase.h>

#import <SpringBoard/SBIdleTimerObserving-Protocol.h>

@class NSString;
@protocol SBIdleTimer;

@interface SBIdleTimerProxy : SBIdleTimerBase <SBIdleTimerObserving>
{
    id <SBIdleTimer> _sourceTimer;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <SBIdleTimer> sourceTimer; // @synthesize sourceTimer=_sourceTimer;
@property(readonly) Class superclass;
@end

