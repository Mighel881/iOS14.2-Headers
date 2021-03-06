/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_semaphore;
#import <ContactsUI/ContactsUI-Structs.h>
@class NSMapTable, NSObject, NSArray, CNContactMatchSummarizer, NSMutableAttributedString, CNContactStoreDataSource, CNContactStoreFilter, CNManagedConfiguration, NSMutableDictionary, CNContactDataSourceLIFOScheduler, NSPointerArray, NSMutableArray;

@interface CNContactStoreSnapshot : NSObject {

	unsigned long long _contactsCount;
	NSMapTable* _contactsCache;
	NSObject*<OS_dispatch_semaphore> _cacheAccessSemaphore;
	NSRange _currentlyLoadingBackgroundRange;
	NSArray* _sections;
	NSArray* _indexSections;
	CNContactMatchSummarizer* _summarizer;
	NSMutableAttributedString* _emptyExcerptInstanceMarker;
	unsigned long long _lastRequestedIndex;
	CNContactStoreDataSource* _dataSource;
	CNContactStoreFilter* _filter;
	CNManagedConfiguration* _managedConfiguration;
	NSMutableDictionary* _contactMatchInfos;
	CNContactDataSourceLIFOScheduler* _summarizationQueue;
	NSPointerArray* _summarizationFutures;
	NSMapTable* _identifiersToIndexPath;
	NSMutableArray* _batchContactIdentifiers;

}

@property (assign,nonatomic,__weak) CNContactStoreDataSource * dataSource;                         //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) CNContactStoreFilter * filter;                                        //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) CNManagedConfiguration * managedConfiguration;                        //@synthesize managedConfiguration=_managedConfiguration - In the implementation block
@property (nonatomic,readonly) NSArray * contacts; 
@property (nonatomic,readonly) NSMutableDictionary * contactMatchInfos;                            //@synthesize contactMatchInfos=_contactMatchInfos - In the implementation block
@property (nonatomic,readonly) CNContactDataSourceLIFOScheduler * summarizationQueue;              //@synthesize summarizationQueue=_summarizationQueue - In the implementation block
@property (nonatomic,readonly) NSPointerArray * summarizationFutures;                              //@synthesize summarizationFutures=_summarizationFutures - In the implementation block
@property (nonatomic,readonly) NSArray * sections; 
@property (nonatomic,readonly) NSArray * indexSections; 
@property (nonatomic,readonly) NSMapTable * identifiersToIndexPath;                                //@synthesize identifiersToIndexPath=_identifiersToIndexPath - In the implementation block
@property (nonatomic,readonly) NSMutableArray * batchContactIdentifiers;                           //@synthesize batchContactIdentifiers=_batchContactIdentifiers - In the implementation block
-(CNManagedConfiguration *)managedConfiguration;
-(NSArray *)sections;
-(void)_generateExcerptsInRange:(NSRange)arg1 ;
-(unsigned long long)countOf_contacts;
-(void)setFilter:(CNContactStoreFilter *)arg1 ;
-(CNContactStoreFilter *)filter;
-(NSMutableDictionary *)contactMatchInfos;
-(NSArray *)contacts;
-(id)init;
-(void)setManagedConfiguration:(CNManagedConfiguration *)arg1 ;
-(id)_keysToFetch;
-(NSMapTable *)identifiersToIndexPath;
-(void)prepareAllContacts;
-(void)setDataSource:(CNContactStoreDataSource *)arg1 ;
-(id)objectIn_contactsAtIndex:(unsigned long long)arg1 ;
-(NSPointerArray *)summarizationFutures;
-(void)prepareEnoughContacts;
-(CNContactStoreDataSource *)dataSource;
-(void)_loadAllContacts;
-(CNContactDataSourceLIFOScheduler *)summarizationQueue;
-(NSArray *)indexSections;
-(void)_loadContactsInRange:(NSRange)arg1 inBackground:(BOOL)arg2 ;
-(NSMutableArray *)batchContactIdentifiers;
-(void)dealloc;
@end

