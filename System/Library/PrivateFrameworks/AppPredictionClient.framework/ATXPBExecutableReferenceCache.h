/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ATXPBExecutableReferenceCache : PBCodable <NSCopying> {

	NSMutableArray* _keys;

}

@property (nonatomic,retain) NSMutableArray * keys;              //@synthesize keys=_keys - In the implementation block
+(Class)keysType;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)keys;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(void)setKeys:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addKeys:(id)arg1 ;
-(unsigned long long)keysCount;
-(void)clearKeys;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)keysAtIndex:(unsigned long long)arg1 ;
@end

