/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface AppStoreKit.RemotePersonalizationAppStateDataSource : NSObject {

	 delegate;
	 accessQueue;
	 expectedAppStates;
	 registeredAdamIds;
	 bag;
	 urlSession;
	 process;

}
-(id)init;
-(void)dealloc;
-(void)storeAccountDidChange;
-(void)didCompletePurchase:(id)arg1 ;
-(void)registerPersonalizedAdamIds:(id)arg1 ;
@end
