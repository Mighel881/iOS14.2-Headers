/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSManagedObject, NSDictionary, PFUbiquityKnowledgeVector, NSDate, NSNumber, NSArray, PFUbiquityImportContext, NSMutableDictionary;

@interface PFUbiquityRecordImportConflict : NSObject {

	NSString* _conflictingObjectGlobalIDStr;
	NSManagedObject* _sourceObject;
	NSDictionary* _conflictingLogContent;
	PFUbiquityKnowledgeVector* _conflictingLogKnowledgeVector;
	PFUbiquityKnowledgeVector* _currentKnowledgeVector;
	int _conflictingLogTransactionType;
	NSDate* _conflictLogDate;
	NSNumber* _conflictingLogTransactionNumber;
	NSArray* _transactionHistory;
	NSDictionary* _globalIDIndexToLocalIDURIMap;
	PFUbiquityImportContext* _importContext;
	NSMutableDictionary* _relationshipsToObjectIDsToCheck;

}

@property (nonatomic,retain) NSString * conflictingObjectGlobalIDStr;                                //@synthesize conflictingObjectGlobalIDStr=_conflictingObjectGlobalIDStr - In the implementation block
@property (nonatomic,retain) NSManagedObject * sourceObject;                                         //@synthesize sourceObject=_sourceObject - In the implementation block
@property (nonatomic,retain) NSDictionary * conflictingLogContent;                                   //@synthesize conflictingLogContent=_conflictingLogContent - In the implementation block
@property (nonatomic,retain) PFUbiquityKnowledgeVector * conflictingLogKnowledgeVector;              //@synthesize conflictingLogKnowledgeVector=_conflictingLogKnowledgeVector - In the implementation block
@property (nonatomic,retain) PFUbiquityKnowledgeVector * currentKnowledgeVector;                     //@synthesize currentKnowledgeVector=_currentKnowledgeVector - In the implementation block
@property (assign,nonatomic) int conflictingLogTransactionType;                                      //@synthesize conflictingLogTransactionType=_conflictingLogTransactionType - In the implementation block
@property (nonatomic,retain) NSDate * conflictLogDate;                                               //@synthesize conflictLogDate=_conflictLogDate - In the implementation block
@property (nonatomic,retain) NSNumber * conflictingLogTransactionNumber;                             //@synthesize conflictingLogTransactionNumber=_conflictingLogTransactionNumber - In the implementation block
@property (nonatomic,retain) NSArray * transactionHistory;                                           //@synthesize transactionHistory=_transactionHistory - In the implementation block
@property (nonatomic,retain) NSDictionary * globalIDIndexToLocalIDURIMap;                            //@synthesize globalIDIndexToLocalIDURIMap=_globalIDIndexToLocalIDURIMap - In the implementation block
@property (nonatomic,retain) PFUbiquityImportContext * importContext;                                //@synthesize importContext=_importContext - In the implementation block
@property (nonatomic,readonly) NSDictionary * relationshipToObjectIDsToCheck;                        //@synthesize relationshipsToObjectIDsToCheck=_relationshipsToObjectIDsToCheck - In the implementation block
+(void)initialize;
+(id)electAncestorKnowledgeVectorForKnowledgeVector:(id)arg1 withExportingPeerID:(id)arg2 fromPeerSnapshotCollection:(id)arg3 ;
+(id)createSnapshotFromManagedObject:(id)arg1 withSourceObject:(id)arg2 ;
+(id)createTransactionLogForTransactionEntry:(id)arg1 withImportContext:(id)arg2 error:(id*)arg3 ;
+(int)resolvedTypeForConflictingLogType:(int)arg1 andLatestTransactionEntry:(id)arg2 skipObject:(BOOL*)arg3 ;
-(BOOL)resolveMergeConflictForLogContent:(id)arg1 previousSnapshot:(id)arg2 andAncestorSnapshot:(id)arg3 withOldVersion:(unsigned)arg4 andNewVersion:(unsigned)arg5 error:(id*)arg6 ;
-(id)createSetOfManagedObjectIDsForGlobalIDsInRelationship:(id)arg1 withValue:(id)arg2 withGlobalIDToLocalIDURIMap:(id)arg3 andTransactionLog:(id)arg4 ;
-(void)setConflictingObjectGlobalIDStr:(NSString *)arg1 ;
-(void)addObjectIDsForDiff:(id)arg1 forRelationship:(id)arg2 ;
-(void)addObjectID:(id)arg1 forRelationship:(id)arg2 ;
-(id)_newNormalizedSnapshot:(id)arg1 forObject:(id)arg2 ;
-(NSArray *)transactionHistory;
-(id)createSnapshotDictionaryFromLogEntry:(id)arg1 withError:(id*)arg2 ;
-(PFUbiquityKnowledgeVector *)conflictingLogKnowledgeVector;
-(PFUbiquityImportContext *)importContext;
-(NSDate *)conflictLogDate;
-(id)createSnapshotFromBaselineForEntry:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)globalIDIndexToLocalIDURIMap;
-(id)createSnapshotDictionaryForObjectWithEntry:(id)arg1 inTransactionLog:(id)arg2 withError:(id*)arg3 ;
-(NSDictionary *)conflictingLogContent;
-(NSNumber *)conflictingLogTransactionNumber;
-(NSString *)conflictingObjectGlobalIDStr;
-(int)conflictingLogTransactionType;
-(id)init;
-(NSManagedObject *)sourceObject;
-(id)description;
-(BOOL)resolveConflict:(id*)arg1 ;
-(void)setCurrentKnowledgeVector:(PFUbiquityKnowledgeVector *)arg1 ;
-(void)setConflictLogDate:(NSDate *)arg1 ;
-(void)setSourceObject:(NSManagedObject *)arg1 ;
-(void)setConflictingLogTransactionType:(int)arg1 ;
-(void)setConflictingLogKnowledgeVector:(PFUbiquityKnowledgeVector *)arg1 ;
-(PFUbiquityKnowledgeVector *)currentKnowledgeVector;
-(void)setConflictingLogTransactionNumber:(NSNumber *)arg1 ;
-(void)setTransactionHistory:(NSArray *)arg1 ;
-(void)setGlobalIDIndexToLocalIDURIMap:(NSDictionary *)arg1 ;
-(void)setImportContext:(PFUbiquityImportContext *)arg1 ;
-(void)setConflictingLogContent:(NSDictionary *)arg1 ;
-(id)createSnapshotFromLogContent:(id)arg1 withTransactionLog:(id)arg2 ;
-(NSDictionary *)relationshipToObjectIDsToCheck;
-(void)dealloc;
@end
