/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TrialServer/TrialServer-Structs.h>
@class TRIDatabase;

@interface TRIContentTracker : NSObject {

	TRIDatabase* _db;

}
+(id)contentIdentifierForExperimentArtifactWithDeployment:(id)arg1 ;
+(BOOL)decodeContentIdentifier:(id)arg1 experimentDeployment:(id*)arg2 treatmentId:(id*)arg3 container:(id*)arg4 ;
+(id)contentIdentifierForTreatmentArtifactWithTreatmentId:(id)arg1 container:(id)arg2 ;
-(id)init;
-(PASDBTransactionCompletion_)writeTransactionWithFailableBlock:(/*^block*/id)arg1 ;
-(PASDBTransactionCompletion_)readTransactionWithFailableBlock:(/*^block*/id)arg1 ;
-(id)initWithDatabase:(id)arg1 ;
-(BOOL)addRefWithContentIdentifier:(id)arg1 ;
-(BOOL)dropRefWithContentIdentifier:(id)arg1 ;
-(BOOL)enumerateTrackedItemsWithBlock:(/*^block*/id)arg1 ;
-(BOOL)clearRefsWithContentIdentifier:(id)arg1 ;
-(BOOL)_addOrDropRefWithContentIdentifier:(id)arg1 changeType:(unsigned long long)arg2 ;
-(BOOL)refCountForContentIdentifier:(id)arg1 refCount:(long long*)arg2 ;
@end

