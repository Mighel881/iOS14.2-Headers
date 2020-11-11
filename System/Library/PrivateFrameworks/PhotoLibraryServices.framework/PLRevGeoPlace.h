/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface PLRevGeoPlace : NSObject <NSSecureCoding> {

	NSDictionary* _placeInfosForOrderType;

}

@property (nonatomic,readonly) NSDictionary * placeInfosForOrderType;              //@synthesize placeInfosForOrderType=_placeInfosForOrderType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)placeWithMapItem:(id)arg1 placeAnnotation:(id)arg2 ;
+(id)_newFilterSortedPlaceInfos:(id)arg1 usingPlaceAnnotation:(id)arg2 outFoundOrderType:(unsigned long long*)arg3 outPreviousOrderType:(unsigned long long*)arg4 ;
+(unsigned long long)_dominantOrderTypeForPlaceType:(id)arg1 lastOrderType:(unsigned long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPlaceInfosForOrderType:(id)arg1 ;
-(id)bestPlaceInfoForOrderType:(unsigned long long)arg1 ;
-(NSDictionary *)placeInfosForOrderType;
-(id)initWithCoder:(id)arg1 ;
@end
