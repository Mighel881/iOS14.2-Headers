/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/MTLComputePipelineDescriptor.h>

@interface MTLComputePipelineDescriptorInternal : MTLComputePipelineDescriptor {

	MTLComputePipelineDescriptorPrivate _private;

}
-(unsigned long long)maxCallStackDepth;
-(id)label;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)pipelineLibrary;
-(BOOL)needsCustomBorderColorSamplers;
-(void)setDynamicLibraries:(id)arg1 ;
-(void)setComputeFunction:(id)arg1 ;
-(id)init;
-(unsigned long long)hash;
-(BOOL)supportIndirectCommandBuffers;
-(id)buffers;
-(void)setMaxCallStackDepth:(unsigned long long)arg1 ;
-(id)binaryLibraries;
-(void)setSupportAddingBinaryFunctions:(BOOL)arg1 ;
-(void)setTextureWriteRoundingMode:(long long)arg1 ;
-(void)setBinaryArchives:(id)arg1 ;
-(id)computeFunction;
-(void)reset;
-(id)functionPointers;
-(id)description;
-(void)setFunctionPointerGroups:(id)arg1 ;
-(id)linkedFunctions;
-(void)setMaxStackCallDepth:(unsigned long long)arg1 ;
-(void)setTextureWriteFPRoundingMode:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)newSerializedComputeData;
-(id)stageInputDescriptor;
-(void)setInsertLibraries:(id)arg1 ;
-(void)setForceResourceIndex:(BOOL)arg1 ;
-(void)setFunctionPointers:(id)arg1 ;
-(long long)textureWriteRoundingMode;
-(void)setDriverCompilerOptions:(id)arg1 ;
-(const MTLComputePipelineDescriptorPrivate*)_descriptorPrivate;
-(unsigned long long)resourceIndex;
-(id)insertLibraries;
-(void)setSupportIndirectCommandBuffers:(BOOL)arg1 ;
-(BOOL)supportAddingBinaryFunctions;
-(void)validateWithDevice:(id)arg1 ;
-(id)binaryArchives;
-(BOOL)forceResourceIndex;
-(id)functionPointerGroups;
-(id)newSerializedComputeDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1 ;
-(void)setPipelineLibrary:(id)arg1 ;
-(id)driverCompilerOptions;
-(BOOL)threadGroupSizeIsMultipleOfThreadExecutionWidth;
-(void)setLabel:(id)arg1 ;
-(id)dynamicLibraries;
-(unsigned long long)maxStackCallDepth;
-(id)pluginData;
-(void)setLinkedFunctions:(id)arg1 ;
-(void)setOpenCLModeEnabled:(BOOL)arg1 ;
-(long long)textureWriteFPRoundingMode;
-(void)setNeedsCustomBorderColorSamplers:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setThreadGroupSizeIsMultipleOfThreadExecutionWidth:(BOOL)arg1 ;
-(void)setResourceIndex:(unsigned long long)arg1 ;
-(BOOL)openCLModeEnabled;
-(BOOL)openGLModeEnabled;
-(unsigned long long)maxTotalThreadsPerThreadgroup;
-(void)dealloc;
-(BOOL)validateWithDevice:(id)arg1 error:(id*)arg2 ;
-(void)setBinaryLibraries:(id)arg1 ;
-(void)setPluginData:(id)arg1 ;
-(void)setStageInputDescriptor:(id)arg1 ;
-(void)setOpenGLModeEnabled:(BOOL)arg1 ;
@end
