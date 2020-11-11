/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ICCloudObject <NSObject,ICHasDatabaseScope>
@required
+(id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+(id)newPlaceholderObjectForRecordName:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+(id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+(id)allCloudObjectsInContext:(id)arg1;
-(id)objectID;
-(BOOL)wantsUserSpecificRecord;
-(id)newlyCreatedRecordWithObfuscator:(id)arg1;
-(BOOL)isValidObject;
-(BOOL)needsToSaveUserSpecificRecord;
-(id)newlyCreatedUserSpecificRecord;
-(void)didSaveUserSpecificRecord:(id)arg1;
-(void)didFailToSaveUserSpecificRecord:(id)arg1 accountID:(id)arg2 error:(id)arg3;
-(void)didDeleteUserSpecificRecordID:(id)arg1;
-(void)objectWasDeletedFromCloud;
-(void)objectWasDeletedFromCloudByAnotherDevice;
-(void)objectWillBePushedToCloudWithOperation:(id)arg1;
-(void)objectWasPushedToCloudWithOperation:(id)arg1 serverRecord:(id)arg2;
-(void)objectFailedToBePushedToCloudWithOperation:(id)arg1 record:(id)arg2 error:(id)arg3;
-(void)objectWasFetchedButDoesNotExistInCloud;
-(id)recordID;
-(void)deleteFromLocalDatabase;
-(id)recordType;
-(id)className;
-(id)loggingDescription;
-(BOOL)needsToBePushedToCloud;
-(BOOL)needsToBeDeletedFromCloud;
-(BOOL)needsToBeFetchedFromCloud;
-(id)newlyCreatedRecord;
-(void)objectWasFetchedFromCloudWithRecord:(id)arg1 accountID:(id)arg2;
-(void)fixBrokenReferences;
-(void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2;
-(id)userSpecificRecordID;
-(void)didFetchUserSpecificRecord:(id)arg1 accountID:(id)arg2;
-(BOOL)isInICloudAccount;
-(id)objectsToBeDeletedBeforeThisObject;

@end
