/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAIntentGroupCustomVocabularyEntity.h>

@class NSString;

@interface SAIntentGroupCustomVocabularyPerson : AceObject <SAIntentGroupCustomVocabularyEntity>

@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSString * middleName; 
@property (nonatomic,copy) NSString * nickname; 
@property (nonatomic,copy) NSString * relationship; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)customVocabularyPerson;
+(id)customVocabularyPersonWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)firstName;
-(void)setLastName:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)relationship;
-(void)setFirstName:(NSString *)arg1 ;
-(NSString *)lastName;
-(id)encodedClassName;
-(void)setMiddleName:(NSString *)arg1 ;
-(NSString *)nickname;
-(void)setRelationship:(NSString *)arg1 ;
-(NSString *)middleName;
-(void)setNickname:(NSString *)arg1 ;
@end

