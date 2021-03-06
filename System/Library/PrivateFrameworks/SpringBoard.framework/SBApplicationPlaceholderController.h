/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBLeafIconObserver.h>
#import <libobjc.A.dylib/SBApplicationPlaceholderLifecycleObserver.h>
#import <libobjc.A.dylib/SBApplicationPlaceholderDelegate.h>

@class SBApplicationController, SBApplicationLibraryObserver, NSMutableDictionary, NSMutableSet, NSCountedSet, NSString;

@interface SBApplicationPlaceholderController : NSObject <SBLeafIconObserver, SBApplicationPlaceholderLifecycleObserver, SBApplicationPlaceholderDelegate> {

	SBApplicationController* _appController;
	SBApplicationLibraryObserver* _lsWorkspaceObserver;
	NSMutableDictionary* _placeholdersByBundleID;
	NSMutableSet* _pendingAdded;
	NSMutableSet* _pendingInstalled;
	NSMutableSet* _pendingCancelled;
	NSCountedSet* _removingPlaceholderProxies;
	BOOL _hasDownloadedFromStore;
	BOOL _usingNetwork;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)isUsingNetwork;
-(id)init;
-(void)iconAccessoriesDidUpdate:(id)arg1 ;
-(void)_processPendingProxies;
-(id)placeholdersByDisplayID;
-(void)placeholderWantsUninstall:(id)arg1 ;
-(void)applicationPlaceholdersNetworkUsageChanged:(BOOL)arg1 ;
-(void)applicationPlaceholdersInstalled:(id)arg1 ;
-(id)placeholderForDisplayID:(id)arg1 ;
-(BOOL)hasDownloadedStoreApplication;
-(void)_postPlaceholdersDidChangeForAdded:(id)arg1 modified:(id)arg2 removed:(id)arg3 ;
-(BOOL)placeholderShouldAllowPausing:(id)arg1 ;
-(void)_removePlaceholders:(id)arg1 forInstall:(BOOL)arg2 ;
-(void)_addPlaceholders:(id)arg1 ;
-(void)applicationPlaceholdersCancelled:(id)arg1 ;
-(void)_finishPlaceholder:(id)arg1 ;
-(void)applicationPlaceholdersAdded:(id)arg1 ;
-(void)dealloc;
@end

