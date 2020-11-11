/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOPDResultDetourInfo, NSData;

@interface GEOMapItemDetourInfo : NSObject {

	GEOPDResultDetourInfo* _detourInfo;

}

@property (getter=_detourInfo,nonatomic,readonly) GEOPDResultDetourInfo * detourInfo;              //@synthesize detourInfo=_detourInfo - In the implementation block
@property (nonatomic,readonly) double detourTime; 
@property (nonatomic,readonly) double timeToPlace; 
@property (nonatomic,readonly) double detourDistance; 
@property (nonatomic,readonly) double distanceToPlace; 
@property (nonatomic,readonly) NSData * detourInfoAsData; 
-(id)init;
-(id)initWithResultDetourInfo:(id)arg1 ;
-(id)_detourInfo;
-(double)timeToPlace;
-(double)detourDistance;
-(double)distanceToPlace;
-(NSData *)detourInfoAsData;
-(double)detourTime;
@end
