//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSProgressReporting-Protocol.h>
#import <SpringBoard/UIDragDropSession-Protocol.h>

@class NSProgress;
@protocol UIDragSession;

@protocol UIDropSession <UIDragDropSession, NSProgressReporting>
@property(nonatomic) unsigned long long progressIndicatorStyle;
@property(readonly, nonatomic) id <UIDragSession> localDragSession;
- (NSProgress *)loadObjectsOfClass:(Class)arg1 completion:(void (^)(NSArray *))arg2;
@end

