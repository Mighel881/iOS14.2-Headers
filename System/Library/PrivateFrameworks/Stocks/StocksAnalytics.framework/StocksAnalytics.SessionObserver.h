/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks/StocksAnalytics.framework/StocksAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>

@interface StocksAnalytics.SessionObserver : NSObject <FCBundleSubscriptionChangeObserver> {

	 watchlistService;
	 tracker;
	 sessionManager;
	 cloudContext;
	 userContext;
	 client;
	 appConfigurationManager;
	 window;

}
-(void)pushOrientationData;
-(id)init;
-(void)bundleSubscriptionDidExpire:(id)arg1 ;
-(void)bundleSubscriptionDidChange:(id)arg1 previousBundleSubscription:(id)arg2 ;
-(void)bundleSubscriptionDidSubscribe:(id)arg1 ;
-(void)dealloc;
@end
