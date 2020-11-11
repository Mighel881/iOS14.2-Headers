/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <libobjc.A.dylib/SGDSuggestManagerAllProtocol.h>

@class SGSqlEntityStore, NSXPCConnection, SGSuggestHistory, _PASNotificationToken, NSOperationQueue, SGDManagerForCTS, SGEKEventStoreProvider, CNContactStore, NSDictionary, NSLock, SGXpcTransaction, SGSearchableItemIdTriple, SGFuture, PETEventTracker2, _PASLock, NSMutableDictionary, SGServiceContext, NSString;

@interface SGDSuggestManager : NSObject <SGDSuggestManagerAllProtocol> {

	SGSqlEntityStore* _harvestStore;
	NSXPCConnection* _connection;
	SGSuggestHistory* _history;
	_PASNotificationToken* _assetUpdateToken;
	NSOperationQueue* _messageHarvestQueue;
	SGDManagerForCTS* _ctsManager;
	SGEKEventStoreProvider* _ekStoreProvider;
	CNContactStore* _contactStore;
	NSDictionary* _bundleIdToPET;
	NSLock* _dirtyLock;
	SGXpcTransaction* _dirtyTransaction;
	SGSearchableItemIdTriple* _lastSuggestionsFromMessageRequest;
	SGFuture* _lastSuggestionsFromMessageResponse;
	NSLock* _lastSuggestionsFromMessageLock;
	int _settingsChangeToken;
	PETEventTracker2* _pet2Tracker;
	_PASLock* _recentlyHarvestedDetailLock;
	BOOL _keepRealtimeAsLost;
	NSMutableDictionary* _bufferedInteractionsForBundle;
	SGServiceContext* _context;
	NSString* _clientName;

}

