/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CLPAccessoryMeta, NSString, CLPMeta;

@interface CLPLocationCollectionRequest : PBRequest <NSCopying> {

	NSMutableArray* _accessoryLocations;
	CLPAccessoryMeta* _accessoryMeta;
	NSString* _appBundleId;
	NSMutableArray* _appBundleIds;
	NSMutableArray* _locations;
	int _mcc;
	CLPMeta* _meta;
	int _mnc;
	int _rat;
	NSString* _tripId;
	SCD_Struct_CL1 _has;

}

@property (nonatomic,retain) CLPMeta * meta;                                   //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) NSMutableArray * locations;                       //@synthesize locations=_locations - In the implementation block
@property (nonatomic,readonly) BOOL hasAppBundleId; 
@property (nonatomic,retain) NSString * appBundleId;                           //@synthesize appBundleId=_appBundleId - In the implementation block
@property (nonatomic,retain) NSString * tripId;                                //@synthesize tripId=_tripId - In the implementation block
@property (assign,nonatomic) BOOL hasRat; 
@property (assign,nonatomic) int rat;                                          //@synthesize rat=_rat - In the implementation block
@property (assign,nonatomic) BOOL hasMcc; 
@property (assign,nonatomic) int mcc;                                          //@synthesize mcc=_mcc - In the implementation block
@property (assign,nonatomic) BOOL hasMnc; 
@property (assign,nonatomic) int mnc;                                          //@synthesize mnc=_mnc - In the implementation block
@property (nonatomic,retain) NSMutableArray * appBundleIds;                    //@synthesize appBundleIds=_appBundleIds - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessoryMeta; 
@property (nonatomic,retain) CLPAccessoryMeta * accessoryMeta;                 //@synthesize accessoryMeta=_accessoryMeta - In the implementation block
@property (nonatomic,retain) NSMutableArray * accessoryLocations;              //@synthesize accessoryLocations=_accessoryLocations - In the implementation block
+(Class)locationType;
+(Class)appBundleIdsType;
+(Class)accessoryLocationType;
-(int)mcc;
-(void)setRat:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(CLPMeta *)meta;
-(void)addLocation:(id)arg1 ;
-(void)clearLocations;
-(int)mnc;
-(BOOL)hasRat;
-(unsigned)requestTypeCode;
-(NSString *)tripId;
-(void)setAppBundleId:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)appBundleId;
-(Class)responseClass;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasMcc;
-(BOOL)hasMnc;
-(id)description;
-(void)setMcc:(int)arg1 ;
-(void)setMeta:(CLPMeta *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLocations:(NSMutableArray *)arg1 ;
-(void)setTripId:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)locationsCount;
-(int)rat;
-(BOOL)hasAppBundleId;
-(void)writeTo:(id)arg1 ;
-(id)locationAtIndex:(unsigned long long)arg1 ;
-(void)setHasRat:(BOOL)arg1 ;
-(NSMutableArray *)appBundleIds;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAppBundleIds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)locations;
-(void)setMnc:(int)arg1 ;
-(void)addAppBundleIds:(id)arg1 ;
-(void)addAccessoryLocation:(id)arg1 ;
-(unsigned long long)appBundleIdsCount;
-(void)clearAppBundleIds;
-(id)appBundleIdsAtIndex:(unsigned long long)arg1 ;
-(void)setAccessoryMeta:(CLPAccessoryMeta *)arg1 ;
-(unsigned long long)accessoryLocationsCount;
-(void)clearAccessoryLocations;
-(id)accessoryLocationAtIndex:(unsigned long long)arg1 ;
-(void)setHasMcc:(BOOL)arg1 ;
-(void)setHasMnc:(BOOL)arg1 ;
-(BOOL)hasAccessoryMeta;
-(CLPAccessoryMeta *)accessoryMeta;
-(NSMutableArray *)accessoryLocations;
-(void)setAccessoryLocations:(NSMutableArray *)arg1 ;
@end

