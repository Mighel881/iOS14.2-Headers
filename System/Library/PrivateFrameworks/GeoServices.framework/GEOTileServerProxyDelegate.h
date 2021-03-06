/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEOTileServerProxyDelegate <NSObject>
@optional
-(void)proxyDidDownloadRegionalResources:(id)arg1;

@required
-(void)proxy:(id)arg1 loadedTile:(id)arg2 forKey:(const GEOTileKey*)arg3 info:(id)arg4;
-(void)proxy:(id)arg1 willGoToNetworkForTiles:(id)arg2;
-(void)proxy:(id)arg1 canShrinkDiskCacheByAmount:(unsigned long long)arg2;
-(void)proxy:(id)arg1 failedToLoadAllPendingTilesWithError:(id)arg2;
-(void)proxyDidDeleteExternalTileData:(id)arg1;
-(void)proxy:(id)arg1 failedToLoadTiles:(id)arg2 error:(id)arg3;

@end

