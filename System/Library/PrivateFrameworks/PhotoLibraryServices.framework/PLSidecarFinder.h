/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSCache;

@interface PLSidecarFinder : NSObject {

	os_unfair_lock_s _lock;
	NSCache* _cachedSidecarURLsByDirectory;

}

@property (nonatomic,retain) NSCache * cachedSidecarURLsByDirectory;              //@synthesize cachedSidecarURLsByDirectory=_cachedSidecarURLsByDirectory - In the implementation block
+(BOOL)_isValidExtensionForSidecar:(id)arg1 context:(id)arg2 ;
+(id)_findPotentialSidecarURLsInDirectory:(id)arg1 context:(id)arg2 ;
-(id)init;
-(id)collectSidecarURLsForAssetFilename:(id)arg1 inDirectory:(id)arg2 context:(id)arg3 removeWhenDone:(BOOL)arg4 ;
-(NSCache *)cachedSidecarURLsByDirectory;
-(void)setCachedSidecarURLsByDirectory:(NSCache *)arg1 ;
-(void)reset;
@end
