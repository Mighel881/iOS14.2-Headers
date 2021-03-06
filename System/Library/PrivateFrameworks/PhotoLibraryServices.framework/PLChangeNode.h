/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PLChangePublisher;
@class NSURL, PLLibraryServicesManager, NSString, PLUpdatedOrderKeys, PLCoreDataChangeMerger, PLDelayedSaveActionsProcessor;

@interface PLChangeNode : NSObject {

	NSURL* _libraryUrl;
	PLLibraryServicesManager* _libraryServicesManager;
	unsigned char _nodeUUID[16];
	NSString* _nodeUUIDShortString;
	PLUpdatedOrderKeys* _updatedOrderKeys;
	PLCoreDataChangeMerger* _changeMerger;
	id<PLChangePublisher> _changePublisher;
	PLDelayedSaveActionsProcessor* _delayedSaveActionsProcessor;

}
-(BOOL)_isInvalidRemoteChangeEvent:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)publishRemoteChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)photoLibrary;
-(id)initWithLibraryURL:(id)arg1 changeMerger:(id)arg2 changePublisher:(id)arg3 libraryServicesManager:(id)arg4 ;
-(void)distributeRemoteContextDidSaveEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 transaction:(id)arg3 ;
-(void)publishChangesForDidSaveObjectIDsNotification:(id)arg1 ;
-(void)disconnectManagedObjectContext:(id)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(void)connectManagedObjectContext:(id)arg1 ;
@end

