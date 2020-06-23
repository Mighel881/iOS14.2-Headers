//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class STTelephonyStateProvider;

@protocol STTelephonyStateObserver <NSObject>

@optional
- (void)mobileEquipmentInfoDidChangeForStateProvider:(STTelephonyStateProvider *)arg1 slot:(long long)arg2;
- (void)carrierBundleInfoDidChangeForStateProvider:(STTelephonyStateProvider *)arg1 slot:(long long)arg2;
- (void)subscriptionInfoDidChangeForStateProvider:(STTelephonyStateProvider *)arg1 slot:(long long)arg2;
@end
