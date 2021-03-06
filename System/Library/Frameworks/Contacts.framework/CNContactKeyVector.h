/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/CNKeyDescriptor_Private.h>

@class NSString;

@interface CNContactKeyVector : NSObject <NSMutableCopying, CNKeyDescriptor_Private> {

	long long _bitBuckets[1];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyVector;
+(id)keyVectorWithAllKeys;
+(BOOL)supportsSecureCoding;
+(id)freezeIfClassIsImmutable:(id)arg1 ;
+(id)keyVectorWithKey:(id)arg1 ;
+(id)keyVectorWithKeys:(id)arg1 ;
-(BOOL)isEqualToKeyVector:(id)arg1 ;
-(void)_checkStorageSize;
-(id)initWithKeys:(id)arg1 ;
-(id)keyVectorByRemovingKeysFromKeyVector:(id)arg1 ;
-(id)keyVectorByAddingKeys:(id)arg1 ;
-(id)keyVectorByAddingKey:(id)arg1 ;
-(long long*)_bitBuckets;
-(BOOL)containsKey:(id)arg1 ;
-(BOOL)intersectsKeyVector:(id)arg1 ;
-(id)keyVectorByAddingKeysFromKeyVector:(id)arg1 ;
-(BOOL)containsAllKeys;
-(id)initWithAllKeys;
-(void)_cn_executeGetterForRepresentedKeys:(/*^block*/id)arg1 ;
-(id)init;
-(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_cn_optionalKeys;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isSubsetOfKeyVector:(id)arg1 ;
-(id)_cn_requiredKeys;
-(id)initWithCoder:(id)arg1 ;
-(id)_cn_ignorableKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

