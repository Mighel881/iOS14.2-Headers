/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface AWDHomeKitMultiUserSettingsValueByKeyPath : PBCodable <NSCopying> {

	long long _homeKitMultiUserSettingsValueInteger;
	NSData* _homeKitMultiUserSettingsValueData;
	NSString* _homeKitMultiUserSettingsValueString;
	int _type;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasHomeKitMultiUserSettingsValueString; 
@property (nonatomic,retain) NSString * homeKitMultiUserSettingsValueString;              //@synthesize homeKitMultiUserSettingsValueString=_homeKitMultiUserSettingsValueString - In the implementation block
@property (assign,nonatomic) BOOL hasHomeKitMultiUserSettingsValueInteger; 
@property (assign,nonatomic) long long homeKitMultiUserSettingsValueInteger;              //@synthesize homeKitMultiUserSettingsValueInteger=_homeKitMultiUserSettingsValueInteger - In the implementation block
@property (nonatomic,readonly) BOOL hasHomeKitMultiUserSettingsValueData; 
@property (nonatomic,retain) NSData * homeKitMultiUserSettingsValueData;                  //@synthesize homeKitMultiUserSettingsValueData=_homeKitMultiUserSettingsValueData - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(unsigned long long)hash;
-(int)StringAsType:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasType;
-(int)type;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHomeKitMultiUserSettingsValueString:(NSString *)arg1 ;
-(void)setHomeKitMultiUserSettingsValueData:(NSData *)arg1 ;
-(BOOL)hasHomeKitMultiUserSettingsValueString;
-(void)setHomeKitMultiUserSettingsValueInteger:(long long)arg1 ;
-(void)setHasHomeKitMultiUserSettingsValueInteger:(BOOL)arg1 ;
-(BOOL)hasHomeKitMultiUserSettingsValueInteger;
-(BOOL)hasHomeKitMultiUserSettingsValueData;
-(NSString *)homeKitMultiUserSettingsValueString;
-(long long)homeKitMultiUserSettingsValueInteger;
-(NSData *)homeKitMultiUserSettingsValueData;
@end

