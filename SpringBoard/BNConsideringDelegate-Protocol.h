//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@protocol BNConsidering, BNPresentable;

@protocol BNConsideringDelegate <NSObject>

@optional
- (void)bannerAuthority:(id <BNConsidering>)arg1 mayChangeDecisionForResponsiblePresentable:(id <BNPresentable>)arg2;
@end

