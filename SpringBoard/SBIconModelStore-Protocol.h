//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSDictionary;

@protocol SBIconModelStore <NSObject>
- (NSDictionary *)loadDesiredIconState:(id *)arg1;
- (NSDictionary *)loadCurrentIconState:(id *)arg1;
- (_Bool)deleteDesiredIconStateWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)deleteCurrentIconStateWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)saveDesiredIconState:(NSDictionary *)arg1 error:(id *)arg2;
- (_Bool)saveCurrentIconState:(NSDictionary *)arg1 error:(id *)arg2;
@end

