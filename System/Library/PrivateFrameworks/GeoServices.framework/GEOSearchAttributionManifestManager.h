/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEOSearchAttributionServerProxy;
@interface GEOSearchAttributionManifestManager : NSObject {

	id<GEOSearchAttributionServerProxy> _serverProxy;

}

@property (nonatomic,readonly) id<GEOSearchAttributionServerProxy> serverProxy;              //@synthesize serverProxy=_serverProxy - In the implementation block
+(void)useRemoteProxy;
+(void)useProxy:(Class)arg1 ;
+(id)sharedManager;
+(void)setUseLocalProxy:(BOOL)arg1 ;
+(void)useLocalProxy;
-(id)init;
-(void)loadAttributionInfoForIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<GEOSearchAttributionServerProxy>)serverProxy;
@end
