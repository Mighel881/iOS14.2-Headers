//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBAppToAppWorkspaceTransaction.h>

#import <SpringBoard/BSTransactionObserver-Protocol.h>

@class NSString, SBRotateScenesWorkspaceTransaction;

@interface SBActivateAppClipFromPlaceholderWorkspaceTransaction : SBAppToAppWorkspaceTransaction <BSTransactionObserver>
{
    SBRotateScenesWorkspaceTransaction *_rotateScenesTransaction;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
