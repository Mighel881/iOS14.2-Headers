/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MobileTimer/MobileTimer-Structs.h>
@class NSString, MTOSTransaction;

@interface MTCFUserNotification : NSObject {

	NSString* _identifier;
	/*^block*/id _handler;
	MTOSTransaction* _transaction;
	CFUserNotificationRef _notification;

}

@property (nonatomic,copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) id handler;                                        //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) MTOSTransaction * transaction;                   //@synthesize transaction=_transaction - In the implementation block
@property (assign,nonatomic) CFUserNotificationRef notification;              //@synthesize notification=_notification - In the implementation block
-(void)setNotification:(CFUserNotificationRef)arg1 ;
-(void)setTransaction:(MTOSTransaction *)arg1 ;
-(CFUserNotificationRef)notification;
-(NSString *)identifier;
-(MTOSTransaction *)transaction;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setHandler:(id)arg1 ;
-(id)handler;
@end

