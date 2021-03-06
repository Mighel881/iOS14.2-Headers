/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, HDCodableSample;

@interface HDCodableCDADocumentSample : PBCodable <HDDecoding, NSCopying> {

	NSString* _authorName;
	NSString* _custodianName;
	NSData* _documentData;
	int _omittedContent;
	NSString* _patientName;
	HDCodableSample* _sample;
	NSString* _title;
	SCD_Struct_HD7 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasSample; 
@property (nonatomic,retain) HDCodableSample * sample;              //@synthesize sample=_sample - In the implementation block
@property (assign,nonatomic) BOOL hasOmittedContent; 
@property (assign,nonatomic) int omittedContent;                    //@synthesize omittedContent=_omittedContent - In the implementation block
@property (nonatomic,readonly) BOOL hasDocumentData; 
@property (nonatomic,retain) NSData * documentData;                 //@synthesize documentData=_documentData - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasPatientName; 
@property (nonatomic,retain) NSString * patientName;                //@synthesize patientName=_patientName - In the implementation block
@property (nonatomic,readonly) BOOL hasAuthorName; 
@property (nonatomic,retain) NSString * authorName;                 //@synthesize authorName=_authorName - In the implementation block
@property (nonatomic,readonly) BOOL hasCustodianName; 
@property (nonatomic,retain) NSString * custodianName;              //@synthesize custodianName=_custodianName - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(HDCodableSample *)sample;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(void)setSample:(HDCodableSample *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)documentData;
-(BOOL)hasTitle;
-(void)copyTo:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)authorName;
-(NSString *)custodianName;
-(NSString *)patientName;
-(void)setAuthorName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasAuthorName;
-(BOOL)applyToObject:(id)arg1 ;
-(BOOL)hasSample;
-(void)setOmittedContent:(int)arg1 ;
-(void)setDocumentData:(NSData *)arg1 ;
-(void)setPatientName:(NSString *)arg1 ;
-(void)setCustodianName:(NSString *)arg1 ;
-(int)omittedContent;
-(void)setHasOmittedContent:(BOOL)arg1 ;
-(BOOL)hasOmittedContent;
-(id)omittedContentAsString:(int)arg1 ;
-(int)StringAsOmittedContent:(id)arg1 ;
-(BOOL)hasDocumentData;
-(BOOL)hasPatientName;
-(BOOL)hasCustodianName;
@end

