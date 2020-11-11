/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/MTLTileRenderPipelineDescriptor.h>

@interface MTLTileRenderPipelineDescriptorInternal : MTLTileRenderPipelineDescriptor {

	MTLTileRenderPipelineDescriptorPrivate _private;

}
-(void)setSampleCount:(unsigned long long)arg1 ;
-(id)label;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(BOOL)threadgroupSizeMatchesTileSize;
-(id)init;
-(unsigned long long)hash;
-(void)setTextureWriteRoundingMode:(long long)arg1 ;
-(void)setBinaryArchives:(id)arg1 ;
-(unsigned long long)sampleCount;
-(unsigned long long)colorSampleCount;
-(void)setColorSampleCount:(unsigned long long)arg1 ;
-(void)reset;
-(id)description;
-(void)setTextureWriteFPRoundingMode:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTileFunction:(id)arg1 ;
-(void)setThreadgroupSizeMatchesTileSize:(BOOL)arg1 ;
-(long long)textureWriteRoundingMode;
-(id)colorAttachments;
-(const MTLTileRenderPipelineDescriptorPrivate*)_descriptorPrivate;
-(void)validateWithDevice:(id)arg1 ;
-(id)binaryArchives;
-(unsigned long long)rasterSampleCount;
-(void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1 ;
-(void)setLabel:(id)arg1 ;
-(void)setRasterSampleCount:(unsigned long long)arg1 ;
-(id)pluginData;
-(id)tileBuffers;
-(id)tileFunction;
-(id)newSerializedTileDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(long long)textureWriteFPRoundingMode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)maxTotalThreadsPerThreadgroup;
-(void)dealloc;
-(BOOL)validateWithDevice:(id)arg1 error:(id*)arg2 ;
-(void)setPluginData:(id)arg1 ;
@end
