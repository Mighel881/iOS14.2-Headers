//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SBWorkStore : NSObject
{
    NSMutableDictionary *_workItemsPerKey;
    NSMutableArray *_keysWithWork;
    NSMutableDictionary *_workExpirationPeriods;
    NSObject<OS_dispatch_queue> *_workQueue;
    unsigned long long _maxWorkPerKey;
    NSMutableArray *_observers;
    NSObject<OS_dispatch_queue> *_observerQueue;
    double _defaultWorkExpirationPeriod;
}


// Remaining properties
@property(nonatomic) double defaultWorkExpirationPeriod; // @synthesize defaultWorkExpirationPeriod=_defaultWorkExpirationPeriod;
@property(readonly, nonatomic) NSArray *keysWithWork;
@property(readonly, nonatomic) unsigned long long maxWorkPerKey; // @synthesize maxWorkPerKey=_maxWorkPerKey;
@property(readonly, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSMutableDictionary *workItemsPerKey; // @synthesize workItemsPerKey=_workItemsPerKey;
@end
