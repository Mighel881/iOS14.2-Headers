/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray;


@protocol MDLTransformComponent <MDLComponent>
@property (assign,nonatomic) SCD_Struct_MD1 matrix; 
@property (assign,nonatomic) BOOL resetsTransform; 
@property (nonatomic,readonly) double minimumTime; 
@property (nonatomic,readonly) double maximumTime; 
@property (nonatomic,copy,readonly) NSArray * keyTimes; 
@optional
+(/*function pointer*/void**)globalTransformWithObject:(id)arg1 atTime:(double)arg2;
-(void)setLocalTransform:(/*function pointer*/void*)arg1;
-(/*function pointer*/void**)localTransformAtTime:(double)arg1;
-(void)setLocalTransform:(/*function pointer*/void*)arg1 forTime:(double)arg2;

@required
-(SCD_Struct_MD1)matrix;
-(NSArray *)keyTimes;
-(double)minimumTime;
-(double)maximumTime;
-(void)setMatrix:(/*function pointer*/void*)arg1;
-(BOOL)resetsTransform;
-(void)setResetsTransform:(BOOL)arg1;

@end

