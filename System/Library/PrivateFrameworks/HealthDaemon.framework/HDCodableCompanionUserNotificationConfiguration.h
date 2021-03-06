/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDCodableCompanionUserNotificationConfiguration : PBCodable <NSCopying> {

	int _notificationType;
	SCD_Struct_HD7 _has;

}

@property (assign,nonatomic) BOOL hasNotificationType; 
@property (assign,nonatomic) int notificationType;                  //@synthesize notificationType=_notificationType - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setNotificationType:(int)arg1 ;
-(BOOL)hasNotificationType;
-(void)setHasNotificationType:(BOOL)arg1 ;
-(int)notificationType;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)notificationTypeAsString:(int)arg1 ;
-(int)StringAsNotificationType:(id)arg1 ;
@end

