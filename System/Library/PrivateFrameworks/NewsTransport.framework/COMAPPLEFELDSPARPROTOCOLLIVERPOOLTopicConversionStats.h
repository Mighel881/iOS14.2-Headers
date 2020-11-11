/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, NSString;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLTopicConversionStats : PBCodable <NSCopying> {

	COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats* _conversionStats;
	NSString* _tagId;

}

@property (nonatomic,readonly) BOOL hasConversionStats; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats * conversionStats;              //@synthesize conversionStats=_conversionStats - In the implementation block
@property (nonatomic,readonly) BOOL hasTagId; 
@property (nonatomic,retain) NSString * tagId;                                                                //@synthesize tagId=_tagId - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)conversionStats;
-(NSString *)tagId;
-(unsigned long long)hash;
-(void)setConversionStats:(COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasTagId;
-(BOOL)hasConversionStats;
-(void)writeTo:(id)arg1 ;
-(void)setTagId:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
