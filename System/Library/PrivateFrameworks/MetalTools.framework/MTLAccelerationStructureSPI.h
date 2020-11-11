/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class MTLAccelerationStructureDescriptor;


@protocol MTLAccelerationStructureSPI <MTLAccelerationStructure>
@property (nonatomic,readonly) unsigned long long uniqueIdentifier; 
@property (nonatomic,readonly) id<MTLBuffer> buffer; 
@property (nonatomic,readonly) unsigned long long bufferOffset; 
@property (nonatomic,retain) MTLAccelerationStructureDescriptor * descriptor; 
@optional
-(void)setDescriptor:(id)arg1;
-(MTLAccelerationStructureDescriptor *)descriptor;

@required
-(id<MTLBuffer>)buffer;
-(unsigned long long)bufferOffset;
-(unsigned long long)uniqueIdentifier;

@end
