//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBIcon, SBIconListModel;

@protocol SBIconListModelObserver <NSObject>

@optional
- (void)iconListIconStateDidDirty:(SBIconListModel *)arg1;
- (void)iconListHiddenDidChange:(SBIconListModel *)arg1;
- (void)iconList:(SBIconListModel *)arg1 didMoveIcon:(SBIcon *)arg2;
- (void)iconList:(SBIconListModel *)arg1 didRemoveIcon:(SBIcon *)arg2;
- (void)iconList:(SBIconListModel *)arg1 didReplaceIcon:(SBIcon *)arg2 withIcon:(SBIcon *)arg3;
- (void)iconList:(SBIconListModel *)arg1 didAddIcon:(SBIcon *)arg2;
@end

