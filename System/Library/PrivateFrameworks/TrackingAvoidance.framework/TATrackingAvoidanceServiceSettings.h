/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface TATrackingAvoidanceServiceSettings : NSObject {

	BOOL _enableTAFilterGeneral;
	BOOL _enableTAFilterVisits;
	BOOL _enableTAFilterSingleVisit;
	double _classificationTimeInterval;

}

@property (nonatomic,readonly) BOOL enableTAFilterGeneral;                     //@synthesize enableTAFilterGeneral=_enableTAFilterGeneral - In the implementation block
@property (nonatomic,readonly) BOOL enableTAFilterVisits;                      //@synthesize enableTAFilterVisits=_enableTAFilterVisits - In the implementation block
@property (nonatomic,readonly) BOOL enableTAFilterSingleVisit;                 //@synthesize enableTAFilterSingleVisit=_enableTAFilterSingleVisit - In the implementation block
@property (nonatomic,readonly) double classificationTimeInterval;              //@synthesize classificationTimeInterval=_classificationTimeInterval - In the implementation block
-(BOOL)enableTAFilterVisits;
-(id)initWithEnableTAFilterGeneral:(BOOL)arg1 enableTAFilterVisits:(BOOL)arg2 enableTAFilterSingleVisit:(BOOL)arg3 classificationTimeInterval:(double)arg4 ;
-(BOOL)enableTAFilterGeneral;
-(id)initWithDefaults;
-(id)initWithEnableTAFilterGeneralOrDefault:(id)arg1 enableTAFilterVisitsOrDefault:(id)arg2 enableTAFilterSingleVisitOrDefault:(id)arg3 classificationTimeIntervalOrDefault:(id)arg4 ;
-(BOOL)enableTAFilterSingleVisit;
-(double)classificationTimeInterval;
@end
