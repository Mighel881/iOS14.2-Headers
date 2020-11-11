/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDuet/_DKObject.h>
#import <libobjc.A.dylib/_DKHasComparableValue.h>
#import <libobjc.A.dylib/_DKHasPrimaryValue.h>
#import <libobjc.A.dylib/_DKHasObjectType.h>

@class NSString, _DKIdentifierType;

@interface _DKIdentifier : _DKObject <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType> {

	NSString* _stringValue;
	_DKIdentifierType* _identifierType;

}

@property (retain) NSString * stringValue;                          //@synthesize stringValue=_stringValue - In the implementation block
@property (retain) _DKIdentifierType * identifierType;              //@synthesize identifierType=_identifierType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entityName;
+(BOOL)supportsSecureCoding;
+(id)objectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 excludedMetadataKeys:(id)arg3 cache:(id)arg4 ;
+(id)identifierWithString:(id)arg1 type:(id)arg2 ;
+(id)fromPBCodable:(id)arg1 ;
+(id)_identifierFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 cache:(id)arg3 ;
-(id)objectType;
-(_DKIdentifierType *)identifierType;
-(void)setStringValue:(NSString *)arg1 ;
-(id)primaryValue;
-(NSString *)stringValue;
-(long long)integerValue;
-(void)encodeWithCoder:(id)arg1 ;
-(double)doubleValue;
-(NSString *)description;
-(long long)compareValue:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithString:(id)arg1 type:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifierType:(_DKIdentifierType *)arg1 ;
-(id)toPBCodable;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(long long)typeCode;
@end
