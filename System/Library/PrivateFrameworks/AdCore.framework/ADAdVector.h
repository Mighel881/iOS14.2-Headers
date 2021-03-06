/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ADAdVector : PBCodable <NSCopying> {

	SCD_Struct_AD9* _vectors;
	NSString* _version;

}

@property (nonatomic,readonly) BOOL hasVersion; 
@property (nonatomic,retain) NSString * version;                             //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) unsigned long long vectorsCount; 
@property (nonatomic,readonly) double* vectors; 
-(void)mergeFrom:(id)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)version;
-(id)dictionaryRepresentation;
-(double*)vectors;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)vectorAtIndex:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasVersion;
-(void)addVector:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)vectorsCount;
-(void)clearVectors;
-(void)setVectors:(double*)arg1 count:(unsigned long long)arg2 ;
@end

