/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WDDocument, WDParagraphProperties, WDCharacterProperties, WDTableRowProperties, WDTableCellProperties, WDStyle;

@interface WDTableStyleOverride : NSObject <NSCopying> {

	WDDocument* mDocument;
	int mPart;
	WDParagraphProperties* mParagraphProperties;
	WDCharacterProperties* mCharacterProperties;
	WDTableRowProperties* mTableRowProperties;
	WDTableCellProperties* mTableCellStyleProperties;
	unsigned mParagraphPropertiesOverridden : 1;
	unsigned mCharacterPropertiesOverridden : 1;
	unsigned mTableRowPropertiesOverridden : 1;
	unsigned mTableCellStylePropertiesOverridden : 1;
	WDStyle* mStyle;

}

@property (__weak) WDStyle * style; 
-(int)part;
-(id)description;
-(id)initWithDocument:(id)arg1 ;
-(WDStyle *)style;
-(void)setPart:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStyle:(WDStyle *)arg1 ;
-(id)paragraphProperties;
-(id)characterProperties;
-(BOOL)isCharacterPropertiesOverridden;
-(id)tableProperties;
-(id)mutableCharacterProperties;
-(id)tableRowProperties;
-(id)mutableParagraphProperties;
-(BOOL)isParagraphPropertiesOverridden;
-(void)setParagraphPropertiesOverridden:(BOOL)arg1 ;
-(void)setCharacterPropertiesOverridden:(BOOL)arg1 ;
-(BOOL)isTablePropertiesOverridden;
-(id)mutableTableRowProperties;
-(BOOL)isTableRowPropertiesOverridden;
-(void)setTableRowPropertiesOverridden:(BOOL)arg1 ;
-(id)tableCellStyleProperties;
-(id)mutableTableCellStyleProperties;
-(BOOL)isTableCellStylePropertiesOverridden;
-(void)setTableCellStylePropertiesOverridden:(BOOL)arg1 ;
@end

