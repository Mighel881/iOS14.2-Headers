/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate;

@interface PHAWorkerHealthScoreEntry : NSObject {

	float _score;
	NSDate* _dateRecorded;

}

@property (nonatomic,readonly) float score;                             //@synthesize score=_score - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dateRecorded;              //@synthesize dateRecorded=_dateRecorded - In the implementation block
-(float)score;
-(id)initWithScore:(float)arg1 ;
-(NSDate *)dateRecorded;
@end

