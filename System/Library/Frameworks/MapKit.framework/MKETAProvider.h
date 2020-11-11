/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKLocationManagerObserver.h>
#import <libobjc.A.dylib/MKQuickRouteManagerDelegate.h>
#import <libobjc.A.dylib/MKQuickRouteConfigurableView.h>
#import <libobjc.A.dylib/MKQuickRouteTransportTypeFinding.h>

@protocol MKETAProviderDelegate, _MKPlaceItem, GEOTransitLineItem;
@class _MKQuickRouteManager, NSNumber, MKMapItem, NSString, NSTimer, CLLocation, GEOAutomobileOptions, GEOTransitOptions, GEOCyclingOptions, NSHashTable, NSLock;

@interface MKETAProvider : NSObject <MKLocationManagerObserver, MKQuickRouteManagerDelegate, MKQuickRouteConfigurableView, MKQuickRouteTransportTypeFinding> {

	_MKQuickRouteManager* _quickRouteManager;
	NSNumber* _lastTransportTypeFound;
	MKMapItem* _nearestStationItem;
	BOOL _distanceOrETAIsSuppressed;
	BOOL _distanceOrETAWasFound;
	NSString* _distanceTextItem;
	unsigned long long _etaTransportType;
	double _etaTravelTime;
	BOOL _active;
	BOOL _paused;
	BOOL _inactiveInBackground;
	NSTimer* _refreshTimer;
	CLLocation* _currentLocation;
	id<MKETAProviderDelegate> _delegate;
	GEOAutomobileOptions* _automobileOptions;
	GEOTransitOptions* _transitOptions;
	GEOCyclingOptions* _cyclingOptions;
	id<_MKPlaceItem> _placeItem;
	id<GEOTransitLineItem> _lineItem;
	NSHashTable* _observers;
	NSLock* _observersLock;

}

@property (nonatomic,readonly) id<_MKPlaceItem> placeItem;                            //@synthesize placeItem=_placeItem - In the implementation block
@property (nonatomic,readonly) id<GEOTransitLineItem> lineItem;                       //@synthesize lineItem=_lineItem - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                 //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSLock * observersLock;                                  //@synthesize observersLock=_observersLock - In the implementation block
@property (nonatomic,readonly) CLLocation * currentLocation;                          //@synthesize currentLocation=_currentLocation - In the implementation block
@property (assign,nonatomic,__weak) id<MKETAProviderDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions;                //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (nonatomic,retain) GEOTransitOptions * transitOptions;                      //@synthesize transitOptions=_transitOptions - In the implementation block
@property (nonatomic,retain) GEOCyclingOptions * cyclingOptions;                      //@synthesize cyclingOptions=_cyclingOptions - In the implementation block
@property (nonatomic,readonly) NSString * distanceString; 
@property (nonatomic,readonly) unsigned long long etaTransportType; 
@property (nonatomic,readonly) double etaTravelTime; 
@property (nonatomic,readonly) NSNumber * transportTypePreferenceNumber; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cancelTimer;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(GEOAutomobileOptions *)automobileOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(void)start;
-(void)removeObserver:(id)arg1 ;
-(CLLocation *)currentLocation;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(id<MKETAProviderDelegate>)delegate;
-(NSHashTable *)observers;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(BOOL)quickRouteShouldOnlyUseAutomobile;
-(void)setCyclingOptions:(GEOCyclingOptions *)arg1 ;
-(BOOL)quickRouteShouldIncludeTransitWhenNotPreferredTransportType;
-(void)quickRouteManager:(id)arg1 didUpdateETA:(id)arg2 error:(id)arg3 animated:(BOOL)arg4 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)_configureETAForMapItem:(id)arg1 ;
-(void)_locationManagerApprovalDidChange:(id)arg1 ;
-(void)_updateETAHandler:(id)arg1 ;
-(void)_willEnterForeground;
-(id)currentMapItem;
-(void)_notifyETAAllObservers;
-(void)_updateETA;
-(BOOL)_areDistanceAndETAInformationAvailable;
-(BOOL)_shouldUpdateETAForMapView:(id)arg1 ;
-(void)_notifyLocationAllObservers;
-(unsigned long long)etaTransportType;
-(double)etaTravelTime;
-(void)_refreshTimer;
-(void)_updateETADisplayWithTransportType:(unsigned long long)arg1 travelTime:(double)arg2 distance:(double)arg3 ;
-(NSString *)distanceString;
-(void)pause;
-(void)configureWithNearestStationMapItem:(id)arg1 ;
-(void)setDelegate:(id<MKETAProviderDelegate>)arg1 ;
-(NSLock *)observersLock;
-(id<_MKPlaceItem>)placeItem;
-(void)restart;
-(void)_didEnterBackground;
-(void)addObserver:(id)arg1 ;
-(GEOTransitOptions *)transitOptions;
-(id<GEOTransitLineItem>)lineItem;
-(id)initWithPlaceItem:(id)arg1 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)setObserversLock:(NSLock *)arg1 ;
-(void)_commonInit;
-(void)_startTimer;
-(NSNumber *)transportTypePreferenceNumber;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(GEOCyclingOptions *)cyclingOptions;
-(void)cancel;
-(void)findDirectionsTypeForOriginCoordinate:(CLLocationCoordinate2D)arg1 destinationCoordinate:(CLLocationCoordinate2D)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithLineItem:(id)arg1 ;
-(void)dealloc;
@end
