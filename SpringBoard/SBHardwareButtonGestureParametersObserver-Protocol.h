//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBHardwareButtonGestureParameters;
@protocol SBHardwareButtonGestureParametersProvider;

@protocol SBHardwareButtonGestureParametersObserver <NSObject>
- (void)provider:(id <SBHardwareButtonGestureParametersProvider>)arg1 didUpdateButtonGestureParameters:(SBHardwareButtonGestureParameters *)arg2;
@end

