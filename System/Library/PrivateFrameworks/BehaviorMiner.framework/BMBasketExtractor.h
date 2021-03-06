/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface BMBasketExtractor : NSObject {

	BOOL _shouldStop;
	double _samplingInterval;

}

@property (assign) BOOL shouldStop;                                  //@synthesize shouldStop=_shouldStop - In the implementation block
@property (nonatomic,readonly) double samplingInterval;              //@synthesize samplingInterval=_samplingInterval - In the implementation block
-(double)samplingInterval;
-(id)slotForHourOfDay:(id)arg1 slotDuration:(id)arg2 ;
-(void)terminateEarly;
-(id)initWithSamplingInterval:(double)arg1 ;
-(id)extractBasketsFromEvents:(id)arg1 withTemporalFeatures:(BOOL)arg2 ;
-(id)extractBasketsFromEvents:(id)arg1 itemTypes:(id)arg2 ;
-(void)setShouldStop:(BOOL)arg1 ;
-(id)extractDatedBasketsFromEvents:(id)arg1 itemTypes:(id)arg2 ;
-(id)slotForHourOfDay:(id)arg1 ;
-(id)extractTemporalItemsFromDate:(id)arg1 ;
-(BOOL)shouldStop;
@end

