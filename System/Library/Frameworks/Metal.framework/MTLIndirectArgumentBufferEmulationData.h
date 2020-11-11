/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_data;
#import <Metal/Metal-Structs.h>
@class NSObject;

@interface MTLIndirectArgumentBufferEmulationData : NSObject {

	NSObject*<OS_dispatch_data> _dataMap;
	char* _bufferIndices;
	char* _textureIndices;
	char* _samplerIndices;
	const void* _dataPtr;
	unsigned long long _dataSize;

}
-(id)initWithData:(id)arg1 ;
-(void)bindIndirectArgumentsWithFunctions:(SCD_Struct_MT18)arg1 ;
-(void)dealloc;
@end
