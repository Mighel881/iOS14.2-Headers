//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBDragAndDropAppActivationWorkspaceTransaction, SBFluidSwitcherGesture;

@protocol SBDragAndDropAppActivationWorkspaceTransactionDelegate <NSObject>
- (void)dragAndDropTransaction:(SBDragAndDropAppActivationWorkspaceTransaction *)arg1 didEndGesture:(SBFluidSwitcherGesture *)arg2;
- (void)dragAndDropTransaction:(SBDragAndDropAppActivationWorkspaceTransaction *)arg1 didUpdateGesture:(SBFluidSwitcherGesture *)arg2;
- (void)dragAndDropTransaction:(SBDragAndDropAppActivationWorkspaceTransaction *)arg1 didBeginGesture:(SBFluidSwitcherGesture *)arg2;
@end
