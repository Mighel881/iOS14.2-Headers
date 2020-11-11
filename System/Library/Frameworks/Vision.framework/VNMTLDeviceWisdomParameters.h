/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/VNMTLDeviceWisdomParametersProviding.h>

@class NSString;

@interface VNMTLDeviceWisdomParameters : NSObject <VNMTLDeviceWisdomParametersProviding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)wisdomParameterForMTLDeviceWithName:(id)arg1 error:(id*)arg2 ;
-(void)_flushMetalDeviceWisdomParametersCache;
-(id)_wisdomResourcesPath;
-(id)wisdomParameterForMTLDevice:(id)arg1 error:(id*)arg2 ;
-(id)_cachedMetalDeviceWisdomParametersAndReturnError:(id*)arg1 ;
@end
