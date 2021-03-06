/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source, WBSFormAutoFillCorrectionsStore;
@class NSMutableArray, NSObject, WBSCrowdsourcedFeedbackDomainNormalizer;

@interface WBSFormAutoFillCorrectionsHistoryObserver : NSObject {

	NSMutableArray* _pendingRemovedHistoryItemsToProcess;
	NSMutableArray* _pendingRemovedHistoryVisitsToProcess;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSObject*<OS_dispatch_source> _coalescingTimerSource;
	WBSCrowdsourcedFeedbackDomainNormalizer* _domainNormalizer;
	id<WBSFormAutoFillCorrectionsStore> _correctionsStore;

}
-(void)_invalidateUpdateCoalescingTimer;
-(void)_updateCorrectionsStoreSoon;
-(void)flushPendingChangesAndDisconnectFromStoreAndHistory;
-(void)_updateCorrectionsStoreNow;
-(id)initWithCorrectionsStore:(id)arg1 ;
-(id)_normalizeURL:(id)arg1 ;
-(void)_historyVisitsWereRemoved:(id)arg1 ;
-(void)_historyItemsWereRemoved:(id)arg1 ;
-(void)_historyWasCleared:(id)arg1 ;
-(void)dealloc;
@end

