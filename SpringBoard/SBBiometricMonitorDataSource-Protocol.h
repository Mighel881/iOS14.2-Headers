//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@protocol SBBiometricMonitorObserver;

@protocol SBBiometricMonitorDataSource <NSObject>
@property(readonly, nonatomic) _Bool poseIsMarginal;
@property(readonly, nonatomic) _Bool matchRunning;
@property(readonly, nonatomic) _Bool presenceDetectRunning;
- (void)removeObserver:(id <SBBiometricMonitorObserver>)arg1;
- (void)addObserver:(id <SBBiometricMonitorObserver>)arg1;
@end

