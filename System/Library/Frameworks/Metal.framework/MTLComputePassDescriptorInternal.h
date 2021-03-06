/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/MTLComputePassDescriptor.h>

@interface MTLComputePassDescriptorInternal : MTLComputePassDescriptor {

	MTLComputePassDescriptorPrivate _private;
	unsigned _substreamCount;

}

@property (assign,nonatomic) unsigned substreamCount;              //@synthesize substreamCount=_substreamCount - In the implementation block
+(id)computePassDescriptor;
-(id)init;
-(unsigned long long)hash;
-(void)setDispatchType:(unsigned long long)arg1 ;
-(unsigned)substreamCount;
-(void)setSubstreamCount:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)dispatchType;
-(const MTLComputePassDescriptorPrivate*)_descriptorPrivate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)sampleBufferAttachments;
-(void)dealloc;
@end

