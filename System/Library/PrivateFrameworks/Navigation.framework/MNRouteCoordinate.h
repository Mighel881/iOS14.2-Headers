/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Navigation/Navigation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNRouteCoordinate : PBCodable <NSCopying> {

	unsigned _index;
	float _offset;
	SCD_Struct_MN21 _has;

}

@property (assign,nonatomic) BOOL hasIndex; 
@property (assign,nonatomic) unsigned index;              //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) BOOL hasOffset; 
@property (assign,nonatomic) float offset;                //@synthesize offset=_offset - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setIndex:(unsigned)arg1 ;
-(unsigned long long)hash;
-(float)offset;
-(id)dictionaryRepresentation;
-(BOOL)hasIndex;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setOffset:(float)arg1 ;
-(unsigned)index;
-(void)setHasIndex:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasOffset;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasOffset:(BOOL)arg1 ;
@end
