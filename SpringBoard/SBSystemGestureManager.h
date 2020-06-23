//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/UIGestureRecognizerDelegate-Protocol.h>

@class FBSDisplayIdentity, NSMutableDictionary, NSMutableSet, NSSet, NSString, SBIndirectTouchLifecycleMonitor, UIGestureRecognizer;

@interface SBSystemGestureManager : NSObject <UIGestureRecognizerDelegate, BSDescriptionProviding>
{
    FBSDisplayIdentity *_displayIdentity;
    NSMutableDictionary *_typeToGesture;
    NSMutableDictionary *_gestureToType;
    NSMutableDictionary *_typeToState;
    NSMutableSet *_recognizingTouchGestures;
    NSMutableSet *_touchGestures;
    NSMutableSet *_gesturesDisabledAssertions;
    NSSet *_gestureTypesAllowedWhileDisableAssertionsExist;
    NSSet *_gesturesPreventedByStylus;
    UIGestureRecognizer *_stylusPriorityRecognizer;
    _Bool _systemGesturesDisabledForAccessibility;
    SBIndirectTouchLifecycleMonitor *_indirectTouchLifecycleMonitor;
}


// Remaining properties
@property(readonly, nonatomic, getter=isAnyTouchGestureRunning) _Bool anyTouchGestureRunning;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSSet *gesturesPreventedByStylus; // @synthesize gesturesPreventedByStylus=_gesturesPreventedByStylus;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SBIndirectTouchLifecycleMonitor *indirectTouchLifecycleMonitor; // @synthesize indirectTouchLifecycleMonitor=_indirectTouchLifecycleMonitor;
@property(readonly) Class superclass;
@property(nonatomic, getter=areSystemGesturesDisabledForAccessibility) _Bool systemGesturesDisabledForAccessibility; // @synthesize systemGesturesDisabledForAccessibility=_systemGesturesDisabledForAccessibility;
@end

