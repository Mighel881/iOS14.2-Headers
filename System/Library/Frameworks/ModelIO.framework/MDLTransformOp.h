/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol MDLTransformOp
@property (nonatomic,readonly) NSString * name; 
@required
-(NSString *)name;
-(/*function pointer*/void**)float4x4AtTime:(double)arg1;
-(/*function pointer*/void**)double4x4AtTime:(double)arg1;
-(BOOL)IsInverseOp;

@end
