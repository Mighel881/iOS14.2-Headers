/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _PipelineLibrarySerializer : NSObject {

	void* _binarySerializer;

}
-(id)init;
-(unsigned long long)totalSize;
-(unsigned long long)addLibrary:(void*)arg1 ;
-(id)addSpecializedFunction:(id)arg1 descriptor:(const void*)arg2 ;
-(id)addRenderPipelineDescriptor:(const void*)arg1 ;
-(unsigned long long)writeToMemory:(char*)arg1 size:(unsigned long long)arg2 ;
-(id)addComputePipelineDescriptor:(const void*)arg1 ;
-(void)dealloc;
@end
