/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BookDataStore/BCMutableCloudData.h>
#import <libobjc.A.dylib/BCSecureUserDatum.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, CKRecord, NSData;

@interface BCMutableSecureUserDatum : BCMutableCloudData <BCSecureUserDatum, NSSecureCoding> {

	NSString* _key;
	NSString* _value;

}

@property (nonatomic,copy) NSString * value;                                                     //@synthesize value=_value - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                                              //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL deletedFlag; 
@property (nonatomic,copy,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) long long editGeneration; 
@property (nonatomic,readonly) long long syncGeneration; 
@property (nonatomic,copy,readonly) CKRecord * systemFields; 
@property (nonatomic,copy,readonly) NSData * ckSystemFields; 
@property (assign,nonatomic,__weak) id<BCCloudDataPrivacyDelegate> privacyDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)zoneName;
-(NSString *)key;
-(id)recordType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)identifier;
-(id)initWithKey:(id)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(NSString *)description;
-(NSString *)value;
-(id)initWithCoder:(id)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(id)initWithCloudData:(id)arg1 ;
-(id)configuredRecordFromAttributes;
@end
