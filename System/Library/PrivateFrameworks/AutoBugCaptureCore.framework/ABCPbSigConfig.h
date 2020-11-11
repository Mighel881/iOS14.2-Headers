/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AutoBugCaptureCore/AutoBugCaptureCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ABCPbSigConfig : PBCodable <NSCopying> {

	NSString* _domain;
	NSString* _subtype;
	NSString* _subtypeContext;
	NSString* _type;

}

@property (nonatomic,readonly) BOOL hasDomain; 
@property (nonatomic,retain) NSString * domain;                      //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) NSString * type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtype; 
@property (nonatomic,retain) NSString * subtype;                     //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtypeContext; 
@property (nonatomic,retain) NSString * subtypeContext;              //@synthesize subtypeContext=_subtypeContext - In the implementation block
-(void)setSubtype:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)subtype;
-(void)setDomain:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)hasSubtype;
-(void)setType:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)subtypeContext;
-(void)setSubtypeContext:(NSString *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDomain;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasType;
-(NSString *)type;
-(NSString *)domain;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasSubtypeContext;
@end
