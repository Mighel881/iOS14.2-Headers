//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBViewMorphAnimatorDataSource-Protocol.h>

@class NSString;

@interface SBPIPMorphAnimatorDataSource : NSObject <SBViewMorphAnimatorDataSource>
{
    _Bool _gestureInitiated;
    int _targetProcessIdentifier;
    NSString *_scenePersistenceIdentifier;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isGestureInitiated) _Bool gestureInitiated; // @synthesize gestureInitiated=_gestureInitiated;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *scenePersistenceIdentifier; // @synthesize scenePersistenceIdentifier=_scenePersistenceIdentifier;
@property(readonly) Class superclass;
@property(readonly, nonatomic) int targetProcessIdentifier; // @synthesize targetProcessIdentifier=_targetProcessIdentifier;
@end
