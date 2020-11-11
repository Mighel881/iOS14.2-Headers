/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarUIKit/CalendarUIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EKEvent, NSArray, NSSet;

@interface EKSeriesDetails : NSObject <NSCopying> {

	EKEvent* _masterEvent;
	NSArray* _detachedEvents;
	NSSet* _exceptionDates;

}

@property (retain) EKEvent * masterEvent;                 //@synthesize masterEvent=_masterEvent - In the implementation block
@property (retain) NSArray * detachedEvents;              //@synthesize detachedEvents=_detachedEvents - In the implementation block
@property (retain) NSSet * exceptionDates;                //@synthesize exceptionDates=_exceptionDates - In the implementation block
-(NSSet *)exceptionDates;
-(void)setExceptionDates:(NSSet *)arg1 ;
-(EKEvent *)masterEvent;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMasterEvent:(EKEvent *)arg1 ;
-(NSArray *)detachedEvents;
-(void)setDetachedEvents:(NSArray *)arg1 ;
@end
