/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDAnalyticsSignificantTimeEventData : HMFObject {

	BOOL _offsetPresent;
	NSString* _significantEvent;

}

@property (nonatomic,copy) NSString * significantEvent;              //@synthesize significantEvent=_significantEvent - In the implementation block
@property (assign) BOOL offsetPresent;                               //@synthesize offsetPresent=_offsetPresent - In the implementation block
-(NSString *)significantEvent;
-(void)setSignificantEvent:(NSString *)arg1 ;
-(void)setOffsetPresent:(BOOL)arg1 ;
-(BOOL)offsetPresent;
@end

