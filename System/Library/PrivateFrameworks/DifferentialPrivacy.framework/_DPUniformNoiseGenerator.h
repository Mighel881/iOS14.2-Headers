/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _DPUniformNoiseGenerator : NSObject {

	double _minValue;
	double _range;

}

@property (nonatomic,readonly) double minValue;              //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,readonly) double range;                 //@synthesize range=_range - In the implementation block
+(id)generatorWithValueRange:(id)arg1 ;
-(double)range;
-(id)init;
-(double)sample;
-(double)minValue;
-(id)description;
-(id)initWithValueRange:(id)arg1 ;
@end

