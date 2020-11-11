/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSMutableArray, NSArray;

@interface CXTransactionGroup : NSObject {

	NSMutableDictionary* _callSourceIdentifierToTransaction;
	NSMutableArray* _mutableCallSources;

}

@property (nonatomic,readonly) NSMutableDictionary * callSourceIdentifierToTransaction;              //@synthesize callSourceIdentifierToTransaction=_callSourceIdentifierToTransaction - In the implementation block
@property (nonatomic,readonly) NSMutableArray * mutableCallSources;                                  //@synthesize mutableCallSources=_mutableCallSources - In the implementation block
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
@property (nonatomic,copy,readonly) NSArray * callSources; 
@property (nonatomic,copy,readonly) NSArray * transactions; 
@property (nonatomic,copy,readonly) NSArray * allActions; 
-(id)init;
-(NSMutableArray *)mutableCallSources;
-(BOOL)isComplete;
-(NSArray *)transactions;
-(id)description;
-(NSArray *)allActions;
-(NSArray *)callSources;
-(void)addAction:(id)arg1 forCallSource:(id)arg2 ;
-(id)transactionForCallSource:(id)arg1 ;
-(NSMutableDictionary *)callSourceIdentifierToTransaction;
@end
