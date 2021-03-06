/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Notes/ICBaseSearchIndexerDataSource.h>

@interface ICHTMLSearchIndexerDataSource : ICBaseSearchIndexerDataSource
-(id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)arg1 ;
-(id)persistentStoreCoordinator;
-(unsigned long long)indexingPriority;
-(BOOL)isFolderWithServerShareChanged:(id)arg1 ;
-(void)contextWillSave:(id)arg1 ;
-(id)dataSourceIdentifier;
-(id)addNotesFromSubtree:(id)arg1 ;
-(id)indexableObjectIDsMatchingPredicate:(id)arg1 sortByReversedReindexingOrder:(BOOL)arg2 context:(id)arg3 ;
-(id)newManagedObjectContext;
@end

