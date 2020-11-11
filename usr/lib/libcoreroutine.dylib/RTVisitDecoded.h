/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSNumber;

@interface RTVisitDecoded : NSObject {

	double _logProbability;
	NSDate* _entryDate;
	NSDate* _exitDate;

}

@property (assign,nonatomic) double logProbability;                //@synthesize logProbability=_logProbability - In the implementation block
@property (nonatomic,retain) NSDate * entryDate;                   //@synthesize entryDate=_entryDate - In the implementation block
@property (nonatomic,retain) NSDate * exitDate;                    //@synthesize exitDate=_exitDate - In the implementation block
@property (nonatomic,readonly) NSNumber * outputType; 
-(id)init;
-(NSDate *)exitDate;
-(id)description;
-(void)setExitDate:(NSDate *)arg1 ;
-(void)setEntryDate:(NSDate *)arg1 ;
-(BOOL)noVisit;
-(NSNumber *)outputType;
-(NSDate *)entryDate;
-(void)setLogProbability:(double)arg1 ;
-(double)logProbability;
-(id)initWithEntryDate:(id)arg1 exitDate:(id)arg2 logProbability:(double)arg3 ;
-(BOOL)partialVisit;
-(BOOL)completeVisit;
@end
