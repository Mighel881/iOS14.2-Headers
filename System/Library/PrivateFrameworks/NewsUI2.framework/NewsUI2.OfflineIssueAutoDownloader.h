/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>
#import <libobjc.A.dylib/FCSubscriptionObserving.h>

@interface NewsUI2.OfflineIssueAutoDownloader : NSObject <FCBundleSubscriptionChangeObserver, FCSubscriptionObserving> {

	 currentIssuesChecker;
	 offlineIssueManager;
	 bundleSubscriptionManager;
	 triggerDeduper;

}
-(void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 moveTags:(id)arg4 removeTags:(id)arg5 subscriptionType:(unsigned long long)arg6 eventInitiationLevel:(long long)arg7 ;
-(void)bundleSubscriptionDidSubscribe:(id)arg1 ;
-(id)init;
@end
