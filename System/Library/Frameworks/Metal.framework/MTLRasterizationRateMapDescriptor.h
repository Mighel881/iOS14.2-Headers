/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MTLRasterizationRateLayerArray, NSString;

@interface MTLRasterizationRateMapDescriptor : NSObject <NSCopying>

@property (nonatomic,readonly) MTLRasterizationRateLayerArray * layers; 
@property (assign,nonatomic) SCD_Struct_MT31 screenSize; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,readonly) unsigned long long layerCount; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)rasterizationRateMapDescriptorWithScreenSize:(SCD_Struct_MT31)arg1 layerCount:(unsigned long long)arg2 layers:(const id*)arg3 ;
+(id)rasterizationRateMapDescriptorWithScreenSize:(SCD_Struct_MT31)arg1 ;
+(id)rasterizationRateMapDescriptorWithScreenSize:(SCD_Struct_MT31)arg1 layer:(id)arg2 ;
-(void)setLayer:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)layerAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
