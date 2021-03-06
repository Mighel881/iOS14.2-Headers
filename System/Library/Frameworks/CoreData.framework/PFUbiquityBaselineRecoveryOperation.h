/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/PFUbiquityBaselineOperation.h>

@interface PFUbiquityBaselineRecoveryOperation : PFUbiquityBaselineOperation

@property (assign) NSObject*<PFUbiquityBaselineRecoveryOperationDelegate> delegate; 
-(NSObject*<PFUbiquityBaselineRecoveryOperationDelegate>)delegate;
-(BOOL)hasCurrentBaseline;
-(BOOL)electBaselineURLFromVersions:(id)arg1 withBaseline:(id)arg2 error:(id*)arg3 ;
-(BOOL)conflictsExistForBaseline:(id)arg1 ;
-(BOOL)resolveConflictsForBaseline:(id)arg1 withError:(id*)arg2 ;
-(BOOL)shouldReplaceLocalStoreWithBaseline:(id)arg1 ;
-(BOOL)replaceLocalStoreWithBaseline:(id)arg1 error:(id*)arg2 ;
-(id)electAncestorBaselineForConflictedBaselines:(id)arg1 dissentingBaselines:(id*)arg2 ;
-(void)main;
-(void)setDelegate:(NSObject*<PFUbiquityBaselineRecoveryOperationDelegate>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)retainedDelegate;
@end

