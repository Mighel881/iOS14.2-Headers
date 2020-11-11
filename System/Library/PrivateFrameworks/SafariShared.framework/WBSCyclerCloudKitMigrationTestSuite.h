/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WBSCyclerTestSuite.h>

@class WBSCyclerTestSuiteBookmarkAuxiliary, WBSCyclerBookmarkListRepresentation, NSString;

@interface WBSCyclerCloudKitMigrationTestSuite : NSObject <WBSCyclerTestSuite> {

	WBSCyclerTestSuiteBookmarkAuxiliary* _bookmarkAuxiliary;
	unsigned long long _bookmarksGeneratedPriorToMigration;
	WBSCyclerBookmarkListRepresentation* _topLevelBookmarksPriorToMigration;
	BOOL _hasValidatedResultsOfPrimaryMigration;
	BOOL _finished;

}

@property (getter=isFinished,nonatomic,readonly) BOOL finished;              //@synthesize finished=_finished - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)setValue:(id)arg1 forConfigurationKey:(id)arg2 ;
-(id)_descriptionForErrorCode:(long long)arg1 ;
-(id)init;
-(void)runWithTarget:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_createRandomBookmarkWithTarget:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_generateDAVServerIDsForExistingBookmarksWithTarget:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_migrateToCloudKitWithTarget:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_validateResultsOfMigrationWithTarget:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_fetchBookmarksPriorToMigrationWithTarget:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_errorWithCode:(long long)arg1 ;
-(BOOL)isFinished;
@end
