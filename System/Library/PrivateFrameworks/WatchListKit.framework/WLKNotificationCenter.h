/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WLKNotificationsImpl, WLKNotificationCenterDelegate;
@interface WLKNotificationCenter : NSObject {

	id<WLKNotificationsImpl> _impl;
	id<WLKNotificationCenterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WLKNotificationCenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)defaultCenter;
-(void)setBadgeNumber:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setBadgeString:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)post:(id)arg1 title:(id)arg2 body:(id)arg3 options:(id)arg4 ;
-(id)init;
-(BOOL)isCategoryEnabledByUser:(long long)arg1 ;
-(id<WLKNotificationCenterDelegate>)delegate;
-(void)setDelegate:(id<WLKNotificationCenterDelegate>)arg1 ;
@end

