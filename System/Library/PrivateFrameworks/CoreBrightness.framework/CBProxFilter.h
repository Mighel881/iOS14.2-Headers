/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreBrightness/CBFilter.h>

@interface CBProxFilter : CBFilter {

	float _proxReleaseTime;
	BOOL _proxHasJustBeenRemoved;
	float _proxTriggerDelay;
	BOOL _triggered;

}

@property (assign,getter=isTriggered,nonatomic) BOOL triggered;              //@synthesize triggered=_triggered - In the implementation block
-(id)init;
-(id)filterEvent:(id)arg1 ;
-(id)handleProximityEvent:(id)arg1 ;
-(void)setTriggered:(BOOL)arg1 ;
-(BOOL)isTriggered;
-(void)dealloc;
-(id)handleALSEvent:(id)arg1 ;
@end
