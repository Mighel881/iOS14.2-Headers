/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NTKComplicationDisplay.h>
#import <libobjc.A.dylib/NTKZeudleComplicationDisplay.h>

@protocol NTKComplicationDisplayObserver, NTKZeudleColorPalette;
@class NTKZeudleComplicationBackgroundView, CLKDevice, NSString;

@interface NTKZeusComplicationView : UIView <NTKComplicationDisplay, NTKZeudleComplicationDisplay> {

	BOOL canUseCurvedText;
	BOOL _highlighted;
	BOOL _legibilityEnabled;
	id<NTKComplicationDisplayObserver> displayObserver;
	unsigned long long _style;
	id<NTKZeudleColorPalette> _palette;
	NTKZeudleComplicationBackgroundView* _backgroundView;
	CLKDevice* _device;

}

@property (nonatomic,readonly) CLKDevice * device;                                                   //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NTKZeudleComplicationBackgroundView * backgroundView;                 //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,nonatomic) BOOL canUseCurvedText; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                                  //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long style;                                               //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) id<NTKZeudleColorPalette> palette;                                    //@synthesize palette=_palette - In the implementation block
@property (assign,nonatomic) BOOL legibilityEnabled;                                                 //@synthesize legibilityEnabled=_legibilityEnabled - In the implementation block
+(id)viewForComplicationType:(unsigned long long)arg1 ;
+(id)viewForComplicationType:(unsigned long long)arg1 backgroundView:(id)arg2 ;
-(void)_updateLegibility;
-(CGRect)contentFrame;
-(CLKDevice *)device;
-(NTKZeudleComplicationBackgroundView *)backgroundView;
-(id<NTKZeudleColorPalette>)palette;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithBackgroundView:(id)arg1 ;
-(void)applyPalette:(id)arg1 ;
-(void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3 ;
-(BOOL)legibilityEnabled;
-(void)setLegibilityEnabled:(BOOL)arg1 ;
-(id<NTKComplicationDisplayObserver>)displayObserver;
-(CGRect)padContentFrame:(CGRect)arg1 ;
-(void)setDisplayObserver:(id<NTKComplicationDisplayObserver>)arg1 ;
-(BOOL)canUseCurvedText;
-(void)setCanUseCurvedText:(BOOL)arg1 ;
@end

