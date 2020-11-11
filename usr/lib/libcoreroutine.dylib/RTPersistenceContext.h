/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObjectContext.h>

@protocol RTPersistenceContextDelegate;
@class RTPredicateInspector;

@interface RTPersistenceContext : NSManagedObjectContext {

	long long _mirroringQualityOfService;
	id<RTPersistenceContextDelegate> _delegate;
	RTPredicateInspector* _predicateInspector;
	unsigned long long _options;

}

@property (__weak) id<RTPersistenceContextDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) RTPredicateInspector * predicateInspector;              //@synthesize predicateInspector=_predicateInspector - In the implementation block
@property (assign,nonatomic) unsigned long long options;                             //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) long long mirroringQualityOfService;                    //@synthesize mirroringQualityOfService=_mirroringQualityOfService - In the implementation block
-(BOOL)save:(id*)arg1 ;
-(id)executeRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)shouldSubstituteVariables:(id)arg1 inPredicate:(id)arg2 entityName:(id)arg3 model:(id)arg4 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(BOOL)_shouldExecute:(id*)arg1 ;
-(id<RTPersistenceContextDelegate>)delegate;
-(BOOL)_processError:(inout id*)arg1 ;
-(unsigned long long)options;
-(void)_updateRequest:(id*)arg1 includingContextOptions:(unsigned long long)arg2 ;
-(unsigned long long)countForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(void)setDelegate:(id<RTPersistenceContextDelegate>)arg1 ;
-(id)initWithConcurrencyType:(unsigned long long)arg1 ;
-(id)substitutionVariableKeys;
-(void)setMirroringQualityOfService:(long long)arg1 ;
-(long long)mirroringQualityOfService;
-(id)predicateWithDefaultSubstitutionVariables:(id)arg1 ;
-(RTPredicateInspector *)predicateInspector;
-(BOOL)validateEntityName:(id)arg1 inModel:(id)arg2 ;
-(BOOL)allowTombstones;
-(void)setPredicateInspector:(RTPredicateInspector *)arg1 ;
-(id)executeFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)initWithConcurrencyType:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
@end
