/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate;

@interface PXContextualMemoriesOptions : NSObject {

	double _accuracy;
	NSDate* _peopleProximityDate;

}

@property (assign,nonatomic) double accuracy;                           //@synthesize accuracy=_accuracy - In the implementation block
@property (nonatomic,retain) NSDate * peopleProximityDate;              //@synthesize peopleProximityDate=_peopleProximityDate - In the implementation block
-(id)init;
-(void)setAccuracy:(double)arg1 ;
-(NSDate *)peopleProximityDate;
-(void)setPeopleProximityDate:(NSDate *)arg1 ;
-(double)accuracy;
@end
