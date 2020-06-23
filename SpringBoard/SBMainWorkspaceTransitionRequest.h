//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBWorkspaceTransitionRequest.h>

@class SBMainWorkspace;
@protocol SBBannerUnfurlSourceContextProviding;

@interface SBMainWorkspaceTransitionRequest : SBWorkspaceTransitionRequest
{
    long long _source;
    CDUnknownBlockType _transactionProvider;
    CDUnknownBlockType _transactionConfigurator;
    CDUnknownBlockType _completionBlock;
    _Bool _shouldPreventEmergencyNotificationBannerDismissal;
    _Bool _shouldPreventAutoPiP;
    id <SBBannerUnfurlSourceContextProviding> _bannerUnfurlSourceContextProvider;
}


// Remaining properties
@property(retain, nonatomic) id <SBBannerUnfurlSourceContextProviding> bannerUnfurlSourceContextProvider; // @synthesize bannerUnfurlSourceContextProvider=_bannerUnfurlSourceContextProvider;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) _Bool shouldPreventAutoPiP; // @synthesize shouldPreventAutoPiP=_shouldPreventAutoPiP;
@property(nonatomic) _Bool shouldPreventEmergencyNotificationBannerDismissal; // @synthesize shouldPreventEmergencyNotificationBannerDismissal=_shouldPreventEmergencyNotificationBannerDismissal;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(copy, nonatomic) CDUnknownBlockType transactionConfigurator; // @synthesize transactionConfigurator=_transactionConfigurator;
@property(copy, nonatomic) CDUnknownBlockType transactionProvider; // @synthesize transactionProvider=_transactionProvider;
@property(readonly, nonatomic) SBMainWorkspace *workspace; // @dynamic workspace;
@end

