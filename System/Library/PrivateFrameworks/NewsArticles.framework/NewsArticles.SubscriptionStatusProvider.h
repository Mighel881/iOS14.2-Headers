/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXSubscriptionStatusProviding.h>
#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>

@interface NewsArticles.SubscriptionStatusProvider : NSObject <SXSubscriptionStatusProviding, FCBundleSubscriptionChangeObserver> {

	 headline;
	 purchaseProvider;
	 bundleSubscriptionManager;
	 bundlePurchasePrewarmer;
	 observers;
	 bundleSubscriptionStatus;
	 channelSubscriptionStatus;

}

@property (assign,nonatomic) long long bundleSubscriptionStatus; 
@property (assign,nonatomic) long long channelSubscriptionStatus; 
-(void)removeObserver:(id)arg1 ;
-(void)bundleSubscriptionDidExpire:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)bundleSubscriptionDidSubscribe:(id)arg1 ;
-(id)init;
-(long long)bundleSubscriptionStatus;
-(void)setBundleSubscriptionStatus:(long long)arg1 ;
-(long long)channelSubscriptionStatus;
-(void)setChannelSubscriptionStatus:(long long)arg1 ;
-(void)purchaseListChangedWithNotification:(id)arg1 ;
@end

