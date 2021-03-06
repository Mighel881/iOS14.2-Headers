/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Categories.framework/Categories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSLock, NSArray;

@interface CTCategories : NSObject {

	NSString* _indexVersionId;
	NSLock* _lookupLock;

}

@property (copy,readonly) NSArray * availableCategoryIDs; 
+(id)supportedWebBrowserBundleIdentifiersForDeviceFamily:(long long)arg1 ;
+(void)initialize;
+(id)systemBlockableBundleIdentifiers;
+(id)sharedCategories;
+(id)systemUnblockableBundleIdentifiersForDeviceFamily:(long long)arg1 ;
+(long long)currentIOSDevice;
+(id)systemBundleIdentifiers;
+(id)systemHiddenBundleIdentifiers;
+(id)systemUnblockableBundleIdentifiers;
+(id)systemBlockableBundleIdentifiersForDeviceFamily:(long long)arg1 ;
+(id)systemHiddenBundleIdentifiersForDeviceFamily:(long long)arg1 ;
-(void)categoryForDomainName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)categoriesForDomainNames:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)categoriesForDomainURLs:(id)arg1 responseWithError:(/*^block*/id)arg2 ;
-(void)categoriesForDomainURLs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)categoriesForDomainNames:(id)arg1 responseWithError:(/*^block*/id)arg2 ;
-(void)_emptySharedCache:(id)arg1 ;
-(void)categoryForBundleID:(id)arg1 responseWithError:(/*^block*/id)arg2 ;
-(NSArray *)availableCategoryIDs;
-(void)unCategorizedDomainsFromDomains:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)categoryForDomainURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)categoryForBundleID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)categoriesForBundleIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)categoryForBundleID:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)categoryForDomainName:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)categoriesForDomainNames:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)categoriesForBundleIDs:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)categoryForBundleID:(id)arg1 platform:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)categoryForDomainURL:(id)arg1 responseWithError:(/*^block*/id)arg2 ;
-(void)categoriesForBundleIDs:(id)arg1 platform:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)categoryForDomainName:(id)arg1 responseWithError:(/*^block*/id)arg2 ;
-(void)categoriesForBundleIDs:(id)arg1 responseWithError:(/*^block*/id)arg2 ;
-(void)categoryForDomainURL:(id)arg1 response:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)categoriesForDomainURLs:(id)arg1 response:(/*^block*/id)arg2 ;
@end

