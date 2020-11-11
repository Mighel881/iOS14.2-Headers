/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PencilKit/PencilKit-Structs.h>
@class PKMetalBuffer;

@interface PKMetalParticleRenderCacheBuffer : NSObject {

	PKMetalBuffer* _pkUniformsBuffer;
	PKMetalBuffer* _pkStrokePointBuffer;
	unsigned long long _uniformsBufferOffset;
	unsigned long long _strokePointBufferOffset;
	unsigned long long _numVertices;
	unsigned long long _numParticles;
	unsigned long long _numPoints;

}

@property (nonatomic,readonly) id<MTLBuffer> uniformsBuffer; 
@property (nonatomic,readonly) unsigned long long uniformsBufferOffset;                 //@synthesize uniformsBufferOffset=_uniformsBufferOffset - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> strokePointBuffer; 
@property (nonatomic,readonly) unsigned long long strokePointBufferOffset;              //@synthesize strokePointBufferOffset=_strokePointBufferOffset - In the implementation block
@property (nonatomic,readonly) unsigned long long numVertices;                          //@synthesize numVertices=_numVertices - In the implementation block
@property (nonatomic,readonly) unsigned long long numParticles;                         //@synthesize numParticles=_numParticles - In the implementation block
@property (nonatomic,readonly) unsigned long long numPoints;                            //@synthesize numPoints=_numPoints - In the implementation block
-(unsigned long long)numPoints;
-(unsigned long long)numVertices;
-(BOOL)lockPurgeableResourcesAddToSet:(id)arg1 ;
-(id)initWithUniforms:(const PKMetalParticleKernelUniforms*)arg1 points:(const PKMetalParticleStrokePoint*)arg2 numPoints:(unsigned long long)arg3 resourceHandler:(id)arg4 ;
-(id<MTLBuffer>)uniformsBuffer;
-(id<MTLBuffer>)strokePointBuffer;
-(unsigned long long)uniformsBufferOffset;
-(unsigned long long)strokePointBufferOffset;
-(unsigned long long)numParticles;
@end
