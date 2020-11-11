/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _DPLaplaceNoiseGenerator;

@interface _DPNumberRandomizer : NSObject {

	unsigned long long _range;
	double _epsilon;
	_DPLaplaceNoiseGenerator* _generator;

}

@property (nonatomic,readonly) unsigned long long range;                          //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) double epsilon;                                    //@synthesize epsilon=_epsilon - In the implementation block
@property (nonatomic,readonly) _DPLaplaceNoiseGenerator * generator;              //@synthesize generator=_generator - In the implementation block
+(id)numberRandomizerWithRange:(unsigned long long)arg1 epsilon:(double)arg2 ;
-(unsigned long long)range;
-(_DPLaplaceNoiseGenerator *)generator;
-(id)init;
-(id)description;
-(double)epsilon;
-(id)randomize:(id)arg1 ;
-(id)initWithRange:(unsigned long long)arg1 epsilon:(double)arg2 ;
@end
