/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoImaging/PIAdjustmentController.h>

@class NSString;

@interface PIEffectAdjustmentController : PIAdjustmentController

@property (nonatomic,copy) NSString * kind; 
@property (assign,nonatomic) long long version; 
@property (assign,nonatomic) double intensity; 
+(id)intensityKey;
+(id)versionKey;
+(id)kindKey;
-(NSString *)kind;
-(void)setVersion:(long long)arg1 ;
-(void)setKind:(NSString *)arg1 ;
-(long long)version;
-(double)intensity;
-(void)setIntensity:(double)arg1 ;
-(BOOL)isSettingEqual:(id)arg1 forKey:(id)arg2 ;
@end
