/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTBluetoothManagerNotificationCarKitConnectionStateChanged : RTNotification {

	long long _carKitConnectionState;

}

@property (nonatomic,readonly) long long carKitConnectionState;              //@synthesize carKitConnectionState=_carKitConnectionState - In the implementation block
-(id)initWithCarKitConnectionState:(long long)arg1 ;
-(long long)carKitConnectionState;
@end

