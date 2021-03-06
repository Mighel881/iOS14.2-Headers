/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBApiResults.h>
@class NSArray, NSData;


@protocol _SFPBApiResults <NSObject>
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) int resultType; 
@property (nonatomic,copy) NSArray * flights; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setResultType:(int)arg1;
-(NSData *)jsonData;
-(void)addFlights:(id)arg1;
-(void)clearFlights;
-(unsigned long long)flightsCount;
-(id)flightsAtIndex:(unsigned long long)arg1;
-(void)setFlights:(id)arg1;
-(int)resultType;
-(int)status;
-(id)initWithDictionary:(id)arg1;
-(void)setStatus:(int)arg1;
-(NSArray *)flights;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSData, NSString;

@interface _SFPBApiResults : PBCodable <_SFPBApiResults, NSSecureCoding> {

	int _status;
	int _resultType;
	NSArray* _flights;

}

@property (assign,nonatomic) int status;                            //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) int resultType;                        //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,copy) NSArray * flights;                       //@synthesize flights=_flights - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setResultType:(int)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(void)addFlights:(id)arg1 ;
-(void)clearFlights;
-(unsigned long long)flightsCount;
-(id)flightsAtIndex:(unsigned long long)arg1 ;
-(void)setFlights:(NSArray *)arg1 ;
-(int)resultType;
-(unsigned long long)hash;
-(int)status;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setStatus:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSArray *)flights;
-(BOOL)isEqual:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
@end

