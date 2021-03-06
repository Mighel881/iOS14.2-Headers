/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <PeopleSuggester/PeopleSuggester-Structs.h>
@class _CDInteractionStore, CNContactStore, HKHealthStore, _PSContactResolver, NSObject;

@interface _PSFamilyRecommender : NSObject {

	os_unfair_lock_s _lock;
	_CDInteractionStore* _interactionStore;
	CNContactStore* _contactStore;
	HKHealthStore* _healthStore;
	_PSContactResolver* _contactResolver;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) _PSContactResolver * contactResolver;                //@synthesize contactResolver=_contactResolver - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) _CDInteractionStore * interactionStore;              //@synthesize interactionStore=_interactionStore - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                       //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                         //@synthesize healthStore=_healthStore - In the implementation block
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id)init;
-(_CDInteractionStore *)interactionStore;
-(_PSContactResolver *)contactResolver;
-(id)contactKeysToFetch;
-(id)personRelationshipVocabularyByLocaleDictionary;
-(id)relationshipRegularExpressionForRelationship;
-(BOOL)regexMatchForRegex:(id)arg1 string:(id)arg2 ;
-(unsigned long long)indexToInsertDate:(id)arg1 array:(id)arg2 ;
-(void)logFeedbackForFamilyRecommenderCallHasRecommendations:(BOOL)arg1 ;
-(id)handleAndBundleIdDictionaryForFamilyRecipientContact:(id)arg1 lookBackDays:(long long)arg2 ;
-(id)familyRecipientsForShareSheet;
-(id)fetchAllContactIdsFromContactStore:(id)arg1 ;
-(id)nonFamilyRelations;
-(id)familyRecommendations;
-(CNContactStore *)contactStore;
-(void)setContactResolver:(_PSContactResolver *)arg1 ;
-(id)familyRecommendationSuggestionsForShareSheet;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(HKHealthStore *)healthStore;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setInteractionStore:(_CDInteractionStore *)arg1 ;
-(id)currentFamily;
-(id)currentFamilyExcludingMe:(id)arg1 ;
-(id)contactIdsFromContactRelationsAndNamesUsingMe:(id)arg1 ;
-(id)contactIdsFromEmergencyContacts;
@end

