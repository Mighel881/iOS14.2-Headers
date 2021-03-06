/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WDTableProperties, WDCharacterProperties;

@interface WDTableRowProperties : NSObject <NSCopying> {

	WDTableProperties* mTableProperties;
	WDCharacterProperties* mCharacterProperties;
	unsigned mOriginal : 1;
	unsigned mTracked : 1;
	unsigned mResolved : 1;
	SCD_Struct_WD116 mOriginalProperties;
	SCD_Struct_WD116 mTrackedProperties;

}
-(void)setHeader:(BOOL)arg1 ;
-(long long)height;
-(BOOL)header;
-(id)init;
-(void)setHeight:(long long)arg1 ;
-(void)addProperties:(id)arg1 ;
-(id)description;
-(id)initWithDocument:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)characterProperties;
-(BOOL)isHeightOverridden;
-(id)tableProperties;
-(void)setResolveMode:(int)arg1 ;
-(int)resolveMode;
-(void)addPropertiesValues:(SCD_Struct_WD116*)arg1 to:(SCD_Struct_WD116*)arg2 ;
-(short)widthBefore;
-(void)setWidthBefore:(short)arg1 ;
-(BOOL)isWidthBeforeOverridden;
-(int)widthBeforeType;
-(void)setWidthBeforeType:(int)arg1 ;
-(BOOL)isWidthBeforeTypeOverridden;
-(short)widthAfter;
-(void)setWidthAfter:(short)arg1 ;
-(BOOL)isWidthAfterOverridden;
-(int)widthAfterType;
-(void)setWidthAfterType:(int)arg1 ;
-(BOOL)isWidthAfterTypeOverridden;
-(int)heightType;
-(void)setHeightType:(int)arg1 ;
-(BOOL)isHeightTypeOverridden;
-(BOOL)isHeaderOverridden;
@end

