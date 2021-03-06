/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CNContainerCache, CNiOSAddressBookDataMapper, CNiOSAddressBook, CNResult, NSData;

@interface CNContactStore : NSObject {

	CNContainerCache* _containerCache;

}

@property (nonatomic,readonly) CNiOSAddressBookDataMapper * iOSMapper; 
@property (nonatomic,readonly) CNiOSAddressBook * addressBook; 
@property (nonatomic,copy,readonly) CNResult * currentHistoryAnchor; 
@property (nonatomic,copy,readonly) NSData * currentHistoryToken; 
+(id)internalIdentifierFromContactIdentifier:(id)arg1 ;
+(void)initialize;
+(id)storeIdentifier;
+(Class)storeClassWithIdentifier:(id)arg1 ;
+(id)storeWithOptions:(unsigned long long)arg1 ;
+(BOOL)eraseAllDataAtURL:(id)arg1 error:(id*)arg2 ;
+(id)contactIdentifierFromInternalIdentifier:(id)arg1 ;
+(id)storeInfoClasses;
+(BOOL)isXPCDataMapperStore:(id)arg1 ;
+(long long)authorizationStatusForEntityType:(long long)arg1 ;
+(id)standardLabelsForPropertyWithKey:(id)arg1 ;
+(id)storeIdentifierFromContactIdentifier:(id)arg1 ;
+(id)contactStoreForPublicAddressBook:(void*)arg1 ;
+(id)storeWithEnvironment:(id)arg1 options:(unsigned long long)arg2 ;
+(id)storeWithDelegateInfo:(id)arg1 ;
+(id)storeForFamilyMember:(id)arg1 ;
+(id)_contactStoreForPublicAddressBook:(void*)arg1 ;
+(id)standardLabelsForPropertyWithKey:(id)arg1 options:(unsigned long long)arg2 ;
+(BOOL)eraseAllDataAtLocationWithName:(id)arg1 error:(id*)arg2 ;
+(BOOL)isAccessRestrictedForEntityType:(long long)arg1 ;
-(BOOL)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)setDefaultAccountIdentifier:(id)arg1 error:(id*)arg2 ;
-(CNiOSAddressBookDataMapper *)iOSMapper;
-(id)matchingDictionaryForContact:(id)arg1 ;
-(id)contactIdentifierWithMatchingDictionary:(id)arg1 ;
-(id)usedLabelsForPropertyWithKey:(id)arg1 error:(id*)arg2 ;
-(id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2 ;
-(NSData *)currentHistoryToken;
-(BOOL)setMeContact:(id)arg1 error:(id*)arg2 ;
-(id)userActivityUserInfoForContact:(id)arg1 ;
-(id)unifiedContactCountWithError:(id*)arg1 ;
-(BOOL)registerChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)meContactIdentifiers:(id*)arg1 ;
-(BOOL)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id*)arg4 ;
-(id)initWithEnvironment:(id)arg1 ;
-(BOOL)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id*)arg3 ;
-(id)changeHistoryWithFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)executeFetchRequest:(id)arg1 progressiveResults:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)contactCountForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)unregisterChangeHistoryClientIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)sectionListOffsetsForSortOrder:(long long)arg1 error:(id*)arg2 ;
-(CNResult *)currentHistoryAnchor;
-(id)identifierWithError:(id*)arg1 ;
-(BOOL)executeChangeHistoryClearRequest:(id)arg1 error:(id*)arg2 ;
-(id)containersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(id)authorizedKeysForContactKeys:(id)arg1 ;
-(void)reindexSearchableItemsWithIdentifiers:(id)arg1 ;
-(void)requestAccessForEntityType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)requestAccessForEntityType:(long long)arg1 ;
-(id)defaultContainerIdentifier;
-(BOOL)enumerateNonUnifiedContactsWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)hasAccountFirstSyncCompleted;
-(id)_ios_meContactWithKeysToFetch:(id)arg1 error:(id*)arg2 ;
-(id)contactWithMatchingDictionary:(id)arg1 keysToFetch:(id)arg2 ;
-(id)initWithEnvironment:(id)arg1 options:(unsigned long long)arg2 ;
-(id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(BOOL)executeSaveRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)unregisterChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)countForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)executeSaveRequest:(id)arg1 response:(id*)arg2 authorizationContext:(id)arg3 error:(id*)arg4 ;
-(id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)contactFromPerson:(void*)arg1 keysToFetch:(id)arg2 mutable:(BOOL)arg3 ;
-(int)saveSequenceCount;
-(id)contactFromPerson:(void*)arg1 keysToFetch:(id)arg2 ;
-(id)contactFromPublicABPerson:(void*)arg1 keysToFetch:(id)arg2 ;
-(id)unifiedMeContactMatchingEmailAddresses:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(id)_ios_meContactIdentifierWithError:(id*)arg1 ;
-(id)enumeratorForContactFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)unifiedMeContactWithKeysToFetch:(id)arg1 error:(id*)arg2 ;
-(id)executeFetchRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)unifiedMeContactMatchingEmailAddress:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(id)latestConsumedChangeHistoryAnchorForClientIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)verifyChangeHistoryForClientIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)individualContactCountWithError:(id*)arg1 ;
-(void)requestAuthorization:(long long)arg1 entityType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)descriptorForRequiredKeysForMatchingDictionary;
-(BOOL)supportsSaveRequest:(id)arg1 ;
-(BOOL)hasMultipleGroupsOrAccounts;
-(id)synchronousRemoteObjectProxyForContactsXPCService;
-(id)verifyIndexWithError:(id*)arg1 ;
-(BOOL)resetSortDataIfNeededWithError:(id*)arg1 ;
-(id)originForSuggestion:(id)arg1 error:(id*)arg2 ;
-(id)initWithEnvironment:(id)arg1 options:(unsigned long long)arg2 managedConfiguration:(id)arg3 ;
-(BOOL)setDefaultContainer:(id)arg1 forAccount:(id)arg2 error:(id*)arg3 ;
-(BOOL)clearChangeHistoryForClientIdentifier:(id)arg1 toChangeAnchor:(id)arg2 error:(id*)arg3 ;
-(id)mainContactStore;
-(id)contactFromPerson:(void*)arg1 mutable:(BOOL)arg2 ;
-(id)contactFromPersonID:(int)arg1 keysToFetch:(id)arg2 ;
-(id)contactFromPerson:(void*)arg1 ;
-(id)_contactFromPersonID:(int)arg1 keysToFetch:(id)arg2 ;
-(id)contactFromPersonID:(int)arg1 ;
-(id)contactIdentifierFromPersonID:(int)arg1 ;
-(void*)personFromContact:(id)arg1 ;
-(int)multiValueIdentifierFromLabeledValue:(id)arg1 ;
-(id)labeledValueFromMultiValueIdentifier:(int)arg1 contact:(id)arg2 key:(id)arg3 ;
-(id)contactIdentifierFromPublicPersonID:(int)arg1 ;
-(id)_contactFromPublicABPerson:(void*)arg1 keysToFetch:(id)arg2 ;
-(void*)_publicABPersonFromContact:(id)arg1 publicAddressBook:(const void*)arg2 ;
-(int)_publicMultiValueIdentifierFromLabeledValue:(id)arg1 ;
-(id)contactFromPublicPersonID:(int)arg1 keysToFetch:(id)arg2 ;
-(id)_labeledValueFromPublicMultiValueIdentifier:(int)arg1 contact:(id)arg2 key:(id)arg3 ;
-(void*)publicABPersonFromContact:(id)arg1 publicAddressBook:(const void*)arg2 ;
-(int)publicMultiValueIdentifierFromLabeledValue:(id)arg1 ;
-(id)labeledValueFromPublicMultiValueIdentifier:(int)arg1 contact:(id)arg2 key:(id)arg3 ;
-(id)_fetchRequestInfosForEmailOrPhoneForContact:(id)arg1 ;
-(id)_executeFetchRequestsWithInfos:(id)arg1 unifyResults:(BOOL)arg2 keysToFetch:(id)arg3 error:(id*)arg4 ;
-(id)contactsMatchingPropertiesOfContact:(id)arg1 unifyResults:(BOOL)arg2 keysToFetch:(id)arg3 error:(id*)arg4 ;
-(BOOL)moveContacts:(id)arg1 fromContainer:(id)arg2 toContainer:(id)arg3 error:(id*)arg4 ;
-(id)enumeratorForChangeHistoryFetchRequest:(id)arg1 error:(id*)arg2 ;
-(CNiOSAddressBook *)addressBook;
-(id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(id)unifiedContactWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(id)_crossPlatformUnifiedMeContactWithKeysToFetch:(id)arg1 error:(id*)arg2 ;
-(id)groupWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)executeFetchRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)registerChangeHistoryClientIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)enumerateContactsWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
@end

