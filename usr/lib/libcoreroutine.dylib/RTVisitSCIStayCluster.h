/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSMutableArray, RTLocation;

@interface RTVisitSCIStayCluster : NSObject {

	double _meanOfSquaredLat_deg;
	double _meanOfSquaredLon_deg;
	jd _sumOfVectorLon;
	double _motionInducedDev_m;
	NSDate* _lastProcessedSampleDateForAdaption;
	NSMutableArray* _residuePoints;
	unsigned long long _numOfDataPoints;
	unsigned long long _numOfAdaptionSample;
	NSDate* _potentialEntry;
	NSDate* _potentialExit;
	NSDate* _lastProcessedSample;
	NSMutableArray* _outliers;
	RTLocation* _centroid;
	RTLocation* _lastTrustedLocation;

}

@property (nonatomic,readonly) unsigned long long numOfDataPoints;                  //@synthesize numOfDataPoints=_numOfDataPoints - In the implementation block
@property (nonatomic,readonly) unsigned long long numOfOutliers; 
@property (nonatomic,readonly) unsigned long long numOfResiduePoints; 
@property (nonatomic,readonly) unsigned long long numOfAdaptionSample;              //@synthesize numOfAdaptionSample=_numOfAdaptionSample - In the implementation block
@property (nonatomic,readonly) NSDate * potentialEntry;                             //@synthesize potentialEntry=_potentialEntry - In the implementation block
@property (nonatomic,readonly) NSDate * potentialExit;                              //@synthesize potentialExit=_potentialExit - In the implementation block
@property (nonatomic,readonly) NSDate * lastProcessedSample;                        //@synthesize lastProcessedSample=_lastProcessedSample - In the implementation block
@property (nonatomic,readonly) NSMutableArray * outliers;                           //@synthesize outliers=_outliers - In the implementation block
@property (nonatomic,readonly) RTLocation * centroid;                               //@synthesize centroid=_centroid - In the implementation block
@property (nonatomic,readonly) RTLocation * lastTrustedLocation;                    //@synthesize lastTrustedLocation=_lastTrustedLocation - In the implementation block
+(double)evaluateMotionInducedDeviationFromMeanLat:(double)arg1 meanOfSquaredLat_deg:(double)arg2 meanLon_deg:(double)arg3 meanOfSquaredLon_deg:(double)arg4 ;
+(double)evalMaxUncFromMotionDevMotionInducedDev:(double)arg1 andMeasInducedDev:(double)arg2 ;
+(double)evaluateClustThresFromClustThresSlv:(double)arg1 motionInducedDev:(double)arg2 adaptionBasis:(double)arg3 adaptionSampleCnt:(long long)arg4 adaptionRate:(double)arg5 ;
-(unsigned long long)numOfOutliers;
-(id)init;
-(unsigned long long)numOfResiduePoints;
-(unsigned long long)numOfDataPoints;
-(id)centroidForVisitType:(long long)arg1 confidence:(double)arg2 ;
-(double)dwellTimeIntervalWithDate:(id)arg1 ;
-(id)description;
-(double)getRadiusForDate:(id)arg1 ;
-(void)addOutlier:(id)arg1 ;
-(void)addNewPoint:(id)arg1 event:(unsigned long long)arg2 lcFSMState:(unsigned long long)arg3 fsmState:(unsigned long long)arg4 ;
-(NSDate *)potentialEntry;
-(NSDate *)lastProcessedSample;
-(NSDate *)potentialExit;
-(RTLocation *)centroid;
-(void)updateLastTrustedLocation:(id)arg1 ;
-(RTLocation *)lastTrustedLocation;
-(NSMutableArray *)outliers;
-(id)createVisit:(long long)arg1 confidence:(double)arg2 ;
-(unsigned long long)numOfAdaptionSample;
@end
