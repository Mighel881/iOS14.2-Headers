//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/NSCopying-Protocol.h>

@class NSString;

@interface SBIdleTimerDescriptor : NSObject <BSDescriptionProviding, NSCopying>
{
    long long _timerMode;
    double _sampleInterval;
    double _warnInterval;
    double _totalInterval;
    double _quickUnwarnInterval;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) double quickUnwarnInterval; // @synthesize quickUnwarnInterval=_quickUnwarnInterval;
@property(nonatomic) double sampleInterval; // @synthesize sampleInterval=_sampleInterval;
@property(readonly, nonatomic) _Bool shouldExpireAfterWarn;
@property(readonly, nonatomic) _Bool shouldWarn;
@property(readonly) Class superclass;
@property(nonatomic) long long timerMode; // @synthesize timerMode=_timerMode;
@property(nonatomic) double totalInterval; // @synthesize totalInterval=_totalInterval;
@property(nonatomic) double warnInterval; // @synthesize warnInterval=_warnInterval;
@end

