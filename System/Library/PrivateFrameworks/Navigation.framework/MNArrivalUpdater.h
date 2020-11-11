/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MNArrivalRegionTimerDelegate.h>

@class MNObserverHashTable, GEOComposedRoute, MNLocation, NSDate, NSMutableArray, NSString;

@interface MNArrivalUpdater : NSObject <MNArrivalRegionTimerDelegate> {

	MNObserverHashTable* _safeDelegate;
	GEOComposedRoute* _route;
	MNLocation* _lastLocation;
	BOOL _useLegacyArrival;
	unsigned long long _arrivalState;
	unsigned long long _arrivalLegIndex;
	NSDate* _arrivalDate;
	double _closestDistanceToWaypoint;
	NSMutableArray* _timeoutRegions;

}

@property (nonatomic,readonly) BOOL isInPreArrivalRegion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)updateForLocation:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)updateForRoute:(id)arg1 ;
-(void)arrivalRegionTimerDidFire:(id)arg1 ;
-(id)initWithRoute:(id)arg1 useLegacyArrival:(BOOL)arg2 ;
-(BOOL)isInPreArrivalRegion;
-(BOOL)allowDepartureForLocation:(id)arg1 ;
-(void)updateForDepartureFromWaypoint;
-(BOOL)_shouldUseNewArrivalLogic;
-(BOOL)_legacyCheckArrivalForLocation:(id)arg1 ;
-(BOOL)_checkArrival:(id)arg1 forLocation:(id)arg2 ;
-(BOOL)_checkPreArrival:(id)arg1 forLocation:(id)arg2 ;
-(double)_distanceToEndOfLeg:(id)arg1 fromLocation:(id)arg2 ;
-(BOOL)_legacyCheckDrivingArrivalForLocation:(id)arg1 ;
-(BOOL)_legacyCheckNonDrivingArrivalForLocation:(id)arg1 ;
@end
