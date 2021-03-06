/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSDate, NSTimeZone, NSString;

@interface NSDateCheckingResult : NSTextCheckingResult {

	NSRange _range;
	NSDate* _date;
	NSTimeZone* _timeZone;
	double _duration;
	NSDate* _referenceDate;
	id _underlyingResult;
	BOOL _timeIsSignificant;
	BOOL _timeIsApproximate;
	BOOL _timeIsPast;
	NSString* _leadingText;
	NSString* _trailingText;

}

@property (readonly) NSTimeZone * timeZone; 
@property (readonly) double duration; 
@property (readonly) NSDate * referenceDate; 
@property (readonly) void* underlyingResult; 
@property (readonly) BOOL timeIsSignificant; 
@property (readonly) BOOL timeIsApproximate; 
@property (readonly) BOOL timeIsPast; 
+(BOOL)supportsSecureCoding;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6 timeIsSignificant:(BOOL)arg7 timeIsApproximate:(BOOL)arg8 ;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6 ;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6 timeIsSignificant:(BOOL)arg7 timeIsApproximate:(BOOL)arg8 timeIsPast:(BOOL)arg9 ;
-(NSRange)range;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6 timeIsSignificant:(BOOL)arg7 timeIsApproximate:(BOOL)arg8 timeIsPast:(BOOL)arg9 leadingText:(id)arg10 trailingText:(id)arg11 ;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 ;
-(id)resultByAdjustingRangesWithOffset:(long long)arg1 ;
-(unsigned long long)resultType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 ;
-(BOOL)timeIsPast;
-(id)date;
-(id)trailingText;
-(id)leadingText;
-(id)description;
-(NSTimeZone *)timeZone;
-(BOOL)timeIsSignificant;
-(BOOL)timeIsApproximate;
-(BOOL)_adjustRangesWithOffset:(long long)arg1 ;
-(void*)underlyingResult;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(double)duration;
-(NSDate *)referenceDate;
-(void)dealloc;
@end

