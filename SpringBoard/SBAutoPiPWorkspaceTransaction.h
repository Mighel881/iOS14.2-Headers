//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBWorkspaceTransaction.h>

@class NSString, SBWorkspaceEntity;

@interface SBAutoPiPWorkspaceTransaction : SBWorkspaceTransaction
{
    int _pidToPiP;
    SBWorkspaceEntity *_entityToPiP;
    long long _transitionStyle;
    long long _inferredTransitionStyle;
    NSString *_reason;
}


// Remaining properties
@property(readonly, copy, nonatomic) SBWorkspaceEntity *entityToPiP; // @synthesize entityToPiP=_entityToPiP;
@property(nonatomic) long long transitionStyle; // @synthesize transitionStyle=_transitionStyle;
@end

