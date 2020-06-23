//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, TLAlert;

@interface SBUISound : NSObject
{
    long long _soundType;
    unsigned int _systemSoundID;
    unsigned int _resolvedSystemSoundID;
    unsigned long long _soundBehavior;
    NSDictionary *_vibrationPattern;
    TLAlert *_toneAlert;
    CDUnknownBlockType _completionBlock;
    NSString *_songPath;
    long long _eventType;
}


// Remaining properties
@property(nonatomic, setter=_setResolvedSoundID:) unsigned int _resolvedSystemSoundID; // @synthesize _resolvedSystemSoundID;
@property(nonatomic) long long eventType; // @synthesize eventType=_eventType;
@property(copy, nonatomic) NSString *songPath; // @synthesize songPath=_songPath;
@property(nonatomic) unsigned long long soundBehavior; // @synthesize soundBehavior=_soundBehavior;
@property(nonatomic) long long soundType; // @synthesize soundType=_soundType;
@property(nonatomic) unsigned int systemSoundID; // @synthesize systemSoundID=_systemSoundID;
@property(retain, nonatomic) TLAlert *toneAlert; // @synthesize toneAlert=_toneAlert;
@property(retain, nonatomic) NSDictionary *vibrationPattern; // @synthesize vibrationPattern=_vibrationPattern;
@end
