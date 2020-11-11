/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/FCPrivateDataController.h>
#import <libobjc.A.dylib/FCAppActivityObserving.h>

@class NSDictionary, NSMutableSet, NSString;

@interface FCPrivateChannelMembershipController : FCPrivateDataController <FCAppActivityObserving> {

	NSDictionary* _membershipsByChannelID;
	NSMutableSet* _membershipReferences;

}

@property (nonatomic,retain) NSDictionary * membershipsByChannelID;              //@synthesize membershipsByChannelID=_membershipsByChannelID - In the implementation block
@property (nonatomic,retain) NSMutableSet * membershipReferences;                //@synthesize membershipReferences=_membershipReferences - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)desiredKeys;
+(long long)commandQueueUrgency;
+(BOOL)requiresPushNotificationSupport;
+(id)backingRecordZoneIDs;
+(id)commandsToMergeLocalDataToCloud:(id)arg1 ;
+(id)localStoreFilename;
+(unsigned long long)localStoreVersion;
+(BOOL)requiresBatchedSync;
+(id)commandStoreFileName;
+(BOOL)requiresHighPriorityFirstSync;
+(id)backingRecordIDs;
-(void)removeObserver:(id)arg1 ;
-(void)setMembershipsByChannelID:(NSDictionary *)arg1 ;
-(void)fetchMembershipsWithIDs:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)loadLocalCachesFromStore;
-(BOOL)isAllowedToSeeDraftsForChannelID:(id)arg1 ;
-(BOOL)hasMemberships;
-(id)referenceToMembershipForMembershipID:(id)arg1 ;
-(void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2 ;
-(void)_fetchPrivateChannelMembershipsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isMemberOfChannelID:(id)arg1 ;
-(void)setMembershipReferences:(NSMutableSet *)arg1 ;
-(void)_refreshPublicMembershipsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldShowAllDraftContent;
-(void)addItem:(id)arg1 toStore:(BOOL)arg2 ;
-(NSMutableSet *)membershipReferences;
-(void)addObserver:(id)arg1 ;
-(void)changedMembershipsFrom:(id)arg1 toMemberships:(id)arg2 ;
-(id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3 ;
-(id)feedDescriptorForDraftFeedForChannel:(id)arg1 ;
-(void)activityObservingApplicationWindowDidBecomeForeground;
-(void)isAllowedToSeeArticleID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)isAllowedToSeeIssueID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1 ;
-(NSDictionary *)membershipsByChannelID;
-(void)refreshPublicMemberships;
-(void)removeItemWithItemID:(id)arg1 ;
-(id)membershipChannelIDs;
-(void)dealloc;
@end
