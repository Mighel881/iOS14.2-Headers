/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@interface TDCatalogGlobals : NSManagedObject {

	unsigned long long _defaultBlendMode;
	BOOL _allowsVibrancy;
	BOOL _supportsWhitePointAdjustments;
	BOOL _supportsBrightnessAdjustments;
	BOOL _allowsSystemTintColors;
	BOOL _allowsCustomTintColors;
	BOOL _supportsMultipleAppearancesForEffects;

}

@property (assign,nonatomic) unsigned long long defaultBlendMode; 
@property (assign,nonatomic) BOOL allowsVibrancy; 
@property (assign,nonatomic) BOOL supportsWhitePointAdjustments; 
@property (assign,nonatomic) BOOL supportsBrightnessAdjustments; 
@property (assign,nonatomic) BOOL allowsSystemTintColors; 
@property (assign,nonatomic) BOOL allowsCustomTintColors; 
@property (assign,nonatomic) BOOL supportsMultipleAppearancesForEffects; 
-(BOOL)allowsVibrancy;
-(id)dictionaryForArchiving;
-(BOOL)supportsMultipleAppearancesForEffects;
-(unsigned long long)defaultBlendMode;
-(BOOL)supportsWhitePointAdjustments;
-(BOOL)supportsBrightnessAdjustments;
-(BOOL)allowsSystemTintColors;
-(BOOL)allowsCustomTintColors;
-(void)setDefaultBlendMode:(unsigned long long)arg1 ;
-(void)setAllowsVibrancy:(BOOL)arg1 ;
-(void)setSupportsWhitePointAdjustments:(BOOL)arg1 ;
-(void)setSupportsBrightnessAdjustments:(BOOL)arg1 ;
-(void)setAllowsSystemTintColors:(BOOL)arg1 ;
-(void)setAllowsCustomTintColors:(BOOL)arg1 ;
-(void)setSupportsMultipleAppearancesForEffects:(BOOL)arg1 ;
@end
