/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MSPRouteInformationSource.h>

@class GEOComposedWaypoint, NSString;

@interface MSPRidesharingInformationSource : NSObject <MSPRouteInformationSource> {

	GEOComposedWaypoint* _startWaypoint;
	GEOComposedWaypoint* _endWaypoint;

}

@property (getter=_startWaypoint,nonatomic,readonly) GEOComposedWaypoint * startWaypoint;              //@synthesize startWaypoint=_startWaypoint - In the implementation block
@property (getter=_endWaypoint,nonatomic,readonly) GEOComposedWaypoint * endWaypoint;                  //@synthesize endWaypoint=_endWaypoint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_endWaypoint;
-(id)_startWaypoint;
-(id)ifRidesharingInformationSource;
-(id)ifGEOStorageRouteRequestStorage;
-(id)initWithStartWaypoint:(id)arg1 endWaypoint:(id)arg2 ;
@end

