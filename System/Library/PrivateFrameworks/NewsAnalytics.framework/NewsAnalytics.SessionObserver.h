/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsAnalytics.framework/NewsAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSNewsAnalyticsSessionManagerObserving.h>
#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>
#import <libobjc.A.dylib/FCUserInfoObserving.h>
#import <libobjc.A.dylib/FCSubscriptionObserving.h>

@class NSString;

@interface NewsAnalytics.SessionObserver : NSObject <NSSNewsAnalyticsSessionManagerObserving, FCBundleSubscriptionChangeObserver, FCUserInfoObserving, FCSubscriptionObserving> {

	 sessionManager;
	 tracker;
	 cloudContext;
	 client;
	 window;
	 sceneSessionIdentifier;

}

@property (copy,nonatomic) NSString * sceneSessionIdentifier; 
-(void)sessionDidStartWithSessionID:(id)arg1 sourceApplication:(id)arg2 ;
-(void)sessionWillResignActive;
-(void)sessionWillEndWithEndReason:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(NSString *)sceneSessionIdentifier;
-(void)userInfoDidChangeFeldsparID:(id)arg1 fromCloud:(BOOL)arg2 ;
-(void)bundleSubscriptionDidExpire:(id)arg1 ;
-(void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 moveTags:(id)arg4 removeTags:(id)arg5 subscriptionType:(unsigned long long)arg6 eventInitiationLevel:(long long)arg7 ;
-(void)bundleSubscriptionDidChange:(id)arg1 previousBundleSubscription:(id)arg2 ;
-(void)bundleSubscriptionDidSubscribe:(id)arg1 ;
-(void)dealloc;
-(void)setSceneSessionIdentifier:(NSString *)arg1 ;
-(void)pushContentEnvironmentData;
-(void)pushOrientationData;
-(void)pushMobileData;
-(void)offerDidChange:(id)arg1 ;
-(void)pushUserSubscriptionContextData;
-(void)pushSessionDataWithRegionIDs:(id)arg1 ;
@end

