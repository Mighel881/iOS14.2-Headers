//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class CPSClipOverlayViewController, NSString, SBAppClipOverlayCoordinator;

@protocol SBAppClipOverlayCoordinatorParticipant <NSObject>
- (NSString *)participantName;
- (void)appClipOverlayCoordinator:(SBAppClipOverlayCoordinator *)arg1 requestsSurrenderOfViewController:(CPSClipOverlayViewController *)arg2;
@end

