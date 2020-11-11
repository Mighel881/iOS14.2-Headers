/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Eyedropper.framework/Eyedropper
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Eyedropper/Eyedropper-Structs.h>
@class NSMutableDictionary;

@interface EDColorAnalyzer : NSObject {

	NSMutableDictionary* _cache;

}
-(id)init;
-(void)clearCache;
-(id)colorAtCenterOfSurface:(IOSurfaceRef)arg1 offset:(CGPoint)arg2 ;
-(id)colorsInSurface:(IOSurfaceRef)arg1 offset:(CGPoint)arg2 clipToCircle:(BOOL)arg3 clipedToRect:(CGRect)arg4 ;
-(id)kmeansForColors:(id)arg1 clusters:(long long)arg2 ;
-(id)removeSimilarColors:(id)arg1 minDistance:(double)arg2 ;
-(id)kmeansColorsForColors:(id)arg1 clusters:(long long)arg2 ;
-(id)getRandomColors:(long long)arg1 from:(id)arg2 ;
-(BOOL)kmeansShouldStopWithPreviousColors:(id)arg1 newColors:(id)arg2 iterations:(long long)arg3 ;
-(id)colorsSuggestionsForSurface:(IOSurfaceRef)arg1 maxSuggestions:(long long)arg2 clipToCircle:(BOOL)arg3 clipedToRect:(CGRect)arg4 ;
@end
