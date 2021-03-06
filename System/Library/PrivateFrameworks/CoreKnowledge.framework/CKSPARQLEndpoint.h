/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CKKnowledgeStore;

@interface CKSPARQLEndpoint : NSObject {

	CKKnowledgeStore* _knowledgeStore;

}
-(id)initWithKnowledgeStore:(id)arg1 ;
-(id)sparqlResultsForQuery:(id)arg1 error:(id*)arg2 ;
-(void)importTriplesFromFileAtPath:(id)arg1 ;
@end

