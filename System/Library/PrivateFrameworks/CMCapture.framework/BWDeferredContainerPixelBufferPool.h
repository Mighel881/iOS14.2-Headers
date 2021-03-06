/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWPixelBufferPool.h>

@class BWVideoFormat;

@interface BWDeferredContainerPixelBufferPool : BWPixelBufferPool {

	BWVideoFormat* _videoFormat;

}

@property (nonatomic,readonly) BWVideoFormat * videoFormat;                                 //@synthesize videoFormat=_videoFormat - In the implementation block
@property (nonatomic,readonly) CVPixelBufferPoolRef cvPixelBufferPool; 
@property (nonatomic,readonly) CFDictionaryRef cvPixelBufferPoolAuxAttributes; 
+(void)initialize;
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCapacity:(unsigned long long)arg1 ;
-(BWVideoFormat *)videoFormat;
-(void)flush;
-(id)initWithAttributes:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 ;
-(CFDictionaryRef)cvPixelBufferPoolAuxAttributes;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 ;
-(void)flushToMinimumCapacity:(unsigned long long)arg1 ;
-(CVPixelBufferPoolRef)cvPixelBufferPool;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 clientProvidesPool:(BOOL)arg4 memoryPool:(id)arg5 providesBackPressure:(BOOL)arg6 ;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 memoryPool:(id)arg4 ;
-(void)preallocateWithCompletionHandler:(/*^block*/id)arg1 ;
-(int)preallocate;
-(void)enumerateSurfacesUsingBlock:(/*^block*/id)arg1 ;
-(void)setCVPixelBufferPool:(CVPixelBufferPoolRef)arg1 attributes:(CFDictionaryRef)arg2 ;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 additionalPixelBufferAttributes:(id)arg4 ;
-(void)prefetchWithCompletionHandler:(/*^block*/id)arg1 ;
-(CVBufferRef)newPixelBuffer;
-(void)dealloc;
@end

