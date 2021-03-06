/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLBackgroundJobWorkerCoordinatorDelegate.h>

@protocol PLBackgroundJobLibraryCoordinatorDelegate;
@class NSMutableArray, PLPhotoLibraryBundlePriorityTuple, PLBackgroundJobWorkerCoordinator, NSString;

@interface PLBackgroundJobLibraryCoordinator : NSObject <PLBackgroundJobWorkerCoordinatorDelegate> {

	NSMutableArray* _pendingPhotoLibraryBundles;
	PLPhotoLibraryBundlePriorityTuple* _currentPhotoLibraryBundle;
	PLBackgroundJobWorkerCoordinator* _workerCoordinator;
	os_unfair_lock_s _lock;
	id<PLBackgroundJobLibraryCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PLBackgroundJobLibraryCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)workerCoordinatorDidFinishAllSubmittedJobsOnBundle:(id)arg1 ;
-(id)initWithWorkerCoordinator:(id)arg1 ;
-(id)init;
-(id<PLBackgroundJobLibraryCoordinatorDelegate>)delegate;
-(void)_submitNextQueuedBundle;
-(void)stopBackgroundJobsOnAllBundles;
-(void)setDelegate:(id<PLBackgroundJobLibraryCoordinatorDelegate>)arg1 ;
-(void)_handleAllBundlesCompleted;
-(void)startBackgroundJobsOnBundles:(id)arg1 priority:(unsigned long long)arg2 ;
-(BOOL)hasPendingJobsOnBundles:(id)arg1 priority:(unsigned long long)arg2 ;
-(void)_handleBundleComplete:(id)arg1 ;
@end

