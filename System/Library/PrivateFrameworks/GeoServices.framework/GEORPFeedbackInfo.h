/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString;

@interface GEORPFeedbackInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _feedbackComponents;
	NSString* _feedbackId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _status;
	struct {
		unsigned has_status : 1;
		unsigned read_unknownFields : 1;
		unsigned read_feedbackComponents : 1;
		unsigned read_feedbackId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasFeedbackId; 
@property (nonatomic,retain) NSString * feedbackId; 
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (nonatomic,retain) NSMutableArray * feedbackComponents; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)feedbackComponentType;
-(void)mergeFrom:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(void)setHasStatus:(BOOL)arg1 ;
-(int)status;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setStatus:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)feedbackId;
-(void)readAll:(BOOL)arg1 ;
-(void)setFeedbackId:(NSString *)arg1 ;
-(void)addFeedbackComponent:(id)arg1 ;
-(unsigned long long)feedbackComponentsCount;
-(void)clearFeedbackComponents;
-(id)feedbackComponentAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasFeedbackId;
-(NSMutableArray *)feedbackComponents;
-(void)setFeedbackComponents:(NSMutableArray *)arg1 ;
-(id)statusAsString:(int)arg1 ;
@end
