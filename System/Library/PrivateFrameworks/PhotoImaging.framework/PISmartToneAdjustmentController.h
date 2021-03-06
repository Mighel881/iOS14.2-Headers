/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <PhotoImaging/PIAdjustmentController.h>

@class NSDictionary;

@interface PISmartToneAdjustmentController : PIAdjustmentController {

	SCD_Struct_PI13 _smartSettings;

}

@property (assign,nonatomic) double inputLight; 
@property (assign,nonatomic) double offsetBlack; 
@property (assign,nonatomic) double offsetBrightness; 
@property (assign,nonatomic) double offsetContrast; 
@property (assign,nonatomic) double offsetExposure; 
@property (assign,nonatomic) double offsetHighlights; 
@property (assign,nonatomic) double offsetLocalLight; 
@property (assign,nonatomic) double offsetShadows; 
@property (nonatomic,copy) NSDictionary * statistics; 
@property (assign,nonatomic) long long sourceSelection; 
@property (nonatomic,copy) NSDictionary * overcaptureStatistics; 
+(id)inputExposureKey;
+(id)inputLightKey;
+(id)offsetContrastKey;
+(id)attributeContrastKey;
+(id)offsetLocalLightKey;
+(id)attributeLocalLightKey;
+(id)offsetBlackKey;
+(id)attributeBlackPointKey;
+(id)offsetShadowsKey;
+(id)attributeShadowsKey;
+(id)offsetHighlightsKey;
+(id)attributeHighlightsKey;
+(id)offsetExposureKey;
+(id)attributeExposureKey;
+(id)offsetBrightnessKey;
+(id)attributeBrightnessKey;
+(id)sourceSelectionKey;
+(id)overcaptureStatisticsKey;
+(id)statisticsKey;
+(id)inputRawHighlightsKey;
+(id)inputLocalLightKey;
+(id)inputBlackKey;
+(id)inputHighlightsKey;
+(id)inputShadowsKey;
+(id)inputContrastKey;
+(id)inputBrightnessKey;
+(id)attributeLightMapKey;
+(id)attributeLightMapWidthKey;
+(id)attributeLightMapHeightKey;
-(NSDictionary *)statistics;
-(void)setStatistics:(NSDictionary *)arg1 ;
-(double)inputBrightness;
-(void)setInputBrightness:(double)arg1 ;
-(double)inputContrast;
-(void)setInputContrast:(double)arg1 ;
-(void)setOvercaptureStatistics:(NSDictionary *)arg1 ;
-(long long)sourceSelection;
-(void)setSourceSelection:(long long)arg1 ;
-(double)inputLocalLight;
-(double)inputBlack;
-(double)inputExposure;
-(void)setInputExposure:(double)arg1 ;
-(double)inputShadows;
-(void)setInputShadows:(double)arg1 ;
-(double)inputHighlights;
-(void)setInputHighlights:(double)arg1 ;
-(void)setInputBlack:(double)arg1 ;
-(double)inputRawHighlights;
-(void)setInputRawHighlights:(double)arg1 ;
-(void)setInputLocalLight:(double)arg1 ;
-(NSDictionary *)overcaptureStatistics;
-(void)setInputLight:(double)arg1 ;
-(double)inputLight;
-(id)initWithAdjustment:(id)arg1 ;
-(void)_updateSettingsWithInputLight:(double)arg1 ;
-(id)computedSettings;
-(double)offsetBlack;
-(void)setOffsetBlack:(double)arg1 ;
-(double)offsetBrightness;
-(void)setOffsetBrightness:(double)arg1 ;
-(double)offsetContrast;
-(void)setOffsetContrast:(double)arg1 ;
-(double)offsetExposure;
-(void)setOffsetExposure:(double)arg1 ;
-(double)offsetHighlights;
-(void)setOffsetHighlights:(double)arg1 ;
-(double)offsetLocalLight;
-(void)setOffsetLocalLight:(double)arg1 ;
-(double)offsetShadows;
-(void)setOffsetShadows:(double)arg1 ;
@end

