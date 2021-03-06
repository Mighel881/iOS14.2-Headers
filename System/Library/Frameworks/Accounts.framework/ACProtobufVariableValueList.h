/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Accounts/Accounts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSArray, NSSet;

@interface ACProtobufVariableValueList : PBCodable <NSCopying> {

	NSMutableArray* _values;

}

@property (nonatomic,copy) NSArray * array; 
@property (nonatomic,copy) NSSet * set; 
@property (nonatomic,retain) NSMutableArray * values;              //@synthesize values=_values - In the implementation block
+(Class)valueType;
-(id)initWithSet:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)valuesCount;
-(void)addValue:(id)arg1 ;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(NSArray *)array;
-(void)setSet:(NSSet *)arg1 ;
-(unsigned long long)hash;
-(void)setValues:(NSMutableArray *)arg1 ;
-(NSSet *)set;
-(id)dictionaryRepresentation;
-(void)clearValues;
-(BOOL)readFrom:(id)arg1 ;
-(id)_convertArray:(id)arg1 ;
-(NSMutableArray *)values;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(void)setArray:(NSArray *)arg1 ;
@end

