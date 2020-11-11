/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ClockKitUI/CLKUIQuad.h>

@class CLKDevice, NTKCharacterRenderer;

@interface NTKCharacterQuad : CLKUIQuad {

	CLKDevice* _clkDevice;
	NTKCharacterRenderer* _renderer;

}

@property (nonatomic,retain) NTKCharacterRenderer * renderer;              //@synthesize renderer=_renderer - In the implementation block
-(void)purge;
-(NTKCharacterRenderer *)renderer;
-(void)setRenderer:(NTKCharacterRenderer *)arg1 ;
-(void)dealloc;
-(id)clkDevice;
-(void)setupForQuadView:(id)arg1 ;
-(void)renderForDisplayWithEncoder:(id)arg1 ;
-(BOOL)prepareForTime:(double)arg1 ;
-(id)initWithCLKDevice:(id)arg1 ;
@end
