/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <PhotoImaging/PIAdjustmentController.h>

@interface PIVideoCrossfadeLoopAdjustmentController : PIAdjustmentController

@property (assign,nonatomic) SCD_Struct_PI7 crossfadeDuration; 
@property (assign,nonatomic) SCD_Struct_PI7 startTime; 
@property (assign,nonatomic) SCD_Struct_PI8 loopTimeRange; 
+(id)startTimeTimescaleKey;
+(id)startTimeValueKey;
+(id)crossfadeDurationTimescaleKey;
+(id)crossfadeDurationValueKey;
+(id)loopTimeRangeDurationTimescaleKey;
+(id)loopTimeRangeDurationValueKey;
+(id)loopTimeRangeStartTimescaleKey;
+(id)loopTimeRangeStartValueKey;
-(SCD_Struct_PI7)startTime;
-(void)setStartTime:(SCD_Struct_PI7)arg1 ;
-(SCD_Struct_PI8)loopTimeRange;
-(void)setCrossfadeDuration:(SCD_Struct_PI7)arg1 ;
-(SCD_Struct_PI7)crossfadeDuration;
-(void)setLoopTimeRange:(SCD_Struct_PI8)arg1 ;
@end

