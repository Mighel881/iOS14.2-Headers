/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WebContentAnalysis/WebContentAnalysis-Structs.h>
@class NSMutableArray, NSNumber;

@interface WFLSMResult : NSObject {

	NSMutableArray* categoryJudgements;
	NSNumber* threshold;

}

@property (copy) NSNumber * threshold; 
+(id)LSMResultWithLSMResultRef:(LSMResultRef)arg1 threshold:(id)arg2 ;
+(id)extractScoresFromLSMResults:(LSMResultRef)arg1 ;
-(BOOL)isRestricted;
-(id)debugDescription;
-(id)description;
-(NSNumber *)threshold;
-(long long)numberOfCategories;
-(void)dealloc;
-(void)setThreshold:(NSNumber *)arg1 ;
-(id)initWithLSMResultRef:(LSMResultRef)arg1 threshold:(id)arg2 ;
-(long long)bestMatchingCategory;
-(float)scoreForCategory:(long long)arg1 ;
-(void)setScore:(float)arg1 forCategory:(long long)arg2 ;
@end

