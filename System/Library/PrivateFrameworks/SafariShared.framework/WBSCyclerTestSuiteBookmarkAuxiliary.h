/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class WBSCyclerOperation;

@interface WBSCyclerTestSuiteBookmarkAuxiliary : NSObject {

	WBSCyclerOperation* _initialClearOperation;
	WBSCyclerOperation* _resetToDAVModeOperation;
	WBSCyclerOperation* _generateDAVServerIDsForExistingBookmarksOperation;
	WBSCyclerOperation* _cloudKitMigrationOperation;
	WBSCyclerOperation* _clearLocalDataOperation;
	float _operationBackoffRatio;

}

@property (nonatomic,readonly) float operationBackoffRatio;              //@synthesize operationBackoffRatio=_operationBackoffRatio - In the implementation block
-(id)_descriptionForErrorCode:(long long)arg1 ;
-(id)init;
-(BOOL)hasPerformedOperation:(long long)arg1 ;
-(void)performOperation:(long long)arg1 withTarget:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)performOperation:(long long)arg1 withTarget:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)validateBookmarks:(id)arg1 expectingBookmarks:(id)arg2 context:(id)arg3 ;
-(void)fetchAndValidateBookmarksWithExpectedBookmarks:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_errorWithCode:(long long)arg1 userInfo:(id)arg2 ;
-(void)resetOperation:(long long)arg1 ;
-(id)_errorWithCode:(long long)arg1 ;
-(id)_formattedStringForBookmark:(id)arg1 indentationLevel:(unsigned long long)arg2 ;
-(id)_expandedDescriptionForBookmark:(id)arg1 ;
-(void)_attemptInitialClearWithTarget:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_attemptResetToDAVModeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_attemptToGenerateDAVServerIDsForExistingBookmarksWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_attemptCloudKitMigrationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_attemptToClearDataWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_attributeStringForBookmark:(id)arg1 multiline:(BOOL)arg2 ;
-(id)_descriptionForBookmark:(id)arg1 ;
-(float)operationBackoffRatio;
@end
