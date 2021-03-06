/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLocation;

@interface GEOLogMsgStateLookAroundView : PBCodable <NSCopying> {

	GEOLocation* _location;
	double _zoomLevel;
	unsigned _heading;
	unsigned _numberPoisInView;
	BOOL _isLabelingShown;
	struct {
		unsigned has_zoomLevel : 1;
		unsigned has_heading : 1;
		unsigned has_numberPoisInView : 1;
		unsigned has_isLabelingShown : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location; 
@property (assign,nonatomic) BOOL hasHeading; 
@property (assign,nonatomic) unsigned heading; 
@property (assign,nonatomic) BOOL hasZoomLevel; 
@property (assign,nonatomic) double zoomLevel; 
@property (assign,nonatomic) BOOL hasNumberPoisInView; 
@property (assign,nonatomic) unsigned numberPoisInView; 
@property (assign,nonatomic) BOOL hasIsLabelingShown; 
@property (assign,nonatomic) BOOL isLabelingShown; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(unsigned)heading;
-(GEOLocation *)location;
-(id)initWithDictionary:(id)arg1 ;
-(void)setNumberPoisInView:(unsigned)arg1 ;
-(void)setIsLabelingShown:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasZoomLevel:(BOOL)arg1 ;
-(BOOL)hasLocation;
-(void)setHeading:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasHeading;
-(void)setHasHeading:(BOOL)arg1 ;
-(void)setZoomLevel:(double)arg1 ;
-(void)setLocation:(GEOLocation *)arg1 ;
-(BOOL)hasZoomLevel;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)zoomLevel;
-(void)writeTo:(id)arg1 ;
-(unsigned)numberPoisInView;
-(void)setHasNumberPoisInView:(BOOL)arg1 ;
-(BOOL)hasNumberPoisInView;
-(BOOL)isLabelingShown;
-(void)setHasIsLabelingShown:(BOOL)arg1 ;
-(BOOL)hasIsLabelingShown;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end

