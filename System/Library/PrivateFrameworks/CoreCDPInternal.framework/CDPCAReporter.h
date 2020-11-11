/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreCDPInternal/CoreCDPInternal-Structs.h>
@class NSString, NSMutableDictionary;

@interface CDPCAReporter : NSObject {

	NSString* _eventName;
	NSMutableDictionary* _reportData;
	unsigned long long _initTime;
	mach_timebase_info _clock_timebase;

}
-(id)initWithEvent:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)sendReport;
-(double)machAbsoluteTimeToTimeInterval:(unsigned long long)arg1 ;
@end
