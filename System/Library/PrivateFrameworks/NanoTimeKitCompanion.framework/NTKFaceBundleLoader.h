/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class NSArray;

@interface NTKFaceBundleLoader : NSObject {

	NSArray* _cachedFaceBundles;
	os_unfair_lock_s _cacheLock;

}
+(id)faceBundleLoaderWithDirectories:(id)arg1 ;
-(id)init;
-(void)_loadClassesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerationFaceBundleClassesWithBlock:(/*^block*/id)arg1 ;
@end
