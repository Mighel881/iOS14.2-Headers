/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOAbstractTicket.h>

@class GEOPDPlaceRequest, GEOPDPlaceResponse;

@interface GEOAbstractRequestResponseTicket : GEOAbstractTicket {

	GEOPDPlaceRequest* _request;
	GEOPDPlaceResponse* _response;

}
-(id)initWithTraits:(id)arg1 ;
-(void)performSubmitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(double)arg3 networkActivity:(/*^block*/id)arg4 ;
-(void)performSubmitWithHandler:(/*^block*/id)arg1 timeout:(double)arg2 networkActivity:(/*^block*/id)arg3 ;
-(SCD_Struct_GE91)dataRequestKind;
-(id)initWithRequest:(id)arg1 traits:(id)arg2 ;
-(void)cancel;
@end

