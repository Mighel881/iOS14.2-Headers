/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface WBSForYouRecommendationMediatorDataSource : NSObject
-(void)retrieveRecommendationsMatchingTopic:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)emitStartRetrievingRecommendationsPerformanceMarker;
-(void)recommendationsWithTopics:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)notifyContentsDidChangeFromSource:(unsigned long long)arg1 ;
-(void)notifyImageWasUpdatedForRecommendation:(id)arg1 ;
@end
