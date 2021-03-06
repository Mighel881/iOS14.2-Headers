/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOTrafficCameraInformation : PBCodable <NSCopying> {

	NSString* _cameraIdentifier;
	int _cameraType;
	SCD_Struct_GE127 _flags;

}

@property (nonatomic,readonly) BOOL hasCameraIdentifier; 
@property (nonatomic,retain) NSString * cameraIdentifier; 
@property (assign,nonatomic) BOOL hasCameraType; 
@property (assign,nonatomic) int cameraType; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)cameraIdentifier;
-(void)setCameraIdentifier:(NSString *)arg1 ;
-(void)setCameraType:(int)arg1 ;
-(BOOL)hasCameraIdentifier;
-(void)setHasCameraType:(BOOL)arg1 ;
-(BOOL)hasCameraType;
-(id)cameraTypeAsString:(int)arg1 ;
-(int)StringAsCameraType:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)cameraType;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end

