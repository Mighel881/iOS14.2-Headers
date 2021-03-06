/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WBSAnalyticsSafariSelectedFavoritesGridItemEvent : PBCodable <NSCopying> {

	unsigned long long _itemsPerRow;
	unsigned long long _row;
	unsigned long long _sectionIndex;
	unsigned long long _timestamp;
	int _displayContext;
	int _section;
	int _type;
	SCD_Struct_WB10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasRow; 
@property (assign,nonatomic) unsigned long long row;                       //@synthesize row=_row - In the implementation block
@property (assign,nonatomic) BOOL hasItemsPerRow; 
@property (assign,nonatomic) unsigned long long itemsPerRow;               //@synthesize itemsPerRow=_itemsPerRow - In the implementation block
@property (assign,nonatomic) BOOL hasSectionIndex; 
@property (assign,nonatomic) unsigned long long sectionIndex;              //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayContext; 
@property (assign,nonatomic) int displayContext;                           //@synthesize displayContext=_displayContext - In the implementation block
@property (assign,nonatomic) BOOL hasSection; 
@property (assign,nonatomic) int section;                                  //@synthesize section=_section - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setSection:(int)arg1 ;
-(BOOL)hasSection;
-(id)typeAsString:(int)arg1 ;
-(int)section;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasRow;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasTimestamp;
-(id)dictionaryRepresentation;
-(void)setType:(int)arg1 ;
-(BOOL)hasItemsPerRow;
-(void)setRow:(unsigned long long)arg1 ;
-(void)setHasItemsPerRow:(BOOL)arg1 ;
-(void)setHasSectionIndex:(BOOL)arg1 ;
-(BOOL)hasSectionIndex;
-(void)setHasDisplayContext:(BOOL)arg1 ;
-(BOOL)hasDisplayContext;
-(id)displayContextAsString:(int)arg1 ;
-(int)StringAsDisplayContext:(id)arg1 ;
-(void)setHasSection:(BOOL)arg1 ;
-(id)sectionAsString:(int)arg1 ;
-(int)StringAsSection:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasType;
-(int)type;
-(void)setDisplayContext:(int)arg1 ;
-(unsigned long long)row;
-(void)setHasRow:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setItemsPerRow:(unsigned long long)arg1 ;
-(unsigned long long)itemsPerRow;
-(int)displayContext;
-(unsigned long long)sectionIndex;
-(void)setSectionIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

