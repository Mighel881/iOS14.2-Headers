/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNUIApplicationLaunchCheckin, CNUIPlaceholderProviderFactory, CNUIPRLikenessResolver, CNUILikenessRendering, CNUIUserActionDiscoveringEnvironment, CNLSApplicationWorkspace, CNCapabilities, CNUIDefaultUserActionFetcher;
#import <ContactsUI/ContactsUI-Structs.h>
@class CNUISchedulerProvider, CNContactStore, CNFavorites, CNUIUserActivityManager, CNUIMeContactMonitor, CNUIIDSAvailabilityProvider, CNContactChangesNotifier, CNUICoreRecentsManager, CNUIExternalComponentsFactory, CNCollation, CNHealthStoreManager, CNGeminiManager, CNContactsEnvironment;

@interface CNUIContactsEnvironment : NSObject {

	id<CNUIApplicationLaunchCheckin> _launchCheckinRegistrar;
	CNUISchedulerProvider* _defaultSchedulerProvider;
	CNContactStore* _contactStore;
	CNContactStore* _inProcessContactStore;
	CNFavorites* _inProcessFavorites;
	CNUIUserActivityManager* _inProcessActivityManager;
	id<CNUIPlaceholderProviderFactory> _placeholderProviderFactory;
	CNUIMeContactMonitor* _meMonitor;
	id<CNUIPRLikenessResolver> _cachingLikenessResolver;
	id<CNUILikenessRendering> _cachingLikenessRenderer;
	id<CNUILikenessRendering> _cachingMonogramRenderer;
	id<CNUIUserActionDiscoveringEnvironment> _actionDiscoveringEnvironment;
	CNUIIDSAvailabilityProvider* _idsAvailabilityProvider;
	id<CNLSApplicationWorkspace> _applicationWorkspace;
	id<CNCapabilities> _capabilities;
	id<CNUIDefaultUserActionFetcher> _defaultUserActionFetcher;
	CNContactChangesNotifier* _contactChangesNotifier;
	CNUICoreRecentsManager* _recentsManager;
	CNUIExternalComponentsFactory* _componentsFactory;
	UCollatorRef _sortCollator;
	CNCollation* _collation;
	CNHealthStoreManager* _healthStoreManager;
	CNGeminiManager* _geminiManager;
	CNContactsEnvironment* _cnEnvironment;

}

