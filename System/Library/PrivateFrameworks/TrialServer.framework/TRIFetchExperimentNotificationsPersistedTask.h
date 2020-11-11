/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialProto/TRIPBMessage.h>

@class TRIPBTimestamp, NSMutableArray, TRIPersistedTaskAttribution;

@interface TRIFetchExperimentNotificationsPersistedTask : TRIPBMessage

@property (nonatomic,retain) TRIPBTimestamp * earliestTimestamp; 
@property (assign,nonatomic) BOOL hasEarliestTimestamp; 
@property (nonatomic,retain) NSMutableArray * namespacesArray; 
@property (nonatomic,readonly) unsigned long long namespacesArray_Count; 
@property (assign,nonatomic) BOOL rollbacksOnly; 
@property (assign,nonatomic) BOOL hasRollbacksOnly; 
@property (nonatomic,retain) TRIPersistedTaskAttribution * taskAttribution; 
@property (assign,nonatomic) BOOL hasTaskAttribution; 
@property (assign,nonatomic) int retryCount; 
@property (assign,nonatomic) BOOL hasRetryCount; 
+(id)descriptor;
@end
