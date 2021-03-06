/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, FCCKPDate, NSMutableArray, FCCKPRecordReference, NSString;

@interface FCCKPRecordFieldValue : PBCodable <NSCopying> {

	double _doubleValue;
	long long _signedValue;
	NSData* _bytesValue;
	FCCKPDate* _dateValue;
	NSMutableArray* _listValues;
	FCCKPRecordReference* _referenceValue;
	NSString* _stringValue;
	int _type;
	SCD_Struct_FC8 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasBytesValue; 
@property (nonatomic,retain) NSData * bytesValue;                                //@synthesize bytesValue=_bytesValue - In the implementation block
@property (assign,nonatomic) BOOL hasSignedValue; 
@property (assign,nonatomic) long long signedValue;                              //@synthesize signedValue=_signedValue - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                                 //@synthesize doubleValue=_doubleValue - In the implementation block
@property (nonatomic,readonly) BOOL hasDateValue; 
@property (nonatomic,retain) FCCKPDate * dateValue;                              //@synthesize dateValue=_dateValue - In the implementation block
@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                             //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) BOOL hasReferenceValue; 
@property (nonatomic,retain) FCCKPRecordReference * referenceValue;              //@synthesize referenceValue=_referenceValue - In the implementation block
@property (nonatomic,retain) NSMutableArray * listValues;                        //@synthesize listValues=_listValues - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(FCCKPDate *)dateValue;
-(void)setStringValue:(NSString *)arg1 ;
-(BOOL)hasStringValue;
-(NSString *)stringValue;
-(unsigned long long)hash;
-(BOOL)hasDoubleValue;
-(void)addListValue:(id)arg1 ;
-(void)setListValues:(NSMutableArray *)arg1 ;
-(void)clearListValues;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(double)doubleValue;
-(id)dictionaryRepresentation;
-(void)setBytesValue:(NSData *)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(void)setType:(int)arg1 ;
-(NSMutableArray *)listValues;
-(BOOL)readFrom:(id)arg1 ;
-(long long)signedValue;
-(unsigned long long)listValuesCount;
-(void)setHasType:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasReferenceValue;
-(BOOL)hasType;
-(int)type;
-(FCCKPRecordReference *)referenceValue;
-(void)setHasSignedValue:(BOOL)arg1 ;
-(id)listValueAtIndex:(unsigned long long)arg1 ;
-(void)setReferenceValue:(FCCKPRecordReference *)arg1 ;
-(void)setDateValue:(FCCKPDate *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)bytesValue;
-(BOOL)hasBytesValue;
-(void)setSignedValue:(long long)arg1 ;
-(BOOL)hasDateValue;
-(BOOL)hasSignedValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

