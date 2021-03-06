/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOMapFeatureAccess;

@interface GEORoadMatcher : NSObject {

	GEOMapFeatureAccess* _mapFeatureAccess;
	BOOL _useRawLocations;

}

@property (assign,nonatomic) BOOL useRawLocations;              //@synthesize useRawLocations=_useRawLocations - In the implementation block
-(id)init;
-(id)matchLocation:(id)arg1 forTransportType:(int)arg2 ;
-(void)setUseRawLocations:(BOOL)arg1 ;
-(id)_bestCandidateSegmentForLocation:(id)arg1 transportType:(int)arg2 ;
-(BOOL)useRawLocations;
-(void)dealloc;
@end