@property (nonatomic,retain) CNUISchedulerProvider * defaultSchedulerProvider;                                   //@synthesize defaultSchedulerProvider=_defaultSchedulerProvider - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                                      //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) CNContactStore * inProcessContactStore;                                             //@synthesize inProcessContactStore=_inProcessContactStore - In the implementation block
@property (nonatomic,retain) CNFavorites * inProcessFavorites;                                                   //@synthesize inProcessFavorites=_inProcessFavorites - In the implementation block
@property (nonatomic,retain) CNUIUserActivityManager * inProcessActivityManager;                                 //@synthesize inProcessActivityManager=_inProcessActivityManager - In the implementation block
@property (nonatomic,retain) id<CNUIPlaceholderProviderFactory> placeholderProviderFactory;                      //@synthesize placeholderProviderFactory=_placeholderProviderFactory - In the implementation block
@property (nonatomic,retain) CNUIMeContactMonitor * meMonitor;                                                   //@synthesize meMonitor=_meMonitor - In the implementation block
@property (nonatomic,retain) id<CNUIPRLikenessResolver> cachingLikenessResolver;                                 //@synthesize cachingLikenessResolver=_cachingLikenessResolver - In the implementation block
@property (nonatomic,retain) id<CNUILikenessRendering> cachingLikenessRenderer;                                  //@synthesize cachingLikenessRenderer=_cachingLikenessRenderer - In the implementation block
@property (nonatomic,retain) id<CNUILikenessRendering> cachingMonogramRenderer;                                  //@synthesize cachingMonogramRenderer=_cachingMonogramRenderer - In the implementation block
@property (nonatomic,retain) id<CNUIUserActionDiscoveringEnvironment> actionDiscoveringEnvironment;              //@synthesize actionDiscoveringEnvironment=_actionDiscoveringEnvironment - In the implementation block
@property (nonatomic,retain) CNUIIDSAvailabilityProvider * idsAvailabilityProvider;                              //@synthesize idsAvailabilityProvider=_idsAvailabilityProvider - In the implementation block
@property (nonatomic,retain) id<CNLSApplicationWorkspace> applicationWorkspace;                                  //@synthesize applicationWorkspace=_applicationWorkspace - In the implementation block
@property (nonatomic,retain) id<CNCapabilities> capabilities;                                                    //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,retain) id<CNUIDefaultUserActionFetcher> defaultUserActionFetcher;                          //@synthesize defaultUserActionFetcher=_defaultUserActionFetcher - In the implementation block
@property (nonatomic,retain) CNContactChangesNotifier * contactChangesNotifier;                                  //@synthesize contactChangesNotifier=_contactChangesNotifier - In the implementation block
@property (nonatomic,retain) CNUICoreRecentsManager * recentsManager;                                            //@synthesize recentsManager=_recentsManager - In the implementation block
@property (nonatomic,retain) CNUIExternalComponentsFactory * componentsFactory;                                  //@synthesize componentsFactory=_componentsFactory - In the implementation block
@property (assign,nonatomic) UCollatorRef sortCollator;                                                          //@synthesize sortCollator=_sortCollator - In the implementation block
@property (nonatomic,retain) CNCollation * collation;                                                            //@synthesize collation=_collation - In the implementation block
@property (nonatomic,retain) CNHealthStoreManager * healthStoreManager;                                          //@synthesize healthStoreManager=_healthStoreManager - In the implementation block
@property (nonatomic,retain) CNGeminiManager * geminiManager;                                                    //@synthesize geminiManager=_geminiManager - In the implementation block
@property (nonatomic,readonly) CNContactsEnvironment * cnEnvironment;                                            //@synthesize cnEnvironment=_cnEnvironment - In the implementation block
@property (nonatomic,retain) id<CNUIApplicationLaunchCheckin> launchCheckinRegistrar;                            //@synthesize launchCheckinRegistrar=_launchCheckinRegistrar - In the implementation block
@property (nonatomic,readonly) BOOL runningInContactsAppOniPad; 
+(id)makeCurrentEnvironment;
+(id)currentEnvironment;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id)nts_makeRecentsManager;
-(void)setInProcessActivityManager:(CNUIUserActivityManager *)arg1 ;
-(id<CNUIUserActionDiscoveringEnvironment>)actionDiscoveringEnvironment;
-(void)setCachingLikenessRenderer:(id<CNUILikenessRendering>)arg1 ;
-(CNUIExternalComponentsFactory *)componentsFactory;
-(CNContactsEnvironment *)cnEnvironment;
-(id<CNUILikenessRendering>)cachingMonogramRenderer;
-(void)setGeminiManager:(CNGeminiManager *)arg1 ;
-(id<CNCapabilities>)capabilities;
-(CNUICoreRecentsManager *)recentsManager;
-(id)init;
-(void)setCapabilities:(id<CNCapabilities>)arg1 ;
-(id)nts_makeActionDiscoveringEnvironment;
-(id<CNUIApplicationLaunchCheckin>)launchCheckinRegistrar;
-(void)setCollation:(CNCollation *)arg1 ;
-(void)setIdsAvailabilityProvider:(CNUIIDSAvailabilityProvider *)arg1 ;
-(id)nts_lazyApplicationWorkspace;
-(id)nts_lazyInProcessFavorites;
-(id)nts_lazyRecentsManager;
-(id)nts_lazyDefaultUserActionFetcher;
-(CNFavorites *)inProcessFavorites;
-(CNContactChangesNotifier *)contactChangesNotifier;
-(id)nts_lazyInProcessActivityManager;
-(id<CNUILikenessRendering>)cachingLikenessRenderer;
-(void)setPlaceholderProviderFactory:(id<CNUIPlaceholderProviderFactory>)arg1 ;
-(id<CNUIPRLikenessResolver>)cachingLikenessResolver;
-(id)nts_lazyIDSAvailabilityProvider;
-(void)setCachingLikenessResolver:(id<CNUIPRLikenessResolver>)arg1 ;
-(void)setSortCollator:(UCollatorRef)arg1 ;
-(void)setCachingMonogramRenderer:(id<CNUILikenessRendering>)arg1 ;
-(void)setHealthStoreManager:(CNHealthStoreManager *)arg1 ;
-(CNUIUserActivityManager *)inProcessActivityManager;
-(CNContactStore *)contactStore;
-(id)nts_lazyCapabilities;
-(id)nts_lazyCollation;
-(void)setMeMonitor:(CNUIMeContactMonitor *)arg1 ;
-(void)setApplicationWorkspace:(id<CNLSApplicationWorkspace>)arg1 ;
-(id)nts_lazyPlaceholderProviderFactory;
-(id)nts_lazyHealthStoreManager;
-(CNUIMeContactMonitor *)meMonitor;
-(void)setContactChangesNotifier:(CNContactChangesNotifier *)arg1 ;
-(void)setLaunchCheckinRegistrar:(id<CNUIApplicationLaunchCheckin>)arg1 ;
-(void)setActionDiscoveringEnvironment:(id<CNUIUserActionDiscoveringEnvironment>)arg1 ;
-(CNHealthStoreManager *)healthStoreManager;
-(void)setDefaultUserActionFetcher:(id<CNUIDefaultUserActionFetcher>)arg1 ;
-(CNUIIDSAvailabilityProvider *)idsAvailabilityProvider;
-(CNCollation *)collation;
-(void)setInProcessFavorites:(CNFavorites *)arg1 ;
-(CNUISchedulerProvider *)defaultSchedulerProvider;
-(id)initWithContactsEnvironment:(id)arg1 ;
-(id)nts_lazyComponentsFactory;
-(id)nts_lazyCachingLikenessRenderer;
-(void)setInProcessContactStore:(CNContactStore *)arg1 ;
-(CNContactStore *)inProcessContactStore;
-(UCollatorRef)nts_lazySortCollator;
-(CNGeminiManager *)geminiManager;
-(id)nts_makeCachingLikenessResolver;
-(id)nts_lazyCachingMonogramRenderer;
-(id<CNUIDefaultUserActionFetcher>)defaultUserActionFetcher;
-(void)setRecentsManager:(CNUICoreRecentsManager *)arg1 ;
-(id)nts_makeContactChangesNotifier;
-(BOOL)runningInContactsAppOniPad;
-(id<CNLSApplicationWorkspace>)applicationWorkspace;
-(id)nts_lazyActionDiscoveringEnvironment;
-(id)nts_lazyCachingLikenessResolver;
-(void)setDefaultSchedulerProvider:(CNUISchedulerProvider *)arg1 ;
-(id)nts_lazyContactStore;
-(id)nts_lazyContactChangesNotifier;
-(id)nts_lazyDefaultSchedulerProvider;
-(id)nts_lazyGeminiManager;
-(id)nts_lazyInProcessContactStore;
-(id<CNUIPlaceholderProviderFactory>)placeholderProviderFactory;
-(void)setComponentsFactory:(CNUIExternalComponentsFactory *)arg1 ;
-(void)dealloc;
-(UCollatorRef)sortCollator;
@end

