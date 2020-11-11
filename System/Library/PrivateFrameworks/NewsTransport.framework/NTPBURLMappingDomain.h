/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NTPBURLMappingDomain : PBCodable <NSCopying> {

	double _averageSafariVisitsPerDay;
	NSString* _domain;
	NSMutableArray* _paths;

}

@property (nonatomic,retain) NSString * domain;                             //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSMutableArray * paths;                        //@synthesize paths=_paths - In the implementation block
@property (assign,nonatomic) double averageSafariVisitsPerDay;              //@synthesize averageSafariVisitsPerDay=_averageSafariVisitsPerDay - In the implementation block
+(Class)pathsType;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)paths;
-(void)setPaths:(NSMutableArray *)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)addPaths:(id)arg1 ;
-(void)clearPaths;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)domain;
-(unsigned long long)pathsCount;
-(double)averageSafariVisitsPerDay;
-(void)setAverageSafariVisitsPerDay:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)pathsAtIndex:(unsigned long long)arg1 ;
@end
