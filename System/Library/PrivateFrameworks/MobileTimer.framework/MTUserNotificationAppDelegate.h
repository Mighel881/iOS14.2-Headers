/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@class UNUserNotificationCenter, NSString;

@interface MTUserNotificationAppDelegate : NSObject <UNUserNotificationCenterDelegate> {

	UNUserNotificationCenter* _notificationCenter;

}

@property (nonatomic,retain) UNUserNotificationCenter * notificationCenter;              //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UNUserNotificationCenter *)notificationCenter;
-(id)init;
-(void)setNotificationCenter:(UNUserNotificationCenter *)arg1 ;
-(void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

