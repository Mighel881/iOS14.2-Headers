/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, UIKBRenderGeometry, UIKBGradient, UIKBTextStyle, NSArray, NSString;

@interface UIKBRenderTraits : NSObject <NSCopying> {

	NSMutableArray* _renderEffects;
	NSMutableArray* _foregroundRenderEffects;
	BOOL _honorControlOpacity;
	BOOL _controlOpacities;
	BOOL _blurBlending;
	BOOL _renderSecondarySymbolsSeparately;
	UIKBRenderGeometry* _geometry;
	UIKBGradient* _backgroundGradient;
	UIKBGradient* _layeredBackgroundGradient;
	UIKBGradient* _layeredForegroundGradient;
	UIKBTextStyle* _symbolStyle;
	UIKBTextStyle* _fallbackSymbolStyle;
	NSArray* _secondarySymbolStyles;
	NSArray* _variantGeometries;
	UIKBRenderTraits* _variantTraits;
	UIKBRenderTraits* _highlightedVariantTraits;
	long long _blendForm;
	NSArray* _renderFlags;
	long long _renderFlagsForAboveEffects;
	NSString* _hashString;

}

@property (nonatomic,retain) UIKBRenderGeometry * geometry;                            //@synthesize geometry=_geometry - In the implementation block
@property (nonatomic,retain) UIKBGradient * backgroundGradient;                        //@synthesize backgroundGradient=_backgroundGradient - In the implementation block
@property (nonatomic,retain) UIKBGradient * layeredBackgroundGradient;                 //@synthesize layeredBackgroundGradient=_layeredBackgroundGradient - In the implementation block
@property (nonatomic,retain) UIKBGradient * layeredForegroundGradient;                 //@synthesize layeredForegroundGradient=_layeredForegroundGradient - In the implementation block
@property (nonatomic,retain) UIKBTextStyle * symbolStyle;                              //@synthesize symbolStyle=_symbolStyle - In the implementation block
@property (nonatomic,retain) UIKBTextStyle * fallbackSymbolStyle;                      //@synthesize fallbackSymbolStyle=_fallbackSymbolStyle - In the implementation block
@property (nonatomic,retain) NSArray * secondarySymbolStyles;                          //@synthesize secondarySymbolStyles=_secondarySymbolStyles - In the implementation block
@property (nonatomic,readonly) NSArray * renderEffects;                                //@synthesize renderEffects=_renderEffects - In the implementation block
@property (nonatomic,readonly) NSArray * foregroundRenderEffects;                      //@synthesize foregroundRenderEffects=_foregroundRenderEffects - In the implementation block
@property (nonatomic,retain) NSArray * variantGeometries;                              //@synthesize variantGeometries=_variantGeometries - In the implementation block
@property (nonatomic,retain) UIKBRenderTraits * variantTraits;                         //@synthesize variantTraits=_variantTraits - In the implementation block
@property (nonatomic,retain) UIKBRenderTraits * highlightedVariantTraits;              //@synthesize highlightedVariantTraits=_highlightedVariantTraits - In the implementation block
@property (assign,nonatomic) BOOL controlOpacities;                                    //@synthesize controlOpacities=_controlOpacities - In the implementation block
@property (assign,nonatomic) BOOL blurBlending;                                        //@synthesize blurBlending=_blurBlending - In the implementation block
@property (assign,nonatomic) long long blendForm;                                      //@synthesize blendForm=_blendForm - In the implementation block
@property (nonatomic,retain) NSArray * renderFlags;                                    //@synthesize renderFlags=_renderFlags - In the implementation block
@property (assign,nonatomic) BOOL renderSecondarySymbolsSeparately;                    //@synthesize renderSecondarySymbolsSeparately=_renderSecondarySymbolsSeparately - In the implementation block
@property (assign,nonatomic) long long renderFlagsForAboveEffects;                     //@synthesize renderFlagsForAboveEffects=_renderFlagsForAboveEffects - In the implementation block
@property (nonatomic,retain) NSString * hashString;                                    //@synthesize hashString=_hashString - In the implementation block
+(id)traitsWithGeometry:(id)arg1 ;
+(id)emptyTraits;
+(id)traitsWithSymbolStyle:(id)arg1 ;
-(void)setGeometry:(UIKBRenderGeometry *)arg1 ;
-(void)setLayeredBackgroundGradient:(UIKBGradient *)arg1 ;
-(void)setSymbolStyle:(UIKBTextStyle *)arg1 ;
-(void)setFallbackSymbolStyle:(UIKBTextStyle *)arg1 ;
-(void)setControlOpacities:(BOOL)arg1 ;
-(UIKBRenderTraits *)variantTraits;
-(NSArray *)foregroundRenderEffects;
-(NSArray *)renderEffects;
-(UIKBRenderTraits *)highlightedVariantTraits;
-(void)setSecondarySymbolStyles:(NSArray *)arg1 ;
-(void)setVariantTraits:(UIKBRenderTraits *)arg1 ;
-(void)setRenderFlagsForAboveEffects:(long long)arg1 ;
-(void)setBackgroundGradient:(UIKBGradient *)arg1 ;
-(void)setRenderFlags:(NSArray *)arg1 ;
-(UIKBTextStyle *)fallbackSymbolStyle;
-(void)setBlurBlending:(BOOL)arg1 ;
-(id)description;
-(NSArray *)renderFlags;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHashString:(NSString *)arg1 ;
-(UIKBGradient *)backgroundGradient;
-(void)setLayeredForegroundGradient:(UIKBGradient *)arg1 ;
-(void)addForegroundRenderEffect:(id)arg1 ;
-(long long)renderFlagsForAboveEffects;
-(long long)blendForm;
-(BOOL)renderSecondarySymbolsSeparately;
-(void)addRenderEffect:(id)arg1 ;
-(UIKBGradient *)layeredForegroundGradient;
-(BOOL)controlOpacities;
-(UIKBRenderGeometry *)geometry;
-(NSString *)hashString;
-(void)removeAllRenderEffects;
-(void)overlayWithTraits:(id)arg1 ;
-(BOOL)blurBlending;
-(NSArray *)secondarySymbolStyles;
-(void)setBlendForm:(long long)arg1 ;
-(void)setVariantGeometries:(NSArray *)arg1 ;
-(void)setHighlightedVariantTraits:(UIKBRenderTraits *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)variantGeometries;
-(UIKBTextStyle *)symbolStyle;
-(UIKBGradient *)layeredBackgroundGradient;
-(void)dealloc;
-(void)setRenderSecondarySymbolsSeparately:(BOOL)arg1 ;
-(void)modifyForMasking;
@end
