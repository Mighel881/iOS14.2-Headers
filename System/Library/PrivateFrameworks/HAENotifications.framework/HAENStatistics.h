/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HAENotifications.framework/HAENotifications
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <HAENotifications/HAENotifications-Structs.h>
@class NSObject;

@interface HAENStatistics : NSObject {

	NSObject*<OS_dispatch_queue> _eventQueue;

}
+(id)sharedInstance;
-(void)processMessage:(id)arg1 ;
-(id)init;
-(void)_sendMessage:(id)arg1 ;
-(void)processStatsForEvent:(id)arg1 ;
-(id)volumeActionString:(unsigned)arg1 ;
-(void)processStatsForLocationGating:(SCD_Struct_HA1)arg1 ;
@end

