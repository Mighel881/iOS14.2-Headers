/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSCache;

@interface PXPlacesImageCache : NSObject {

	NSCache* _cache;

}
-(void)removeAllObjects;
-(id)init;
-(void)removeCachedRenderedImageForGeotaggble:(id)arg1 andKey:(id)arg2 ;
-(id)cachedRenderedImageForGeotaggble:(id)arg1 andKey:(id)arg2 ;
-(void)cacheRenderedImage:(id)arg1 forGeotaggble:(id)arg2 andKey:(id)arg3 ;
@end

