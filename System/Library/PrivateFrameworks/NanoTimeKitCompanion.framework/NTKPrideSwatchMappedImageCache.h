/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoardUI/BSUIMappedImageCache.h>

@class NSArray;

@interface NTKPrideSwatchMappedImageCache : BSUIMappedImageCache {

	NSArray* _libraryCollections;

}
+(id)sharedCache;
+(id)keyForFaceStyle:(long long)arg1 editOption:(id)arg2 mode:(long long)arg3 selectedOptions:(id)arg4 ;
-(id)_init;
-(void)_cleanCache;
-(void)_removeImagesForKeysMatching:(/*^block*/id)arg1 ;
@end
