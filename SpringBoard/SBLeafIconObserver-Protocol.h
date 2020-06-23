//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBIconObserver-Protocol.h>

@class SBLeafIcon;
@protocol SBLeafIconDataSource;

@protocol SBLeafIconObserver <SBIconObserver>

@optional
- (void)leafIcon:(SBLeafIcon *)arg1 didChangeActiveDataSource:(id <SBLeafIconDataSource>)arg2;
- (void)leafIcon:(SBLeafIcon *)arg1 didRemoveIconDataSource:(id <SBLeafIconDataSource>)arg2;
- (void)leafIcon:(SBLeafIcon *)arg1 didAddIconDataSource:(id <SBLeafIconDataSource>)arg2;
@end
