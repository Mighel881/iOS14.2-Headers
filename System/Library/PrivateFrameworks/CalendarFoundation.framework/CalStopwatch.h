/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface CalStopwatch : NSObject {

	BOOL _isRunning;
	unsigned long long _lastStartTime;
	unsigned long long _elapsedTime;
	BOOL _hasValidElapsedTime;
	NSMutableDictionary* _events;
	BOOL _usesSignalFlags;

}

@property (assign) BOOL usesSignalFlags;              //@synthesize usesSignalFlags=_usesSignalFlags - In the implementation block
-(id)elapsedTimeAsString:(int)arg1 ;
-(void)start;
-(id)init;
-(BOOL)usesSignalFlags;
-(unsigned long long)elapsedTimeAsNumber:(int)arg1 ;
-(double)markEventEnd:(id)arg1 ;
-(void)markEventStart:(id)arg1 ;
-(void)reset;
-(id)description;
-(unsigned long long)elapsedTimeInNanoseconds;
-(void)setUsesSignalFlags:(BOOL)arg1 ;
-(void)stop;
-(double)markEventSplit:(id)arg1 ;
@end

