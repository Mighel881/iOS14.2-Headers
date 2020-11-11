/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ICInAppMessageManagerProtocol <NSObject>
@required
-(void)messageEntriesForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)messageEntriesForBundleIdentifiers:(id)arg1 completion:(/*^block*/id)arg2;
-(void)syncMessagesWithCompletion:(/*^block*/id)arg1;
-(void)addMessageEntry:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getPropertyForKey:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)setProperty:(id)arg1 forKey:(id)arg2 bundleIdentifier:(id)arg3 completion:(/*^block*/id)arg4;
-(void)removeMetadataForMessageIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)updateMetadata:(id)arg1 messageIdentifier:(id)arg2 bundleIdentifier:(id)arg3 completion:(/*^block*/id)arg4;
-(void)allMessageEntriesWithCompletion:(/*^block*/id)arg1;
-(void)updateMessageEntry:(id)arg1 completion:(/*^block*/id)arg2;
-(void)clearCachedResourcesForMessageWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)downloadResourcesForMessageWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)setGlobalProperty:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3;
-(void)removeMessageEntryWithIdentifier:(id)arg1 forBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)getMetadataForMessageIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)reportEventForMessageIdentifier:(id)arg1 withParams:(id)arg2 flushImmediately:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)getGlobalPropertyForKey:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resetMessagesWithCompletion:(/*^block*/id)arg1;
-(void)removeAllMessageEntriesForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getAllMetadataForBundleIdentifiers:(id)arg1 completion:(/*^block*/id)arg2;
-(void)flushEventsWithCompletion:(/*^block*/id)arg1;
-(void)messageEntryWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3;

@end
