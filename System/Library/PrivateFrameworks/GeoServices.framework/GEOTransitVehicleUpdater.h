/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEOTransitVehicleUpdaterDelegate;
@class NSSet;

@interface GEOTransitVehicleUpdater : NSObject {

	id<GEOTransitVehicleUpdaterDelegate> _delegate;
	BOOL _active;
	NSSet* _tripIDs;

}

@property (assign,nonatomic,__weak) id<GEOTransitVehicleUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSSet * tripIDs;                                                     //@synthesize tripIDs=_tripIDs - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                       //@synthesize active=_active - In the implementation block
-(void)setActive:(BOOL)arg1 ;
-(NSSet *)tripIDs;
-(id<GEOTransitVehicleUpdaterDelegate>)delegate;
-(void)setTripIDs:(NSSet *)arg1 ;
-(void)setDelegate:(id<GEOTransitVehicleUpdaterDelegate>)arg1 ;
-(BOOL)isActive;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
@end
