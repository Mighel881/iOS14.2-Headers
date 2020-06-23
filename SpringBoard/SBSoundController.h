//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, UINotificationFeedbackGenerator;

@interface SBSoundController : NSObject
{
    NSMutableDictionary *_soundsBySystemSoundIDs;
    NSMutableSet *_usedNotificationTypes;
    UINotificationFeedbackGenerator *_hapticFeedbackGenerator;
    NSMapTable *_toneAlertsBySounds;
    NSMapTable *_soundsByToneAlerts;
    NSHashTable *_observers;
    unsigned long long _pendingCallbacks;
    NSMutableArray *_pendedCallbacks;
}

@end
