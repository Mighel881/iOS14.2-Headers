/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface BCSHoursPeriodMessage : PBCodable <NSCopying> {

	NSMutableArray* _hours;

}

@property (nonatomic,retain) NSMutableArray * hours;              //@synthesize hours=_hours - In the implementation block
+(Class)hoursType;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHours:(NSMutableArray *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableArray *)hours;
-(void)copyTo:(id)arg1 ;
-(void)addHours:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)hoursAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hoursCount;
-(void)clearHours;
@end

