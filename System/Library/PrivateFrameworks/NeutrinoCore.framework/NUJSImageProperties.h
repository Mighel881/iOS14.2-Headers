/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NUJSProxy.h>
#import <libobjc.A.dylib/NUJSImagePropertiesExport.h>

@class NSDictionary, NSString, NUJSDepthProperties, NUJSRAWImageProperties;

@interface NUJSImageProperties : NUJSProxy <NUJSImagePropertiesExport>

@property (readonly) id<NUImageProperties> imageProperties; 
@property (readonly) NSDictionary * metadata; 
@property (readonly) NSString * fileUTI; 
@property (readonly) NUJSDepthProperties * depthProperties; 
@property (readonly) NUJSRAWImageProperties * rawImageProperties; 
-(id<NUImageProperties>)imageProperties;
-(NSString *)fileUTI;
-(NSDictionary *)metadata;
-(id)initWithRepresentedObject:(id)arg1 context:(id)arg2 ;
-(NUJSDepthProperties *)depthProperties;
-(NUJSRAWImageProperties *)rawImageProperties;
-(id)initWithImageProperties:(id)arg1 context:(id)arg2 ;
@end

