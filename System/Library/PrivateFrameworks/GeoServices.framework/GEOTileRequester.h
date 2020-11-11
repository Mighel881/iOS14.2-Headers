/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEOTileRequesterDelegate, OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class GEOTileRequest, NSObject, NSThread, NSString, GEOResourceManifestManager;

@interface GEOTileRequester : NSObject {

	GEOTileRequest* _tileRequest;
	id<GEOTileRequesterDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id _context;
	NSThread* _thread;
	NSString* _deviceCountry;
	NSString* _deviceRegion;

}

@property (nonatomic,readonly) GEOResourceManifestManager * resourceManifestManager; 
@property (nonatomic,readonly) GEOTileRequest * tileRequest;                                      //@synthesize tileRequest=_tileRequest - In the implementation block
@property (nonatomic,__weak,readonly) id<GEOTileRequesterDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                        //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) id context;                                                          //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * deviceCountry;                                            //@synthesize deviceCountry=_deviceCountry - In the implementation block
@property (nonatomic,retain) NSString * deviceRegion;                                             //@synthesize deviceRegion=_deviceRegion - In the implementation block
+(unsigned long long)expiringTilesetsCount;
+(unsigned char)tileProviderIdentifier;
+(SCD_Struct_GE55*)newExpiringTilesets;
+(id)locationSensitiveTilesets;
-(NSString *)deviceRegion;
-(id)activeTileSetForKey:(const GEOTileKey*)arg1 ;
-(void)tearDown;
-(void)cancelKey:(const GEOTileKey*)arg1 ;
-(unsigned)tileSetForKey:(const GEOTileKey*)arg1 ;
-(void)start;
-(id)init;
-(id<GEOTileRequesterDelegate>)delegate;
-(NSString *)deviceCountry;
-(void)setDeviceCountry:(NSString *)arg1 ;
-(void)setDeviceRegion:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(GEOResourceManifestManager *)resourceManifestManager;
-(id)context;
-(id)initWithTileRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3 ;
-(void)reprioritizeKey:(const GEOTileKey*)arg1 newPriority:(unsigned)arg2 ;
-(void)setContext:(id)arg1 ;
-(void)cancel;
-(GEOTileRequest *)tileRequest;
@end
