/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOPDModule, GEOModuleOptions;

@interface GEOModule : NSObject {

	GEOPDModule* _module;

}

@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) GEOModuleOptions * options; 
-(GEOModuleOptions *)options;
-(id)initWithModule:(id)arg1 ;
-(int)type;
@end
