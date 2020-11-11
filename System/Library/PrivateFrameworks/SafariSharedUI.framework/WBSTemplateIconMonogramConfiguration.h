/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SafariSharedUI/SafariSharedUI-Structs.h>
@class UIColor;

@interface WBSTemplateIconMonogramConfiguration : NSObject {

	BOOL _skipMonogramGeneration;
	double _fontSize;
	long long _fontWeight;
	double _baselineOffset;
	UIColor* _backgroundColor;
	double _cornerRadius;
	CGSize _iconSize;

}

@property (assign,nonatomic) BOOL skipMonogramGeneration;              //@synthesize skipMonogramGeneration=_skipMonogramGeneration - In the implementation block
@property (assign,nonatomic) CGSize iconSize;                          //@synthesize iconSize=_iconSize - In the implementation block
@property (assign,nonatomic) double fontSize;                          //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) long long fontWeight;                     //@synthesize fontWeight=_fontWeight - In the implementation block
@property (assign,nonatomic) double baselineOffset;                    //@synthesize baselineOffset=_baselineOffset - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) double cornerRadius;                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
+(id)configurationWithIconSize:(CGSize)arg1 fontSize:(double)arg2 fontWeight:(long long)arg3 baselineOffset:(double)arg4 backgroundColor:(id)arg5 cornerRadius:(double)arg6 ;
+(id)configurationWithBackgroundColor:(id)arg1 ;
-(long long)fontWeight;
-(void)setBaselineOffset:(double)arg1 ;
-(double)fontSize;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setFontSize:(double)arg1 ;
-(double)baselineOffset;
-(CGSize)iconSize;
-(void)setFontWeight:(long long)arg1 ;
-(void)setIconSize:(CGSize)arg1 ;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(BOOL)skipMonogramGeneration;
-(void)setSkipMonogramGeneration:(BOOL)arg1 ;
@end
