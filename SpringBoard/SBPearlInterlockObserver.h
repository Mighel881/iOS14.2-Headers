//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBUIBiometricResourceObserver-Protocol.h>

@class NSString;
@protocol SBUIBiometricResource;

@interface SBPearlInterlockObserver : NSObject <SBUIBiometricResourceObserver>
{
    id <SBUIBiometricResource> _biometricResource;
    _Bool _fired;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

