/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface PPEventQuery : NSObject <NSSecureCoding> {

	NSDate* _fromDate;
	NSDate* _toDate;

}

@property (nonatomic,retain) NSDate * fromDate;              //@synthesize fromDate=_fromDate - In the implementation block
@property (nonatomic,retain) NSDate * toDate;                //@synthesize toDate=_toDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)toDate;
-(NSDate *)fromDate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setToDate:(NSDate *)arg1 ;
-(void)setFromDate:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

