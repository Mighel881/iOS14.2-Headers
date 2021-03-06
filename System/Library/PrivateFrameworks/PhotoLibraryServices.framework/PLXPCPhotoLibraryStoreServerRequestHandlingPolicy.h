/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <CoreData/NSXPCStoreServerRequestHandlingPolicy.h>

@class PLLimitedLibraryFetchFilter, PLAssetsdConnectionAuthorization, NSString, NSDictionary, NSNumber;

@interface PLXPCPhotoLibraryStoreServerRequestHandlingPolicy : NSXPCStoreServerRequestHandlingPolicy {

	PLLimitedLibraryFetchFilter* _fetchFilter;
	PLAssetsdConnectionAuthorization* _connectionAuthorization;
	NSString* _fetchFilterClientIdentifier;
	NSDictionary* _fetchFilterEntityNameToPredicateMap;
	NSNumber* _fetchFilterEnabledStatus;
	os_unfair_lock_s _fetchFilterLock;

}
-(id)init;
-(id)restrictingWritePredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2 ;
-(id)_restrictedEntityNamesAllowedForContext:(id)arg1 ;
-(id)initWithConnectionAuthorization:(id)arg1 ;
-(BOOL)shouldAcceptMetadataChangesFromClientWithContext:(id)arg1 ;
-(BOOL)shouldAcceptConnectionsFromClientWithContext:(id)arg1 ;
-(id)restrictingPullChangeHistoryPredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2 ;
-(id)_entityNamesAllowedByRestrictedDataEntitlements:(id)arg1 ;
-(id)restrictingReadPredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2 ;
-(void)limitedLibraryFetchFiltersUpdated:(id)arg1 ;
-(void)dealloc;
@end

