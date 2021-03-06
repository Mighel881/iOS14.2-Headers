/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOutputSettings.h>

@class NSDictionary, NSString;

@interface AVVideoOutputSettings : AVOutputSettings

@property (nonatomic,readonly) int width; 
@property (nonatomic,readonly) int height; 
@property (nonatomic,readonly) NSDictionary * cleanApertureDictionary; 
@property (nonatomic,readonly) NSDictionary * pixelAspectRatioDictionary; 
@property (nonatomic,readonly) NSDictionary * pixelTransferProperties; 
@property (nonatomic,readonly) NSDictionary * videoScalingProperties; 
@property (nonatomic,readonly) BOOL dimensionsAreBoundingBox; 
@property (nonatomic,readonly) SCD_Struct_AV6 minimumFrameDuration; 
@property (nonatomic,readonly) NSString * frameRateConversionAlgorithm; 
@property (nonatomic,readonly) BOOL allowWideColor; 
@property (nonatomic,readonly) NSDictionary * videoSettingsDictionary; 
+(id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 mediaType:(id)arg2 exceptionReason:(id*)arg3 ;
+(id)registeredOutputSettingsClasses;
+(id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
+(id)defaultVideoOutputSettings;
+(id)videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 ;
+(id)_validValuesForScalingMode;
+(id)videoOutputSettingsWithTrustedVideoSettingsDictionary:(id)arg1 ;
-(SCD_Struct_AV6)minimumFrameDuration;
-(int)height;
-(int)width;
-(NSDictionary *)cleanApertureDictionary;
-(NSDictionary *)pixelAspectRatioDictionary;
-(NSDictionary *)videoScalingProperties;
-(void)colorPropertiesConsideringFormatDescriptions:(id)arg1 colorPrimaries:(id*)arg2 transferFunction:(id*)arg3 ycbcrMatrix:(id*)arg4 ;
-(id)compatibleMediaTypes;
-(NSString *)frameRateConversionAlgorithm;
-(NSDictionary *)pixelTransferProperties;
-(NSDictionary *)videoSettingsDictionary;
-(BOOL)validateUsingOutputSettingsValidator:(id)arg1 reason:(id*)arg2 ;
-(BOOL)allowWideColor;
-(BOOL)dimensionsAreBoundingBox;
-(id)initWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
@end

