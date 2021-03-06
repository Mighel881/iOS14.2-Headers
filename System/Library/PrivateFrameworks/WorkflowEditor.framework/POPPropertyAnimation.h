/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/POPAnimation.h>

@class POPAnimatableProperty;

@interface POPPropertyAnimation : POPAnimation

@property (nonatomic,retain) POPAnimatableProperty * property; 
@property (nonatomic,copy) id fromValue; 
@property (nonatomic,copy) id toValue; 
@property (assign,nonatomic) double roundingFactor; 
@property (assign,nonatomic) unsigned long long clampMode; 
@property (assign,getter=isAdditive,nonatomic) BOOL additive; 
+(id)animationWithCustomPropertyNamed:(id)arg1 readBlock:(/*^block*/id)arg2 writeBlock:(/*^block*/id)arg3 ;
+(id)animationWithCustomPropertyReadBlock:(/*^block*/id)arg1 writeBlock:(/*^block*/id)arg2 ;
-(POPAnimatableProperty *)property;
-(id)toValue;
-(id)fromValue;
-(id)currentValue;
-(void)setAdditive:(BOOL)arg1 ;
-(void)setToValue:(id)arg1 ;
-(void)_initState;
-(void)setProperty:(POPAnimatableProperty *)arg1 ;
-(void)setFromValue:(id)arg1 ;
-(BOOL)isAdditive;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_appendDescription:(id)arg1 debug:(BOOL)arg2 ;
-(id)progressMarkers;
-(void)setProgressMarkers:(id)arg1 ;
-(double)roundingFactor;
-(void)setRoundingFactor:(double)arg1 ;
-(unsigned long long)clampMode;
-(void)setClampMode:(unsigned long long)arg1 ;
@end

