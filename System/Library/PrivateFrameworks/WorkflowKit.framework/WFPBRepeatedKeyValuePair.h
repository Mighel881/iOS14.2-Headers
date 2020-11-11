/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface WFPBRepeatedKeyValuePair : PBCodable <NSCopying> {

	NSString* _key;
	NSMutableArray* _values;

}

@property (nonatomic,retain) NSString * key;                       //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSMutableArray * values;              //@synthesize values=_values - In the implementation block
+(Class)valueType;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)valuesCount;
-(void)addValue:(id)arg1 ;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(NSString *)key;
-(unsigned long long)hash;
-(void)setKey:(NSString *)arg1 ;
-(void)setValues:(NSMutableArray *)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearValues;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)values;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