@property (nonatomic,readonly) SGServiceContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSString * clientName;                   //@synthesize clientName=_clientName - In the implementation block
+(void)initialize;
+(void)clearChangeHistory:(id)arg1 ;
+(id)fetchChangeHistory;
+(void)clearRequestCache;
-(void)fullDownloadRequestBatch:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)cnContactMatchesForRecordIds:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)contactMatchesByPhoneNumber:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)cnContactMatchesForRecordId:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)messagesToRefreshWithCompletion:(/*^block*/id)arg1 ;
-(void)foundInStringForRecordId:(id)arg1 style:(unsigned char)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)emailAddressIsSignificant:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)suggestionsFromSimpleMailMessage:(id)arg1 headers:(id)arg2 options:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)allDeliveriesWithLimit:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)allContactsWithSnippets:(BOOL)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)resetConfirmationAndRejectionHistory:(/*^block*/id)arg1 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sleepWithCompletion:(/*^block*/id)arg1 ;
-(void)recentURLsWithLimit:(unsigned)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)logMetricContactSearchResult:(int)arg1 recordId:(id)arg2 contactIdentifier:(id)arg3 bundleId:(id)arg4 ;
-(void)contactMatchesByEmailAddress:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)allRemindersLimitedTo:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)keepDirty:(BOOL)arg1 ;
-(void)deleteCloudKitZoneWithCompletion:(/*^block*/id)arg1 ;
-(void)removeAllStoredPseudoContactsWithCompletion:(/*^block*/id)arg1 ;
-(void)resolveFullDownloadRequests:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)logMetricContactCreated:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3 ;
-(void)prepareForRealtimeExtraction:(/*^block*/id)arg1 ;
-(void)evaluateRecipe:(id)arg1 attachments:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)contactMatchesWithContactIdentifier:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)logSuggestionInteractionForRecordId:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3 ;
-(void)planReceivedFromServerWithPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reminderTitleForContent:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)deleteInteractionsWithBundleId:(id)arg1 identifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearCachesFully:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)logMetricAutocompleteResult:(int)arg1 recordId:(id)arg2 contactIdentifier:(id)arg3 bundleId:(id)arg4 ;
-(void)reportMessagesFound:(id)arg1 lost:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)ipsosMessagesWithSearchableItems:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)realtimeSuggestionsFromURL:(id)arg1 title:(id)arg2 HTMLPayload:(id)arg3 extractionDate:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)suggestionsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)contactMatchesWithContact:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)originFromRecordId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_clientIsMessages;
-(void)schemaOrgToEvents:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearContactAggregatorConversation:(id)arg1 ;
-(void)spotlightReimportFromIdentifier:(id)arg1 forPersonHandle:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)rejectEventByRecordId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sendChatChangedNotificationWithDomainIdentifier:(id)arg1 ;
-(void)confirmReminderByRecordId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)logMetricSuggestedContactDetailUsed:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3 ;
-(void)suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 completionDelivery:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 fullCompletionHandler:(/*^block*/id)arg5 ;
-(void)rejectEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)clientName;
-(void)logMetricContactSearchResultSelected:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3 ;
-(id)initWithConnection:(id)arg1 store:(id)arg2 ;
-(void)addInteractions:(id)arg1 bundleId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)logMetricSearchResultsIncludedPureSuggestionWithBundleId:(id)arg1 ;
-(void)deleteInteractionsWithBundleId:(id)arg1 groupIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)containsNonCuratedData:(id)arg1 ;
-(void)_performAction:(id)arg1 onRecord:(id)arg2 completion:(/*^block*/id)arg3 withParentConfirmation:(BOOL)arg4 confirmRejectUI:(int)arg5 ;
-(id)_showInFormatStringWithLocalization:(id)arg1 ;
-(void)logEventInteractionForEntity:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3 ;
-(id)cachedResultForKey:(id)arg1 generateResult:(/*^block*/id)arg2 validateResults:(/*^block*/id)arg3 ;
-(void)allEventsLimitedTo:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)processInteractions:(id)arg1 bundleId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)confirmRealtimeReminder:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 fullCompletionHandler:(/*^block*/id)arg3 ;
-(id)initWithMessagesConnection:(id)arg1 store:(id)arg2 ;
-(BOOL)_clientIsMail;
-(BOOL)isSGEntity:(id)arg1 duplicateOfEKEvent:(id)arg2 withStore:(id)arg3 ;
-(id)initWithStore:(id)arg1 ctsManager:(id)arg2 ekStoreProvider:(id)arg3 contactStore:(id)arg4 pet2Tracker:(id)arg5 ;
-(void)addSearchableItems:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)harvestedSuggestionsFromMessage:(id)arg1 bundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)urlsFoundBetweenStartDate:(id)arg1 endDate:(id)arg2 excludingBundleIdentifiers:(id)arg3 limit:(unsigned)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)contactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_performAction:(id)arg1 onRecord:(id)arg2 completion:(/*^block*/id)arg3 rejectionUI:(int)arg4 ;
-(void)confirmEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)suggestionsFromURL:(id)arg1 title:(id)arg2 HTMLPayload:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)harvestedSuggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)_maybeFormatString;
-(void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_rejectReminderByRecordId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performAction:(id)arg1 onContactDetailRecord:(id)arg2 completion:(/*^block*/id)arg3 confirmRejectUI:(int)arg4 ;
-(void)rejectRealtimeReminder:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearContactAggregator;
-(void)contactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)_pmlTraining;
-(id)getPet2Tracker;
-(void)logEventInteractionForEventWithExternalIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3 ;
-(void)updateMessages:(id)arg1 state:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned short)interfaceForRealtimeReminder:(id)arg1 ;
-(void)sendRTCLogsWithCompletion:(/*^block*/id)arg1 ;
-(void)waitForEventWithIdentifier:(id)arg1 toAppearInEventStoreWithLastModificationDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(SGServiceContext *)context;
-(void)bumptTTLForNLEvent:(id)arg1 ;
-(id)shortNamesAndRealtimeEventsFromEntity:(id)arg1 message:(id)arg2 enrichments:(id)arg3 store:(id)arg4 ;
-(void)confirmEventByRecordId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)drainQueueCompletelyWithCompletion:(/*^block*/id)arg1 ;
-(SGMContactDetailUsedApp_)_appEnumForBundleId:(id)arg1 ;
-(void)eventFromRecordId:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)curatedEventKeyForExactMatchOfPseudoEvent:(id)arg1 candidates:(id)arg2 ;
-(void)rejectContact:(id)arg1 completion:(/*^block*/id)arg2 rejectionUI:(int)arg3 ;
-(void)setupManagerWithConnection:(id)arg1 store:(id)arg2 ctsManager:(id)arg3 ekStoreProvider:(id)arg4 contactStore:(id)arg5 pet2Tracker:(id)arg6 ;
-(void)contactFromRecordId:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithStore:(id)arg1 ;
-(void)_setupHistoryObserver:(id)arg1 ;
-(id)entityFromUniqueKey:(id)arg1 ;
-(void)eventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 options:(unsigned)arg5 withCompletion:(/*^block*/id)arg6 ;
-(void)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)contactMatchesWithContactIdentifiers:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)eventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 options:(unsigned)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)_suggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 dissectIfNecessary:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)shortNamesAndRealtimeEventsFromEntity:(id)arg1 enrichments:(id)arg2 store:(id)arg3 ;
-(void)deleteEventByRecordId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)eventFromUniqueId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)logMetricSuggestedContactDetailShown:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3 ;
-(void)noopWithCompletion:(/*^block*/id)arg1 ;
-(void)logUnknownContactInformationShownCount:(unsigned long long)arg1 notShownCount:(unsigned long long)arg2 bundleId:(id)arg3 ;
-(void)confirmRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)confirmContact:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)suggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)enqueueSearchableItems:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)realtimeContactsFromEntity:(id)arg1 enrichments:(id)arg2 sourceTextMessage:(id)arg3 store:(id)arg4 ;
-(void)launchInfoForSuggestedEventWithUniqueIdentifier:(id)arg1 sourceURL:(id)arg2 clientLocale:(id)arg3 ignoreUserActivitySupport:(BOOL)arg4 ignoreMailCheck:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)daemonExitWithCompletion:(/*^block*/id)arg1 ;
-(id)_dissectMessage:(id)arg1 store:(id)arg2 context:(id)arg3 ;
-(void)logEventInteractionForEventWithUniqueKey:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3 ;
-(BOOL)isSearchableItemPartOfReimport:(id)arg1 ;
-(void)namesForDetailCacheSnapshotsWithCompletion:(/*^block*/id)arg1 ;
-(void)rejectContactDetailRecord:(id)arg1 completion:(/*^block*/id)arg2 rejectionUI:(int)arg3 ;
-(void)registerForCoreSpotlightIndexing;
-(void)reminderAlarmTriggeredForRecordId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)storageContactFromRecordId:(id)arg1 ;
-(void)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)harvestedSuggestionsFromMessage:(id)arg1 bundleIdentifier:(id)arg2 options:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)logMetricAutocompleteUserSelectedRecordId:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3 ;
-(void)_storeAndGeocodeEntity:(id)arg1 spotlightBundleIdentifier:(id)arg2 spotlightUniqueIdentifier:(id)arg3 spotlightDomainIdentifier:(id)arg4 store:(id)arg5 afterCallbackQueue:(id)arg6 finalize:(/*^block*/id)arg7 ;
-(void)addSearchableItemMetadata:(id)arg1 htmlData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_isContactInteresting:(id)arg1 emailEntity:(id)arg2 enrichments:(id)arg3 hasContactCard:(BOOL)arg4 ;
-(id)filterRealtimeEvents:(id)arg1 ;
-(void)harvestedSuggestionsFromMessages:(id)arg1 bundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)filterRealtimeReminders:(id)arg1 ;
-(void)confirmContactDetailRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isSearchableItemPartOfReimportWithGetterBlock:(/*^block*/id)arg1 bundleIdentifier:(id)arg2 ;
-(void)launchAppForSuggestedEventUsingLaunchInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(BOOL)arg3 onlySignificant:(BOOL)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)logEventInteractionForRealtimeEvent:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3 ;
-(id)createLaunchIntentForStorageEvent:(id)arg1 ;
-(void)isEventCandidateForURL:(id)arg1 title:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)_confirmReminderByRecordId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteInteractionsWithBundleId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)filterPastEvents:(id)arg1 ;
-(void)_suggestionsFromMessageWithIdentifier:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 completionDelivery:(unsigned long long)arg4 providedBy:(/*^block*/id)arg5 dissectIfNecessary:(BOOL)arg6 ;
-(void)_suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 dissectIfNecessary:(BOOL)arg3 completionDelivery:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)geocodeEnrichmentsInPipelineEntity:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)_canBannerUseStoredDissection:(id)arg1 options:(unsigned long long)arg2 ;
-(void)rejectRecord:(id)arg1 completion:(/*^block*/id)arg2 rejectionUI:(int)arg3 ;
-(void)dealloc;
-(void)rejectReminderByRecordId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)isEnabledWithCompletion:(/*^block*/id)arg1 ;
-(void)eventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)_mapToPseudoEvents:(id)arg1 ;
-(void)powerStateWithCompletion:(/*^block*/id)arg1 ;
@end
