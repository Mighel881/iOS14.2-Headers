//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBIconModelStore-Protocol.h>

@class NSDictionary, NSString;

@interface SBIconProfileModelMemoryStore : NSObject <SBIconModelStore>
{
    NSDictionary *_currentState;
    NSDictionary *_desiredState;
}


// Remaining properties
@property(copy, nonatomic) NSDictionary *currentState; // @synthesize currentState=_currentState;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSDictionary *desiredState; // @synthesize desiredState=_desiredState;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

