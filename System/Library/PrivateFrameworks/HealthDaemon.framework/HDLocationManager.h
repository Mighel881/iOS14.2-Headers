/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HDAssertionObserver.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol HDLocationManagerUnitTestDelegate;
@class HDAssertionManager, CLLocationManager, CLInUseAssertion, HKObserverSet, NSString;

@interface HDLocationManager : NSObject <HDAssertionObserver, CLLocationManagerDelegate> {

	HDAssertionManager* _assertionManager;
	CLLocationManager* _locationManager;
	CLInUseAssertion* _inUseAssertion;
	HKObserverSet* _observers;
	/*^block*/id _locationManagerConfiguration;
	id<HDLocationManagerUnitTestDelegate> _unitTestDelegate;

}

@property (nonatomic,copy) id locationManagerConfiguration;                                              //@synthesize locationManagerConfiguration=_locationManagerConfiguration - In the implementation block
@property (assign,nonatomic,__weak) id<HDLocationManagerUnitTestDelegate> unitTestDelegate;              //@synthesize unitTestDelegate=_unitTestDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg1 ;
-(id)_mainQueue_newLocationManagerWithEffectiveBundle:(id)arg1 ;
-(id)init;
-(void)_unitTest_didTakeAssertion:(id)arg1 ;
-(void)requestWhenInUseAuthorization;
-(void)_mainQueue_updateLocationManager;
-(void)_mainQueue_releaseLocationUpdatingAssertion;
-(id)_unitTest_locationManager;
-(void)_unitTest_setLocationManagerConfiguration:(/*^block*/id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)takeLocationUpdatingAssertionForOwnerIdentifier:(id)arg1 ;
-(void)setUnitTestDelegate:(id<HDLocationManagerUnitTestDelegate>)arg1 ;
-(void)_unitTest_didInvalidateAssertion:(id)arg1 ;
-(id)locationManagerConfiguration;
-(void)_mainQueue_takeLocationUpdatingAssertion;
-(void)setLocationManagerConfiguration:(id)arg1 ;
-(void)dealloc;
-(id<HDLocationManagerUnitTestDelegate>)unitTestDelegate;
@end

