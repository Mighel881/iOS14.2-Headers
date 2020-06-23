//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBMainWorkspaceTransaction.h>

#import <SpringBoard/BSTransactionObserver-Protocol.h>

@class NSString, SBSpotlightSettings, SBSpotlightTransientOverlayViewController;

@interface SBSpotlightTransientOverlayInteractiveGestureTransaction : SBMainWorkspaceTransaction <BSTransactionObserver>
{
    SBSpotlightSettings *_settings;
    SBSpotlightTransientOverlayViewController *_spotlightTransientOverlayViewController;
    SBMainWorkspaceTransaction *_presentTransientOverlayTransaction;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SBMainWorkspaceTransaction *presentTransientOverlayTransaction; // @synthesize presentTransientOverlayTransaction=_presentTransientOverlayTransaction;
@property(retain, nonatomic) SBSpotlightSettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) SBSpotlightTransientOverlayViewController *spotlightTransientOverlayViewController; // @synthesize spotlightTransientOverlayViewController=_spotlightTransientOverlayViewController;
@property(readonly) Class superclass;
@end

