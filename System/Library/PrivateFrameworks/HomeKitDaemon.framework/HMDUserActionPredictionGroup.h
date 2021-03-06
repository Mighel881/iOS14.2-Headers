/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDUserActionPredictionGroup.h>

@class NSMutableArray, NSUUID, NSArray, HMUserActionPrediction, NSString;

@interface HMDUserActionPredictionGroup : HMFObject <HMDUserActionPredictionGroup> {

	double _maxScore;
	NSMutableArray* _mutablePredictions;

}

@property (copy,readonly) NSMutableArray * mutablePredictions;                            //@synthesize mutablePredictions=_mutablePredictions - In the implementation block
@property (copy,readonly) NSUUID * groupUUID; 
@property (readonly) double predictionScore; 
@property (copy,readonly) NSArray * predictions; 
@property (copy,readonly) HMUserActionPrediction * userActionRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)predictions;
-(double)predictionScore;
-(unsigned long long)targetGroupType;
-(NSUUID *)groupUUID;
-(HMUserActionPrediction *)userActionRepresentation;
-(id)initWithPredictions:(id)arg1 ;
-(void)updateWithPrediction:(id)arg1 ;
-(BOOL)containsPrediction:(id)arg1 ;
-(BOOL)shouldContainPrediction:(id)arg1 ;
-(void)_updateMaxScore;
-(NSMutableArray *)mutablePredictions;
-(unsigned long long)frameworkPredictionTypeForGroup;
@end

