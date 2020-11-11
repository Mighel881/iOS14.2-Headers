/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosFormats/PhotosFormats-Structs.h>
@class PFFrameCache;

@interface PFAnimatedImage : NSObject {

	CGImageSourceRef _imageSource;
	double* _frameDelayTimes;
	unsigned long long _frameCount;
	unsigned long long _loopCount;
	double _duration;
	PFFrameCache* _frameCache;
	CGSize _pixelSize;

}

@property (nonatomic,readonly) PFFrameCache * frameCache;                  //@synthesize frameCache=_frameCache - In the implementation block
@property (assign,nonatomic) long long cacheStrategy; 
@property (nonatomic,readonly) unsigned long long frameCount;              //@synthesize frameCount=_frameCount - In the implementation block
@property (nonatomic,readonly) unsigned long long loopCount;               //@synthesize loopCount=_loopCount - In the implementation block
@property (nonatomic,readonly) double duration;                            //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) CGSize pixelSize;                           //@synthesize pixelSize=_pixelSize - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(id)init;
-(CGSize)pixelSize;
-(unsigned long long)loopCount;
-(unsigned long long)frameCount;
-(id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2 useGlobalDecodeQueue:(BOOL)arg3 ;
-(id)initWithData:(id)arg1 ;
-(double)duration;
-(id)initWithImageSource:(CGImageSourceRef)arg1 ;
-(void)dealloc;
-(PFFrameCache *)frameCache;
-(double)frameDelayAtIndex:(unsigned long long)arg1 ;
-(id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2 ;
-(id)initWithData:(id)arg1 cachingStrategy:(long long)arg2 ;
-(id)initWithImageSource:(CGImageSourceRef)arg1 cachingStrategy:(long long)arg2 ;
-(id)initWithImageSource:(CGImageSourceRef)arg1 cachingStrategy:(long long)arg2 useGlobalDecodeQueue:(BOOL)arg3 ;
-(long long)cacheStrategy;
-(void)setCacheStrategy:(long long)arg1 ;
-(void)_preloadDelayTimes;
@end
