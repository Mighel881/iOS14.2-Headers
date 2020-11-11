/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBDate.h>
@class NSData;


@protocol _SFPBDate <NSObject>
@property (assign,nonatomic) double secondsSince1970; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSData *)jsonData;
-(void)setSecondsSince1970:(double)arg1;
-(double)secondsSince1970;
-(id)initWithDictionary:(id)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface _SFPBDate : PBCodable <_SFPBDate, NSSecureCoding> {

	double _secondsSince1970;

}

@property (assign,nonatomic) double secondsSince1970;               //@synthesize secondsSince1970=_secondsSince1970 - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)jsonData;
-(void)setSecondsSince1970:(double)arg1 ;
-(double)secondsSince1970;
-(unsigned long long)hash;
-(id)initWithNSDate:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
@end
