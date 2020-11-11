/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBProductInventoryResult.h>
@class NSString, NSArray, NSData;


@protocol _SFPBProductInventoryResult <NSObject>
@property (nonatomic,copy) NSString * productIdentifier; 
@property (nonatomic,copy) NSArray * availabilitys; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSData *)jsonData;
-(void)addAvailability:(id)arg1;
-(unsigned long long)availabilityCount;
-(id)availabilityAtIndex:(unsigned long long)arg1;
-(id)initWithDictionary:(id)arg1;
-(void)setProductIdentifier:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(void)clearAvailability;
-(void)setAvailabilitys:(id)arg1;
-(NSArray *)availabilitys;
-(NSString *)productIdentifier;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSData;

@interface _SFPBProductInventoryResult : PBCodable <_SFPBProductInventoryResult, NSSecureCoding> {

	NSString* _productIdentifier;
	NSArray* _availabilitys;

}

@property (nonatomic,copy) NSString * productIdentifier;              //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * availabilitys;                   //@synthesize availabilitys=_availabilitys - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(unsigned long long)hash;
-(void)addAvailability:(id)arg1 ;
-(unsigned long long)availabilityCount;
-(id)availabilityAtIndex:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setAvailability:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)clearAvailability;
-(void)setAvailabilitys:(NSArray *)arg1 ;
-(NSArray *)availabilitys;
-(NSString *)productIdentifier;
@end
