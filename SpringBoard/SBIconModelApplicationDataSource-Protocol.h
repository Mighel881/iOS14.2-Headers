//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString, SBApplication, SBIconModel;

@protocol SBIconModelApplicationDataSource <NSObject>
@property(readonly, copy, nonatomic) NSArray *allApplications;
- (NSDictionary *)placeholdersByDisplayIDForIconModel:(SBIconModel *)arg1;
- (SBApplication *)iconModel:(SBIconModel *)arg1 applicationWithBundleIdentifier:(NSString *)arg2;
@end

