/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/_MTLObjectWithLabel.h>

@interface _MTLHeap : _MTLObjectWithLabel {

	unsigned long long _heapResourceOptions;
	long long _heapType;
	unsigned long long _gpuAddress;

}

@property (readonly) long long type; 
@property (readonly) unsigned long long cpuCacheMode; 
@property (readonly) unsigned long long storageMode; 
@property (readonly) unsigned long long hazardTrackingMode; 
@property (readonly) unsigned long long resourceOptions; 
@property (readonly) unsigned long long unfilteredResourceOptions; 
@property (nonatomic,readonly) unsigned long long gpuAddress;                   //@synthesize gpuAddress=_gpuAddress - In the implementation block
-(unsigned long long)storageMode;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)gpuAddress;
-(id)init;
-(unsigned long long)hazardTrackingMode;
-(id)description;
-(unsigned long long)resourceOptions;
-(long long)type;
-(unsigned long long)cpuCacheMode;
-(unsigned long long)unfilteredResourceOptions;
-(id)initWithType:(long long)arg1 options:(unsigned long long)arg2 ;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3 ;
-(id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 ;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 atOffset:(unsigned long long)arg3 ;
-(id)newTextureWithDescriptor:(id)arg1 atOffset:(unsigned long long)arg2 ;
@end
