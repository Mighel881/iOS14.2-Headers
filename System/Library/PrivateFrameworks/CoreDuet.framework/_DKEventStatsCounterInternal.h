/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreDuet/CoreDuet-Structs.h>
@class NSString, NSArray, PETEventTracker;

@interface _DKEventStatsCounterInternal : NSObject {

	os_unfair_lock_s _lock;
	BOOL _hasType;
	BOOL _hasResult;
	unsigned long long _numCounters;
	unsigned long long* _counters;
	NSString* _eventName;
	NSString* _eventType;
	NSArray* _typeValues;
	NSString* _domain;
	PETEventTracker* _eventTracker;

}
-(void)dealloc;
@end
